// ==UserScript==
// @name         Lập trình mạng PTIT Exercises Scraper
// @namespace    https://github.com/nvbangg/CodePTIT
// @version      1.0
// @description  Export All JNP PTIT Exercises to Markdown
// @author       nvbangg (https://github.com/nvbangg)
// @copyright    Copyright (c) 2026 nvbangg (github.com/nvbangg)
// @homepage     https://github.com/nvbangg/CodePTIT
// @match        https://db.ptit.edu.vn/*
// @license      MIT
// @grant        none
// ==/UserScript==

(() => {
  "use strict";

  const API_BASE = "https://dbapi.ptit.edu.vn/api/app";

  const getCourseId = () => {
    const matchResult = window.location.pathname.match(/\/exercise\/jnp\/([^/?#]+)/i);
    return matchResult ? matchResult[1] : null;
  };

  const getAuthToken = () => localStorage.getItem("access_token")?.replace(/"/g, "");

  const fetchQuestions = async (courseId) => {
    const authToken = getAuthToken();
    if (!authToken) throw new Error("Vui lòng đăng nhập tài khoản!");

    const questionList = [];
    let pageIndex = 0;
    let totalPages = 1;

    while (pageIndex < totalPages) {
      updateExportBtn(`Đang tải trang ${pageIndex + 1}...`, true);

      const response = await fetch(
        `${API_BASE}/jnp-question/student?page=${pageIndex}&size=200&courseId=${courseId}`,
        {
          headers: {
            "Content-Type": "application/json",
            Authorization: `Bearer ${authToken}`,
          },
        }
      );

      if (!response.ok) {
        throw new Error(response.status === 401 ? "Phiên đăng nhập hết hạn!" : `Lỗi API (${response.status})`);
      }

      const responseData = await response.json();

      if (Array.isArray(responseData)) {
        questionList.push(...responseData);
        break;
      }

      const pageContent = responseData.content || [];
      questionList.push(...pageContent);
      totalPages = responseData.totalPages || 1;
      pageIndex++;
    }

    return questionList;
  };

  const formatQuestion = (questionItem) => {
    const examServer = (
      questionItem.examServerHost ||
      questionItem.examServer ||
      questionItem.serverIp ||
      document.body.innerText.match(/Exam Server:?\s*([0-9.]+)/i)?.[1] ||
      "36.50.135.242"
    ).trim();

    const questionTopic =
      questionItem.topic ||
      questionItem.topicCode ||
      questionItem.protocolType ||
      questionItem.code ||
      "N/A";

    const questionTitle = questionItem.title || "Untitled";
    const questionAlias =
      questionItem.userAlias ||
      questionItem.alias ||
      questionItem.qCode ||
      questionItem.questionCode ||
      questionItem.code ||
      "N/A";

    const questionDesc = (
      questionItem.description ||
      questionItem.content ||
      ""
    ).trim();

    return (
      `## \`${questionTopic}\` ${questionTitle}\n` +
      `- Mã câu hỏi: \`${questionAlias}\`\n` +
      `- Exam Server: \`${examServer}\`\n` +
      `### Nội dung\n` +
      `${questionDesc}\n\n`
    );
  };

  const exportExercises = async () => {
    const courseId = getCourseId();
    if (!courseId) {
      alert("Vui lòng truy cập trang bài tập môn Lập trình mạng (JNP)!");
      return;
    }

    try {
      updateExportBtn("Đang khởi tạo...", true);

      const questionList = await fetchQuestions(courseId);

      if (!questionList.length) {
        alert("Không tìm thấy bài tập nào!");
        updateExportBtn("Export JNP Exercises", false);
        return;
      }

      updateExportBtn("Đang xuất Markdown...", true);

      const markdownContent =
        `# DB PTIT - Tổng hợp câu hỏi Exercises\n\n` +
        `## Source: https://github.com/nvbangg/CodePTIT\n\n` +
        `- **Tổng số câu hỏi**: ${questionList.length}\n\n` +
        `---\n\n` +
        questionList.map(formatQuestion).join("---\n\n");

      const fileBlob = new Blob([markdownContent], { type: "text/markdown;charset=utf-8" });
      const downloadLink = Object.assign(document.createElement("a"), {
        href: URL.createObjectURL(fileBlob),
        download: "DB_PTIT_EXERCISES.md",
      });

      downloadLink.click();
      URL.revokeObjectURL(downloadLink.href);

      alert(`✅ Đã xuất thành công ${questionList.length} bài tập!`);
      updateExportBtn("Export JNP Exercises", false);
    } catch (error) {
      alert(`Lỗi: ${error.message}`);
      updateExportBtn("Export JNP Exercises", false);
    }
  };

  let exportBtn;

  const updateExportBtn = (buttonText, isDisabled) => {
    if (exportBtn) {
      exportBtn.textContent = buttonText;
      exportBtn.disabled = isDisabled;
      exportBtn.style.opacity = isDisabled ? "0.6" : "1";
      exportBtn.style.cursor = isDisabled ? "not-allowed" : "pointer";
    }
  };

  const initExportBtn = () => {
    exportBtn = Object.assign(document.createElement("button"), {
      textContent: "Export JNP Exercises",
      onclick: () => !exportBtn.disabled && exportExercises(),
    });

    exportBtn.style.cssText =
      "position:fixed;bottom:20px;right:20px;z-index:9999;padding:12px 22px;background:linear-gradient(135deg,#667eea,#764ba2);color:#ffffff;border:none;border-radius:8px;cursor:pointer;font-weight:600;box-shadow:0 4px 14px rgba(102,126,234,0.4);font-size:14px;transition:all 0.2s ease";

    document.body.appendChild(exportBtn);
  };

  document.readyState === "loading" ? document.addEventListener("DOMContentLoaded", initExportBtn) : initExportBtn();
})();
