// ==UserScript==
// @name         DB PTIT Exercises Scraper
// @namespace    https://github.com/nvbangg/CodePTIT
// @version      1.0
// @description  Export All DB PTIT Exercises to Markdown
// @author       nvbangg (https://github.com/nvbangg)
// @copyright    Copyright (c) 2025 nvbangg (github.com/nvbangg)
// @homepage     https://github.com/nvbangg/CodePTIT
// @match        https://db.ptit.edu.vn/*
// @license      MIT
// @grant        none
// ==/UserScript==

(function () {
  "use strict";

  const API = "https://dbapi.ptit.edu.vn/api/app";
  const PAGE_SIZE = 500;

  const getToken = () => localStorage.getItem("access_token")?.replace(/"/g, "");

  const api = async (endpoint, method = "GET", body) => {
    const token = getToken();
    if (!token) throw new Error("Vui lòng đăng nhập!");

    const res = await fetch(`${API}${endpoint}`, {
      method,
      headers: { "Content-Type": "application/json", Authorization: `Bearer ${token}` },
      body: body ? JSON.stringify(body) : undefined,
    });

    if (!res.ok) throw new Error(res.status === 401 ? "Token hết hạn!" : `Lỗi ${res.status}`);
    return res.json();
  };

  const searchQuestions = (page) =>
    api(`/question/search?page=${page}&size=${PAGE_SIZE}&sort=createdAt,desc`, "POST", {});

  const getQuestion = (id) => api(`/question/${id}`);

  const formatQuestion = (q, n) => {
    const content = `## Câu ${n}: ${q.questionCode || q.code || "N/A"}: ${
      q.title || "Untitled"
    }\n\n- <small>Loại câu hỏi: ${q.type || "N/A"}</small>\n- <small>Độ khó: ${q.level || "N/A"}</small>\n\n${
      q.content || ""
    }\n\n`;
    return content;
  };

  const exportAll = async () => {
    try {
      updateBtn("Đang tải...", true);

      const firstPage = await searchQuestions(0);
      const total = firstPage.totalElements || 0;
      const pages = firstPage.totalPages || Math.ceil(total / PAGE_SIZE);

      if (!total) {
        alert("Không có câu hỏi!");
        updateBtn("Export Exercises", false);
        return;
      }

      let ids = firstPage.content?.map((q) => q.id) || [];

      for (let p = 1; p < pages; p++) {
        updateBtn(`Tải trang ${p + 1}/${pages}...`, true);
        const data = await searchQuestions(p);
        ids.push(...(data.content?.map((q) => q.id) || []));
        await new Promise((r) => setTimeout(r, 100));
      }

      const questions = [];
      for (let i = 0; i < ids.length; i += 10) {
        updateBtn(`Xử lý ${Math.round((i / ids.length) * 100)}%...`, true);
        const batch = await Promise.all(ids.slice(i, i + 10).map((id) => getQuestion(id).catch(() => null)));
        batch.forEach((q) => q && questions.push(formatQuestion(q, questions.length + 1)));
        await new Promise((r) => setTimeout(r, 50));
      }

      const filename = "DB_PTIT_EXERCISES.md";

      const content =
        `# DB PTIT - Tổng hợp câu hỏi Exercises\n\n## Source: https://github.com/nvbangg/CodePTIT\n\n- **Tổng số câu hỏi**: ${questions.length}\n\n---\n\n` +
        questions.join("---\n\n");

      const blob = new Blob([content], { type: "text/markdown" });
      const a = Object.assign(document.createElement("a"), {
        href: URL.createObjectURL(blob),
        download: filename,
      });
      a.click();
      URL.revokeObjectURL(a.href);

      alert(`✅ Đã xuất ${questions.length} câu hỏi!`);
      updateBtn("Export Exercises", false);
    } catch (err) {
      alert(`Lỗi: ${err.message}`);
      updateBtn("Export Exercises", false);
    }
  };

  let btn;
  const updateBtn = (text, disabled) => {
    if (btn) {
      btn.textContent = text;
      btn.disabled = disabled;
      btn.style.opacity = disabled ? "0.6" : "1";
    }
  };

  const init = () => {
    btn = Object.assign(document.createElement("button"), {
      textContent: "Export Exercises",
      onclick: () => !btn.disabled && exportAll(),
    });
    btn.style.cssText =
      "position:fixed;bottom:20px;right:20px;z-index:9999;padding:10px 20px;background:#667eea;color:#fff;border:none;border-radius:6px;cursor:pointer;font-weight:bold;box-shadow:0 2px 8px rgba(0,0,0,0.2);font-size:14px";
    document.body.appendChild(btn);
  };

  document.readyState === "loading" ? document.addEventListener("DOMContentLoaded", init) : init();
})();
