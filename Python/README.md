# Đề CodePTIT Lập trình với Python

## Source: https://github.com/nvbangg/CodePTIT

- Tổng cộng 296 bài tập

## ICPC0058 - ĐỈNH THẮT

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho đồ thị <strong>có&nbsp;hướng</strong> liên thông G có N đỉnh và M cạnh. Với một cặp đỉnh (u,v), đỉnh thắt của cặp đỉnh này được định nghĩa là một đỉnh mà tất cả đường đi từ u tới v đều đi qua nó. </p>

<p>Hãy đếm số đỉnh thắt với cặp đỉnh (u,v). </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 100. </p>

<p>Mỗi bộ test bắt đầu với một dòng ghi 4 số N, M, u, v (0&lt; N &lt;= 100; 1 &lt; M &lt;=1000; 1 &lt;= u,v &lt;= N). </p>

<p>Tiếp theo là M dòng ghi các cạnh của đồ thị</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra số đỉnh thắt của cặp đỉnh (u,v)</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2 </div>

<div>5 7 1 3 </div>

<div>1 2 </div>

<div>2 4 </div>

<div>2 5 </div>

<div>3 1 </div>

<div>3 2 </div>

<div>4 3 </div>

<div>5 4</div>

<div>4 5 1 4 </div>

<div>1 2 </div>

<div>1 3 </div>

<div>2 3 </div>

<div>2 4 </div>

<div>3 4</div>
</td>
<td>
<div>2</div>

<div>0</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0100 - DÃY SỐ ĐẸP

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Một dãy số A[] có n phần tử được coi là đẹp nếu thỏa mãn điều kiện sau:</p>

<p><strong>max(</strong><strong>A</strong><strong>[i], </strong><strong>A</strong><strong>[i + 1]) ≤ 2 * min(</strong><strong>A</strong><strong>[i], </strong><strong>A</strong><strong>[i + 1])&nbsp;&nbsp; </strong>(1 ≤ i ≤ n-1)</p>

<p>Ví dụ các dãy <strong>{1, 2, 3, 4}, {2, 4}</strong> được coi là các dãy số đẹp, còn các dãy số <strong>{5, 2}, </strong><strong>{</strong><strong>2,5}, {100, 1, 2}</strong> thì không phải. </p>

<p>Cho dãy số A[] có thể chưa thỏa mãn điều kiện “dãy số đẹp”.</p>

<p>Hãy cho biết cần chèn ít nhất bao nhiêu số (chèn vào bất kỳ chỗ nào trong mảng) để dãy số ban đầu trở thành dãy số đẹp.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên chứa một số nguyên <strong>t ( 1 ≤ t ≤ 1000) </strong>là số test.</p>

<p>Với mỗi test:</p>

<ul>
<li>Dòng đầu ghi số nguyên <strong>n (2 ≤ n ≤ 50)</strong>.</li>
<li>Dòng tiếp theo chứa <strong>n</strong> số nguyên <strong>a<sub>1</sub>, a<sub>2</sub>, …, a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 50)</strong></li>
</ul>

<p><strong>Output</strong></p>

<p>Với mỗi test in ra kết quả trên một dòng.&nbsp;</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6</div>

<div>4</div>

<div>4 2 10 1</div>

<div>2</div>

<div>1 3</div>

<div>2</div>

<div>6 1</div>

<div>3</div>

<div>1 4 2</div>

<div>5</div>

<div>1 2 3 4 3</div>

<div>12</div>

<div>4 31 25 50 30 20 34 46 42 16 15 16</div>
</td>
<td>
<div>5</div>

<div>1</div>

<div>2</div>

<div>1</div>

<div>0</div>

<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0101 - THU GỌN DÃY SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] chỉ bao gồm các số nguyên dương. Người ta thu gọn dần dãy số bằng cách loại bỏ các cặp phần tử kề nhau mà có tổng là chẵn. Sau khi cặp phần tử đó bị loại ra thì dãy số được dồn lại. Cứ tiếp tục như vậy cho đến khi không còn cặp phần tử nào kề nhau có tổng chẵn nữa.</p>

<p>Hãy tính xem cuối cùng dãy A[] còn bao nhiêu phần tử.</p>

<p><strong>Input</strong></p>

<p>Dòng đâu ghi số N là số phần tử của dãy (1 ≤ N ≤ 10<sup>5&nbsp;</sup>tức là dãy A có thể có đến 10 nghìn phần tử).</p>

<p>Dòng tiếp theo ghi N số của dãy A (1 ≤ A[i] ≤ 100).</p>

<p><strong>Output</strong></p>

<p>Ghi ra trên một dòng số phần tử còn lại trong dãy A[].</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>2 3 4 5 6</div>
</td>
<td>
<div>5</div>
</td>
</tr>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>1 5 5 8 6 4 3 5 9 3</div>
</td>
<td>
<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0104 - TÌM SỐ NHỎ NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho xâu ký tự có độ dài n bao gồm các ký tự từ ‘a’, ‘b’, …, ‘z’ và các số từ 0 đến 9. Nhiệm vụ của bạn là tìm số nhỏ nhất xuất hiện trong xâu. Ví dụ với xâu X[]=”12ab29cd19” ta có kết quả là 12. </p>

<p>Input:</p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào T test. Mỗi test là một xâu ký tự thỏa mãn yêu cầu bài toán. </li>
<li>T, n thỏa mãn ràng buộc : 1≤T≤100; 1≤ n≤10<sup>5</sup>; </li>
<li>Dữ liệu vào đảm bảo số lớn nhất cũng không quá 18 chữ số</li>
</ul>

<p>Output: </p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p>Ví dụ: </p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>2<br>
12ab29cd19</div>

<div>ab123gh456cd</div>
</td>
<td>
<div>12<br>
123</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0105 - TÌM SỐ LỚN NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho xâu ký tự có độ dài n bao gồm các ký tự từ ‘a’, ‘b’, …, ‘z’ và các số từ 0 đến 9. Nhiệm vụ của bạn là tìm số lớn nhất xuất hiện trong xâu. Ví dụ với xâu X[]=”12ab29cd19” ta có kết quả là 29. </p>

<p>Input:</p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào T test. Mỗi test là một xâu ký tự thỏa mãn yêu cầu bài toán. </li>
<li>T, n thỏa mãn ràng buộc : 1≤T≤100; 1≤ n≤10<sup>5</sup>; </li>
<li>Dữ liệu vào đảm bảo số lớn nhất cũng không quá 18 chữ số</li>
</ul>

<p>Output: </p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p>Ví dụ: </p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>2<br>
12ab29cd19</div>

<div>ab123gh456cd</div>
</td>
<td>
<div>29<br>
456</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0106 - ĐỔI CƠ SỐ - 2

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho xâu nhị phân X[] có độ dài n. Nhiệm vụ của bạn là hãy đổi xâu nhị phân thành một số ở hệ cơ số b, trong đó b chỉ là một trong các số 2, 4, 8, 16. Ví dụ xâu X =”10010100010010101” và b = 8 ta có kết quả là 224225 là số ở hệ cơ số 8. </p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào T test. Mỗi test là gồm hai dòng: dòng đầu tiên đưa vào b là cơ số của hệ đếm; dòng tiếp theo đưa vào xâu nhị phân có độ dài n. </li>
<li>T, n, X[] thỏa mãn ràng buộc : 1≤T≤10; 1≤ n≤10<sup>5</sup>; X[i] =0, 1;</li>
</ul>

<p><strong>Output: </strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
8<br>
10010100010010101</div>

<div>2<br>
10010100010010101</div>
</td>
<td>
<div>224225</div>

<div>10010100010010101</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0107 - THAY ĐỔI CHỮ SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho hai số nguyên dương X1, X2. Ta chỉ được phép thay đổi chữ số p thành chữ số q và ngược lại chữ. Hãy đưa ra tổng nhỏ nhất và tổng lớn nhất các số X1 và X2 được tạo ra theo nguyên tắc kể trên.</p>

<p><strong>Input: </strong></p>

<ul>
<li>Dòng đầu tiên đưa vào số lượng bộ test T.</li>
<li>Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 3 dòng: dòng đầu tiên ghi lại chữ số p và chữ số q; hai dòng kế tiếp ghi lại các số X1 và X2 theo thứ tự. </li>
<li>T, X1, X2 thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ X1, X2 ≤10<sup>1000</sup>.</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng. </li>
</ul>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>5&nbsp;6<br>
645&nbsp; </div>

<div>666<br>
&nbsp;</div>
</td>
<td>
<div>1100&nbsp; 1312<br>
&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0108 - SUM TRIPLE ZERO

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho mảng A[] gồm N số nguyên khác nhau. Nhiệm vụ của bạn là đếm số lượng các bộ ba phần tử khác nhau có tổng là 0. Ví dụ A[] = {0, -1, 2, -3, 1}, ta nhận được kết quả là 2 vì có hai bộ 3: (0, -1, 1) và (2, -3, 1).</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là gồm hai dòng: dòng đầu tiên đưa vào N là số lượng phần tử của mảng A[]; dòng tiếp theo đưa vào các phần tử A[i] của mảng A[].</li>
<li>T, N, A[i] thỏa mãn ràng buộc : 1≤T≤100; 1≤ N≤10<sup>3</sup>; -10<sup>9</sup>≤ A[i] ≤10<sup>9</sup>;</li>
</ul>

<p><strong>Output: </strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
5<br>
0 -1 2 -3 1&nbsp;<br>
5<br>
1 -2&nbsp; 1&nbsp; 0&nbsp; 5 </div>
</td>
<td>
<div>2<br>
1</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0109 - MIN TRIPLE

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho mảng A[] gồm N số nguyên.&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </p>

<p>Nhiệm vụ của bạn là tìm tổng nhỏ nhất của bộ ba số trong mảng. Ví dụ A[] = {1, 2, 3, 4, 5}, ta nhận được tổng nhỏ nhất của bộ ba số là 1 + 2 + 3 = 6.&nbsp;Chú ý nếu sử dụng kỹ thuật sắp xếp, submit lời giải của bạn sẽ bị fail.</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là gồm hai dòng: dòng đầu tiên đưa vào N là số lượng phần tử của mảng A[]; dòng tiếp theo đưa vào các phần tử A[i] của mảng A[].</li>
<li>T, N, A[i] thỏa mãn ràng buộc : 1≤T≤100; 1≤N ≤10<sup>6</sup>; -10<sup>8</sup>≤ A[i] ≤10<sup>8</sup>;</li>
</ul>

<p><strong>Output: </strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p>Ví dụ: </p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
7<br>
1 2 3 0 -1 8 10&nbsp;<br>
7<br>
9 8 20 3 4 -1 0</div>
</td>
<td>
<div>0<br>
2</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0110 - MAX TRIPLE

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho mảng A[] gồm N số nguyên.&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </p>

<p>Nhiệm vụ của bạn là tìm tổng lớn nhất của bộ ba số trong mảng.&nbsp;Chú ý nếu sử dụng kỹ thuật sắp xếp, submit lời giải của bạn sẽ bị fail.</p>

<p>Ví dụ A[] = {1, 2, 3, 4, 5}, ta nhận được tổng lớn nhất của bộ ba số là 3 + 4 + 5 = 12.&nbsp;</p>

<p>Input:</p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là gồm hai dòng: dòng đầu tiên đưa vào N là số lượng phần tử của mảng A[]; dòng tiếp theo đưa vào các phần tử A[i] của mảng A[].</li>
<li>T, N, A[i] thỏa mãn ràng buộc : 1≤T≤100; 1≤ N≤10<sup>6</sup>; -10<sup>8</sup>≤ A[i] ≤10<sup>8</sup>;</li>
</ul>

<p>Output: </p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p>Ví dụ: </p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>2<br>
7<br>
1 2 3 0 -1 8 10&nbsp;<br>
7<br>
9 8 20 3 4 -1 0</div>
</td>
<td>
<div>21<br>
37</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0111 - XOAY MẢNG

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho mảng A[] gồm N số nguyên và số tự nhiên d.&nbsp;&nbsp;&nbsp; Hãy thực hiện quay mảng A[] với d phần tử từ phải qua trái. Ví dụ A[] = {1, 2, 3, 4, 5}, d = 2 ta nhận được mảng A[] = {3, 4, 5, 1, 2}.</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là gồm hai dòng: dòng đầu tiên đưa vào N là số lượng phần tử của mảng A[] và số d; dòng tiếp theo đưa vào các phần tử A[i] của mảng A[].</li>
<li>T, N, d, A[i] thỏa mãn ràng buộc : 1≤T≤100; 1≤ d≤ N ≤10<sup>7</sup>; 0≤ A[i] ≤10<sup>9</sup>;</li>
</ul>

<p><strong>Output: </strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
5 2<br>
1 2 3 4 5&nbsp;<br>
10 3<br>
2 4 6 8 10 12 14 16 18 20</div>
</td>
<td>
<div>3 4 5 1 2<br>
8 10 12 14 16 18 20 2 4 6</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0112 - PRIME – TRIPLET

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Bộ ba số nguyên tố được gọi là Prime- Triplet nếu nó là bộ ba số nguyên tố dưới dạng (p, p +2, p + 6) hoặc (p, p + 4, p+6), trong đó p là một số nguyên tố. Ví dụ các bộ ba số (5, 7, 11) hoặc (7, 11, 13) đều là các Prime-Triplet. Cho số tự nhiên N, nhiệm vụ của bạn là đếm số các Prime-Triplet nhỏ hơn N.&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là một số nguyên dương N.</li>
<li>T, N thỏa mãn ràng buộc : 1≤T≤100; 1≤N ≤10<sup>6</sup>;</li>
</ul>

<p><strong>Output: </strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>15</div>

<div>25</div>
</td>
<td>
<div>2</div>

<div>5</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0113 - EMIRP NUMBER

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Một số nguyên dương K được gọi là Emirp Number nếu K là số nguyên tố, đảo các chữ số của K cũng là một số nguyên tố nhưng không phải chính nó (không đối xứng). Ví dụ số 11 không phải là số Emirp Number. Cho số tự nhiên N, nhiệm vụ của bạn là hãy liệt kê tất cả các số Emirp Number nhỏ hơn N.</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là một số nguyên dương N.</li>
<li>T, N thỏa mãn ràng buộc : 1≤T≤100; 1≤N ≤10<sup>6</sup>;</li>
</ul>

<p><strong>Output: </strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
<li>Chú ý: ghi theo các cặp số thỏa mãn từ nhỏ đến lớn, xem ví dụ để hiểu hơn về cách hiển thị kết quả.&nbsp;</li>
</ul>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>40</div>

<div>100</div>
</td>
<td>
<div>13&nbsp; 31</div>

<div>13&nbsp; 31&nbsp; 17&nbsp; 71&nbsp; 37 73 79&nbsp; 97</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0114 - PERFECT PRIME

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Một số nguyên dương N được gọi là Perfect Prime nếu N là số nguyên tố; đảo ngược các chữ số của N cũng là một số nguyên tố; tổng các chữ số của N là một số nguyên tố và mỗi chữ số của N cũng là một số nguyên tố. Cho số nguyên dương N, hãy kiểm tra N có phải là Perfect Prime hay không? Đưa ra “Yes” nếu N là Perfect Prime, ngược lại đưa ra “No”.</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là một số nguyên dương N.</li>
<li>T, N thỏa mãn ràng buộc : 1≤T≤100; 1≤N ≤10<sup>7</sup>;</li>
</ul>

<p><strong>Output: </strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>13</div>

<div>753</div>

<div>757</div>
</td>
<td>
<div>No</div>

<div>No</div>

<div>Yes</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0115 - SỐ KRISH

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Một số nguyên dương N được gọi là số Krish nếu tổng giai thừa các chữ số của N bằng chính nó. Ví dụ N = 145 = 1! + 4! + 5! = 145 là một số Krish. Cho số nguyên dương N, hãy kiểm tra N có phải là một số Krish hay không? Đưa ra “Yes” nếu N là một số Krish, ngược lại đưa ra “No”.</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào một test. Mỗi test là một số nguyên dương N.</li>
<li>T, N thỏa mãn ràng buộc : 1≤T≤100; 1≤N ≤10<sup>8</sup>;</li>
</ul>

<p><strong>Output: </strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>145</div>

<div>235</div>
</td>
<td>
<div>Yes</div>

<div>No</div>
</td>
</tr>
</tbody>
</table>



---

## ICPC0116 - CON SỐ DUYÊN NỢ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Con số duyên nợ là con số có chữ số đầu và chữ số cuối giống nhau.</p>

<p>Viết chương trình kiểm tra xem một số nguyên dương&nbsp;n&nbsp;ghi trong hệ thập phân có chữ số đầu và chữ số cuối giống nhau không?</p>

<p><strong>Input</strong></p>

<p>Gồm nhiều dòng, mỗi dòng chứa một số nguyên dương&nbsp;n&nbsp;ghi ở hệ thập phân.</p>

<p>Giới hạn:</p>

<p>1≤n≤10^100</p>

<p><strong>Output</strong></p>

<p>Ứng với mỗi số nguyên dương&nbsp;n, ghi ra trên một dòng là YES nếu số&nbsp;n<em> </em>tương ứng có chữ số đầu và chữ số cuối giống nhau, NO nếu ngược lại.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>2<br>
12345<br>
123451</div>
</td>
<td>
<div>NO<br>
YES</div>
</td>
</tr>
</tbody>
</table>

---

## ICPC0117 - CHÚC MỪNG NĂM MỚI

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Tí năm nay đã lên lớp 1 rồi, Tết đến Tí rất vui vì nhận được rất nhiều lời chúc.</p>

<p>Vì mới tập viết nên Tí đã ghi lại tất cả các lời chúc đó. Cũng vì rất trân trọng các lời chúc nên Tí đã ghi tất cả các lời chúc bằng chữ IN HOA, tuy nhiên do mới tập viết nên Tí ghi không có dấu. Giờ ngồi lật lại cuốn nhật ký ghi các lời chúc, Tí thấy mình đã ghi được&nbsp;n&nbsp;lời chúc.</p>

<p>Tí muốn biết có bao nhiêu lời chúc khác nhau (hai lời chúc được gọi là khác nhau nếu chúng có độ dài khác nhau hoặc tồn tại ít nhất một vị trí mà ký tự ở vị trí đó của hai lời chúc là khác nhau, hay nói cách khác, đó là hai xâu ký tự khác nhau). Bạn hãy lập chương trình giúp Tí đếm xem có bao nhiêu lời chúc khác nhau nhé.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu chứa số nguyên dương n&nbsp;là số lời chúc Tí ghi được;</p>

<p>n&nbsp;dòng tiếp theo, mỗi dòng chứa một xâu ký tự S là một lời chúc.</p>

<p>n, S thỏa mãn ràng buộc: 1 ≤ n ≤ 10^4; Các lời chúc S có độ dài không quá&nbsp;30&nbsp;ký tự gồm các chữ cái la tinh IN HOA ‘A’…’Z’ và dấu cách.</p>

<p><strong>Output:</strong></p>

<p>Một số nguyên dương duy nhất là số lời chúc khác nhau.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>CHUC MUNG NAM MOI</div>

<div>HAPPY NEW YEAR</div>

<div>CHUC MUNG TUOI MOI</div>

<div>CHUC MUNG NAM MOI</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>

---

## ICPC0118 - CUNG HOÀNG ĐẠO

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Trong chiêm tinh học phương Tây, các cung Hoàng Đạo là mười hai cung 30° của Hoàng Đạo, bắt đầu từ điểm phân Vernal (một trong những giao điểm của Hoàng Đạo với Xích đạo thiên cầu), còn được gọi là Điểm Đầu của Bạch Dương. Thứ tự của các cung Hoàng Đạo là Bạch Dương, Kim Ngưu, Song Tử, Cự Giải, Sư Tử, Xử Nữ, Thiên Bình, Thiên Yết, Nhân Mã, Ma Kết, Bảo Bình và Song Ngư. Mỗi khu vực được đặt tên theo chòm sao mà nó đi qua trong lúc đặt tên. Cung hoàng đạo của một người được xác định dựa trên ngày sinh bằng bảng dưới đây:</p>

<table>
<thead>
<tr>
<td rowspan="2">
<div><strong>Cung</strong></div>
</td>
<td rowspan="2">
<div><strong>Tên cung</strong></div>
</td>
<td rowspan="2">
<div><strong>Thời gian</strong></div>
</td>
<td>&nbsp;</td>
</tr>
<tr>
<td>&nbsp;</td>
</tr>
</thead>
<tbody>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Aries.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAATCAYAAACQjC21AAAABmJLR0QA/wD/AP+gvaeTAAABVUlEQVQ4ja3Tv0ubURTG8U8kIYMOFupSKDg5qZQMUqhDh1JqJ7f4J4g4OOji0uIslEI7dXWw0LG0lHa0g4M/B0EcgpsoKEJiiGjT4d5A+vY1ecE80+Wc537fc95zLkFT2EcduyjrrjL24p1tvGglSrjBT8zjG5pY6ABbxh+8w2uso4FR+IojFKI5h0/xI6UU2GSELbXF+nCIL3CC1cSlflSwkYjnYpu/I6RdH1DpQxFXiWQNb/AsUeVzjGMlVtmuW+RhE59TWiviDB/bYms4iJUm9QO/YBEXGEgxvcdxPBdwjrcpvodCl7MwGOmvUowvhYmP4Gk8pw1qGt/vKOofFVHFDOaEAXZUvku+ISztEzzA1n2BImRY+DWb3czJXboL+BiPsJPB31UTwgQbGOsFcEiYblN4QT1RFadZjFmGIsJqvQRW/f/e7wW8xHUWY5a1aamexfQXrVJIX7rZfJgAAAAASUVORK5CYII="></a></div>
</td>
<td>
<div>Bach Duong</div>
</td>
<td>
<div>21 tháng 3 - 19 tháng 4</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Taurus.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAAVCAYAAABG1c6oAAAABmJLR0QA/wD/AP+gvaeTAAAAB3RJTUUH2wQDESUJ39PuZgAAAWhJREFUOI2d1D9LW3EUxvFPzNAhIEJslhZcBEVxV6hkkGKxjsVOeRMlL8BVHDO0Y9pX0D9zh84SMgejQkvROsSliyCNwz2pUe69ufGBM9xznvP9cX9/DgxxgncomV6l6D0Nli18io/WI4Ct6P0YrP/6EIW9KWBvoud9WrGCn/iD2QKwWZxHTyXL1IgVDwsAD8LbyDOV8AM32MzxbYbnuwIH+RxnGGAnpb4dtTM8mwQbaR5tyS/18CWiF7k2qmmNMxnAJdTH4NWI+cjVw1NIG7iWnPZblMdqZcm1ugjP+iTYHC7xCws5vgX8Du9cHrAp2aNXk1bGbnibeaYO+gVgI53gaDzx8FAW0Z0C2I2eTOATMTEK6l/0ZAL7WJkCuIbjPOA3rOJFAVgdy/iaZ3qKq1i1luOrhWfg7rJn6rXk4Z96MDBDLyXv+Eb6W0/VaAAMJfv6OWI05geK3dV7qmJfcjf/RnQilzoY4BYBC1Gqgia8PAAAAABJRU5ErkJggg=="></a></div>
</td>
<td>
<div>Kim Nguu</div>
</td>
<td>
<div>20 tháng 4 - 20 tháng 5</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Gemini.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAAVCAYAAABG1c6oAAAABmJLR0QA/wD/AP+gvaeTAAAA7klEQVQ4je3VzypFURTH8c++/gyETEjuDCEZKGXmPoCrPMZ9lPsKnkEZeQNSBgaUJEkUBkzUzYDBvQZrl9PBmZieX63aa+21f6s1+e6EB5zgDNe4wxN6qjWJOSxiGRtoJRxgC9OlBx94x1upPoVxjJbqLzhKOUmFSTvo4BwXGEMj9/XzkPUcezjEDW7/WqWNAboV63ZzT7t80fjZ+z/VhrVhbVgb/qrhwnkea4KHsI0FTAigDgQLe1jKPbuCpZe4l5N9QezZgnlfEPgVnzkSRgSpZwThixs+4zj5/lNOcSXo+5hNqzSEJlawik20vgATGC0UYCQCZgAAAABJRU5ErkJggg=="></a></div>
</td>
<td>
<div>Song Tu</div>
</td>
<td>
<div>21 tháng 5 - 20 tháng 6</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Cancer.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAAQCAQAAAC8EZeQAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QA/4ePzL8AAAAHdElNRQfjCBYKKDKBG/ryAAABRUlEQVQoz3XSv0ubURTG8U9iHZxMGwUhhCKK7SDVEDCDLZ3EiJji5OJiqZNd+190q0O7BKR0cFC0g0MtFDrXRacgaNRogqYxS8lS+jpo3hp/PNP33ufhHu45J+K/hk1IeyKhwwN1ZTt+2VCACIia9c4givbV1MQ81KcXFOTlIemnQKBiRKs6jVtUFGjQbdeKKTnriuJuKyprjQ+WwqtlH92rI0MhZ5RavHYpKW2Xh7pkaPQ7vRabduRYSVkOvnsTWm99C/mlqiwYUzXKc1VjYELVizC4aSHkeZswpazkxMFliSud6Q856bzZgJQh7S0fOZa5NrPDyL3d+CRm5oo/q7EuK3pHMG7fV6/krCrooiFwYNG4zhvRERWBwA8JIrrMee0pKNrzW13cI70eY9t7X/xrbg8DJqU90yPmrz9OFGzZsNN8/gLQoFZKloAwLAAAACV0RVh0ZGF0ZTpjcmVhdGUAMjAxOS0wOC0yMlQxMDo0MDo1MCswMDowMOsZKb4AAAAldEVYdGRhdGU6bW9kaWZ5ADIwMTktMDgtMjJUMTA6NDA6NTArMDA6MDCaRJECAAAAAElFTkSuQmCC"></a></div>
</td>
<td>
<div>Cu Giai</div>
</td>
<td>
<div>21 tháng 6 - 22 tháng 7</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Leo.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABMAAAAZCAQAAAB5wt0hAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QA/4ePzL8AAAAHdElNRQfkBwEMADP9V9AzAAABfklEQVQoz4XTP2tUURCH4SfZzZpgIQtGqyioCBqCWCjKphHED6CIjak0WFiICCkDYmGlBitLGyXBxiofwEAwsVDZgBAtBMU/ESWIhMgmdyy8d3fv3axOdeZ33jMzZ84ctrKSin/adhPqQnjrtp1bQ3u8EV6564454bMTndA2S9acb/qjPvlhqIhdE8ZyylEND4vYomU9BW3Gmgq9bdJh86KALRgwlMc29XXUmyDy2KLTHeABm1by0phwoYDVvWw5Vdc9NiOxnIs3LNzMnJqvwopVIYy3YVMSB/8ud/nuo1Mouey3d0optMNPs9mJCWG0eX5SqKXrG8KZbOOJb7m+hyug7L2lrN1l6/r1aaRYBRvgrL3GW+2+KFxtRnsksR8890V/K03ZgoZbjqiZFu6ntw+T+RYOmhVCaLiX3nPKhsEWkk3EiGPWzfmQ+s9UjbSnzB6lnstQmJTeLn9i3rBDaUkP7O7pgu3z2i/Tqs4ZcKn7HzvphcSqp477jzWn5Q/X2mgwgqubLwAAACV0RVh0ZGF0ZTpjcmVhdGUAMjAyMC0wNy0wMVQxMjowMDo1MSswMDowMPsOLcUAAAAldEVYdGRhdGU6bW9kaWZ5ADIwMjAtMDctMDFUMTI6MDA6NTErMDA6MDCKU5V5AAAAAElFTkSuQmCC"></a></div>
</td>
<td>
<div>Su Tu</div>
</td>
<td>
<div>23 tháng 7 - 22 tháng 8</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Virgo.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAAYCAYAAAD6S912AAAABmJLR0QA/wD/AP+gvaeTAAABqElEQVQ4ja3UzYuNYRjH8Y/pOEpepqY0EkXRZKnIjuQPkFKaKQshS4mS9ZEiZCMbSpoSUpRsJjUsLLytZoqslAgj7wdnzLG4L83tmZmD55zf5nquX9fzva/7FY7jMpaa1G48xgPMzvxTeIaTWmgATZyLfB2+40v4O8Lfi3F8RQPLZgJW8RbfMA/3cQ9bA3gdi2OAwzgb/sFWXV6LojMB7sNc/IzBajFQF7ZF7dVWwCNRNIHTmf8m/Do2h7c+vDuR9+GoP/fAoSgqrs3T8EcwK7yV4d3FAryK/KKYQq7beJ7l7yJeip9IG/ZbB7AQY9iOJUXgcCFvRLxlqqrYJa3vICroLwInpvkRXk/jrcEHHMOV8DYUgf+jinQqGhgNb3U7wLrYCGmt6+hpB/gI77O8C+PtAJvZdw/m4EU7wFxrIz7sFHBLxJudAPaiHy9xo9IBYA3zsR8/ynSYX70B7MQQzjP1Lv+LxiKukB7lEWnKM92yv6obn6VjM4pFZSBVbJTeyo8Ba2JT2a6emHyAh3Ah8lpZ4AnswarIu6PTT1heFlrUPqnLYdnm/gLS7Wy0ABHgCAAAAABJRU5ErkJggg=="></a></div>
</td>
<td>
<div>Xu Nu</div>
</td>
<td>
<div>23 tháng 8 - 22 tháng 9</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Libra.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABkAAAAVCAYAAACzK0UYAAAABmJLR0QA/wD/AP+gvaeTAAABFUlEQVRIie3UsS5EQRgF4G+XTiQSBY1sofYAovAGEkFDNio9iaj03sBzLLFRaBQikZBodBoaLC2FwiruvyFy9965CQpxksnJnTn/nJl/Ti7lqGMFbdzhFfc4RBODCXsUooFzdAvGJSaLNqmVGJxhLL5P0JLdZhxzmI21DmZwXeUGA7iIk75guY9uCc+hu1KxdU0f7Vgt0S580q5VMTmIotNE/XHoj/IW632KpoLbiSb7X+qSTIaCnxJNHoOHq5jcBk8kmjSCb6qY7AXPK455D4vBrcRDgRE8yB5zs0S7HroORvMENVnW8zCNDbxhGzs5mq2Yr2NXlrJcFP0yeiO31zFfWt/vTf7xx1EU4W816f60ya9E+B0jHktmUWvsYwAAAABJRU5ErkJggg=="></a></div>
</td>
<td>
<div>Thien Binh</div>
</td>
<td>
<div>23 tháng 9 - 22 tháng 10</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Scorpio.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAAWCAYAAADAQbwGAAAABmJLR0QA/wD/AP+gvaeTAAABIElEQVQ4je3UvytGcRgF8I83SWFgMRCL/Ngw8A+YGCT/gsVqkmT0B1gZZCGlxIBJNovVgkIkihSlRAz3eeuG675e63vqdp57ep7T+S4H5rGCGglasY8rtIXWgG3coU8OxvCBSRTC7CK0hdhZwnloG3mG1XjAIcYjRQsucYJBPKETR3hJvSYTu3jHMSZC24xEB5gNbTG0nt/SwY3kuXVYDu0+uB8jMd8GN2UZFoJfUgneYn4IXsVzzEWuyjMsYis1F413so5LMXz8Yef0P4b/RsWwYvgdr8GZ5fBXw+vg+rzFbgyhNqV1hJY+HpC0zcyX+9EywhFHJ5KSmEIXGrGHNSX05E/oxVkk/fqtZ9ZQDqolPdke/9ORdLhMv2+YQzN8As76O/9cuI8BAAAAAElFTkSuQmCC"></a></div>
</td>
<td>
<div>Thien Yet</div>
</td>
<td>
<div>23 tháng 10 - 22 tháng 11</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Sagittarius.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAAUCAQAAAAngNWGAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QA/4ePzL8AAAAHdElNRQfkBwETIgj8lJt6AAAA3ElEQVQoz43RMU4CURDG8Z9KYYiNtVzAlsJoZ2OjhzCxl86Kmxg9BYUVgUjBAWyIDcm6lCQk2JHss1gWTN66z2+al5n/m8w3Q6zjmpyDmtzcqVxmIZfJLcwUdZ/HvmyEX3HuTx05c+XeWhDcaFTbSLAWPHDYgA1cm+ih09RtKHh34lLwnMboCN6qQsttNNtIe2tr46MqvSo81mKQWVXPC6stGmOMzffXKtGnGixS11LYWYi03+PMJxj4Tl9hups1ubeupUKvqVtlobR1l8JK9EUrBvvphVTn6/8H+wGNWFhwG5EZawAAACV0RVh0ZGF0ZTpjcmVhdGUAMjAyMC0wNy0wMVQxOTozNDowOCswMDowMFG2H6oAAAAldEVYdGRhdGU6bW9kaWZ5ADIwMjAtMDctMDFUMTk6MzQ6MDgrMDA6MDAg66cWAAAAAElFTkSuQmCC"></a></div>
</td>
<td>
<div>Nhan Ma</div>
</td>
<td>
<div>23 tháng 11 - 21 tháng 12</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Capricorn.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABkAAAAYCAYAAAAPtVbGAAAABmJLR0QA/wD/AP+gvaeTAAACCUlEQVRIia3VTYiNURgH8N8M0kyz0CRf03wQstKslCglarKwt6PYKBYiC7GbkoWFsp+NZDFKmpJIhBI2Y3wkHyMSFkZNMxnMHYvzvM3tve+9c+/lX2+n5/zPef7nPM/7PGcRzmIbVuMN/qjEzlg3iFk8KVhTE3Nl31O05fgefA/xOdxqVADWYx++hpMjOf56zB/EJH6jsxkh2B7OHpTN7Yi5a2EPh727WREYRQndYY9IJ+8N+2SInGjEaWvOvooW6VbdGIi5D8GPxdjfiMjinJ2Fagu64hAXyvjnMW5uRKQlZ3fgBx5JSe7DpjK+FdOxr136nZvCC0yFs/MF/EspL2vrdZjPSeakXaqXGwX8+xg31CuSzwm8inEWdwv4dzGW36QNB6RcdoaPISkqhdgvheNzFf5o8OfC7sensj3P8Ev69Q9XE9kbGx5X4QfMF+g6TOAL9pSt6ZKiUIr1Fcgqf6SKSG/w33ATM1KY8lgRB7hX5GQZdqlecC1SvWRNdbDKOtJtZ2rwNXEoBKaxvMa6YcwU/cL1YCrGCZVPQ4alUhjHqvAL4rZ0k1mMY2uOz9pR9kQ0jL5wPim9qONhj+A4TuFhCFxW2brqwmA4yBpnB05LhVcK7i2OKe4oC6JHykcJGwv4JVJLahorcUc66aV/cZTHGVzBffwMgY9Y9T9FRs3Xw2tcxJpGnfwF4hGDxCVNRxMAAAAASUVORK5CYII="></a></div>
</td>
<td>
<div>Ma Ket</div>
</td>
<td>
<div>22 tháng 12 - 19 tháng 1</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Aquarius.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABkAAAARCAYAAAAougcOAAAABmJLR0QA/wD/AP+gvaeTAAABjUlEQVQ4je3Uv0tVYRzH8ZcZQiD9kIZGbzm0BCGRg3NUIrgWNLQIKtFs/Qn9BZWSNbUUNDQ4pLQFgoLQVJMhBCoIpaSD3obzPfn43HNOtPeBy733fO778/k+5z7noV638KbGO40ZjDawbxuyncEs2vG6lvk38S28+YryWRyGP1Q3QRmwHO+vsukP8QNfcYCBivKVjO0I2MVDnMAn/MIdrAW4gBbG4vuzhN3Bg2CXsIfzcCMJ+IhLSfk9R7dtB1PoCu9kwrWxGOWl7sf1aXiXTZCqB5tR3tKpx4pbN5mUlzqFLazCBVysCCh1tSKgVB/6G9hh9Db4//Vv6tL5IKZqKf6TOnbwbwUtxZbcUuySPGBCsauma9gFbFewfwKm8NPR/h9P/H58SLw1dCfsZJRXsccmaGMdd6NsJZu+jRd4Gp/HatjdYCsnmMPZ8J47fhatYyQZ6gBfatiZuDZM8cSXAbez1V1Jlv4S5zL/fQM7GN7rbsXRvhHL/pz9cAOX8QhPFAdeqm3s17DfcR2rvwEM038dQrl4gAAAAABJRU5ErkJggg=="></a></div>
</td>
<td>
<div>Bao Binh</div>
</td>
<td>
<div>20 tháng 1 - 18 tháng 2</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><a href="https://vi.wikipedia.org/wiki/File:Pisces.svg"><img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABQAAAAZCAQAAACbHsZYAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAAmJLR0QA/4ePzL8AAAAHdElNRQfhCxUDLAQ9weXVAAABWUlEQVQ4y43Su2tUYRjE4cdoiEaCcRWJ19YyjWCjBCSC2NnZKVYGOxtbtRNbC7Vc8C8QLMQipgjYJEQEDWLhJZDgypJChQgZm825uuBUZ+bMOS+/9/t4IpbsM0xjFkWXUQvi2dDiU7FsHI7ZELf+Wbshek5Vbd/hVm3CupgrgxFvxKNW8aF4Z081uiD+OFqrdfwWl+vf7vJJ3K5lc2LN7uaY+2K5liyKB22+MyKmCj9pW5xrF/fbFpcKPyPiUMm7o5++Yrrw0/juRwnxwunB83FjNotXHZO2fBu4LyOa9P+hlRrlPbFaPZNSB9ArXG+QtIp7ncCHwr/HERPtwWfFloOVdf0SM+0/zmJev7Kul4O0obfiZi25Jj4293BebOo0bmNPXKwXX4m7rSl3xEI1uCL6FZASaF1c3bFT1uoXvqLrYsNJGPVaPB96eF2xZJzH4nMDo460Krp/AeICatFTTfiZAAAAJXRFWHRkYXRlOmNyZWF0ZQAyMDE3LTExLTIxVDAzOjQ0OjAzKzAwOjAw4mF+bAAAACV0RVh0ZGF0ZTptb2RpZnkAMjAxNy0xMS0yMVQwMzo0NDowMyswMDowMJM8xtAAAAAASUVORK5CYII="></a></div>
</td>
<td>
<div>Song Ngu</div>
</td>
<td>
<div>19 tháng 2 - 20 tháng 3</div>
</td>
<td>
<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Ví dụ: nếu sinh nhật của một người là vào ngày 5 tháng 5, thì họ là Kim Ngưu, vì nó nằm trong khoảng từ ngày 21 tháng 4 đến ngày 20 tháng 5.</p>

<p>Nhiệm vụ của bạn là xác định cung hoàng đạo của một ngày sinh bất kỳ.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên đưa vào số lượng bộ test T.</p>

<p>Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm 2 số cách nhau bởi một khoảng trống d và m, trong đó d là ngày, m là tháng.</p>

<p><strong>Output:</strong></p>

<p>Đưa ra cung hoàng đạo dựa vào bảng đã cho tương ứng với ngày tháng nhập vào.</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>5 5</div>

<div>30 7</div>
</td>
<td>
<div>Kim Nguu</div>

<div>Su Tu</div>
</td>
</tr>
</tbody>
</table>

---

## PY00000 - Welcome to python

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>In ra màn hình dòng chữ:</p>

<p>Welcome to python.</p>

<h3>Input</h3>

<p>Không có dữ liệu vào</p>

<h3>Output</h3>

<p>Welcome to python.</p>

---

## PY01000 - HELLO

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Viết chương trình in ra lời chào</p>

<p><strong>Input:&nbsp;</strong></p>

<p>Một xâu ký tự họ tên độ dài không quá 50.&nbsp;</p>

<p><strong>Output:</strong></p>

<p>in ra màn hình dòng&nbsp;</p>

<p>Hello + tên vừa nhập + dấu chấm than</p>

<p><strong>Ví dụ:.</strong></p>

<table>
<tbody>
<tr>
<td><strong>Input</strong></td>
<td><strong>output</strong></td>
</tr>
<tr>
<td>Nam</td>
<td>Hello Nam!</td>
</tr>
</tbody>
</table>



---

## PY01001 - KIỂM TRA CHẴN LẺ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một số nguyên dương N không quá 5 chữ số, hãy kiểm tra và in ra số đó chẵn hay lẻ. Nếu chẵn ghi ra chữ CHAN, nếu ngược lại ghi ra chữ LE. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi số N</p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>
</td>
<td>
<div>CHAN</div>
</td>
</tr>
<tr>
<td>
<div>9999</div>
</td>
<td>
<div>LE</div>
</td>
</tr>
</tbody>
</table>



---

## PY01002 - PHÉP CỘNG

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một phép toán có dạng <strong>a + b = c</strong> với a,b,c chỉ là các số nguyên dương có một chữ số.</p>

<p>Hãy kiểm tra xem phép toán đó có đúng hay không. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi ra phép toán (gồm đúng 9 ký tự) </p>

<p><strong>Ouput</strong></p>

<p>Ghi ra YES nếu phép toán đó đúng. Ghi ra NO nếu sai. </p>

<p><strong>Ví dụ </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Test 1</strong></div>
</td>
<td>
<div><strong>Test 2</strong></div>
</td>
</tr>
<tr>
<td>
<div>Input</div>

<div>1 + 2 = 3</div>

<div>&nbsp;</div>

<div>Output</div>

<div>YES</div>
</td>
<td>
<div>Input</div>

<div>2 + 2 = 5</div>

<div>&nbsp;</div>

<div>Output</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01003 - LÀM TRÒN SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương không quá 9 chữ số. Hãy làm tròn số N theo quy tắc sau: </p>

<ul>
<li>Nếu N&gt;10, làm tròn đến số hàng chục gần nhất</li>
<li>Sau đó nếu kết quả lớn hơn 100 thì làm tròn đến số hàng trăm gần nhất</li>
<li>Sau đó nếu kết quả lớn hơn 1000 thì làm trong đến số hàng nghìn gần nhất </li>
<li>Cứ tiếp tục như vậy … </li>
</ul>

<p>Chú ý: Giá trị 5 sẽ được làm tròn lên. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 100)</p>

<p>Mỗi bộ test ghi số N trên một dòng (N nguyên dương và không quá 9 chữ số) </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra kết quả làm tròn tương ứng trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>7</div>

<div>15</div>

<div>14</div>

<div>5</div>

<div>99</div>

<div>12345678</div>

<div>44444445</div>

<div>1445</div>
</td>
<td>
<div>20</div>

<div>10</div>

<div>5</div>

<div>100</div>

<div>10000000</div>

<div>50000000</div>

<div>2000</div>
</td>
</tr>
</tbody>
</table>



---

## PY01004 - NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Trong toán học, một cặp số được gọi là nguyên tố cùng nhau nếu ước số chung lớn nhất của 2 số đó là 1. Cho số nguyên dương N, giả sử ta đếm được K số nguyên dương nhỏ hơn N có tính chất nguyên tố cùng nhau với N. Hãy kiểm tra xem K có phải là số nguyên tố hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 10. </p>

<p>Dòng thứ 2 ghi số N (1 &lt; N &lt; 10000)</p>

<p><strong>Output</strong></p>

<p>Với mỗi test ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>2</div>

<div>3</div>
</td>
<td>
<div>NO</div>

<div>YES</div>
</td>
</tr>
</tbody>
</table>



---

## PY01005 - SỐ MAY MẮN

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Chữ số 4 và chữ số 7 được xem là các chữ số may mắn. </p>

<p>Cho số nguyên dương N có không quá 18 chữ số. Hãy đếm xem số chữ số 4 cộng với số chữ số 7 trong N có phải bằng 4 hay bằng 7 hay không. </p>

<p><strong>Input</strong></p>

<p>Chỉ có số N</p>

<p><strong>Output</strong></p>

<p>Ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>40047</div>
</td>
<td>
<div>NO</div>
</td>
</tr>
<tr>
<td>
<div>7747774</div>
</td>
<td>
<div>YES</div>
</td>
</tr>
<tr>
<td>
<div>1000000000000000000</div>
</td>
<td>
<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01006 - SỐ MAY MẮN - 2

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một số được xem là số may mắn nếu chỉ có các chữ số 4 và 7. Cho số nguyên dương N không quá 200 chữ số. Hãy kiểm tra xem N có phải số may mắn hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 10). </p>

<p>Mỗi test ghi số nguyên dương N không quá 200 chữ số. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>4477</div>

<div>44444487777777777</div>

<div>47474747474777777777777744444</div>
</td>
<td>
<div>YES</div>

<div>NO</div>

<div>YES</div>
</td>
</tr>
</tbody>
</table>



---

## PY01007 - LÃI SUẤT NGÂN HÀNG

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Ngân hàng thông báo lãi suất là X % mỗi năm. </p>

<p>Với số tiền gửi vào là N. Sau mỗi năm, tiền lãi sẽ được cộng dồn. </p>

<p>Hỏi sau bao nhiêu năm thì số tiền đạt được ít nhất là M. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. </p>

<p>Mỗi test viết 3 số thực (kiểu double) N, X và M. Trong đó 0&lt;N&lt;M&lt;100000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra số năm tính được. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>200.00 6.5 300</div>

<div>500 4 1000.00</div>
</td>
<td>
<div>7</div>

<div>18</div>
</td>
</tr>
</tbody>
</table>



---

## PY01008 - CHUYỂN THÀNH CHỮ HOA

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Viết chương trình nhập vào một xâu ký tự S có độ dài không quá 100 và chuyển xâu đã nhập thành chữ in hoa.</p>

<p><br>
<strong>Input:</strong></p>

<p>Chỉ có một dòng ghi xâu S.</p>

<p><strong>Output:</strong></p>

<p>Ghi ra kết quả trên một dòng.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>mon thcs 2</div>
</td>
<td>
<div>MON THCS 2</div>
</td>
</tr>
</tbody>
</table>



---

## PY01009 - CHỮ HOA – CHỮ THƯỜNG

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một xâu ký tự chỉ bao gồm các ký tự chữ cái, độ dài không quá 100. Hãy thực hiện: </p>

<ul>
<li>Biến đổi tất cả xâu thành viết thường, nếu số lượng chữ cái viết thường lớn hơn hoặc bằng số lượng chữ cái viết hoa. </li>
<li>Biến đổi tất cả xâu thành chữ hoa, nếu số lượng chữ cái viết hoa lớn hơn số lượng chữ cái viết thường. </li>
</ul>

<p><strong>Input</strong></p>

<p>Chỉ có một xâu ký tự độ dài không quá 100, không có khoảng trống</p>

<p><strong>Output</strong></p>

<p>Ghi ra xâu kết quả</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>vietHoa</div>
</td>
<td>
<div>viethoa</div>
</td>
</tr>
<tr>
<td>
<div>VIETTHuoNg</div>
</td>
<td>
<div>VIETTHUONG</div>
</td>
</tr>
</tbody>
</table>



---

## PY01010 - ĐẦU CUỐI

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Viết chương trình kiểm tra xem số nguyên dương N có thỏa mãn tính chất: nếu ta lấy hai chữ số đầu và hai chữ số cuối của nó thì sẽ tạo ra số có hai chữ số giống nhau hay không?</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số số test (không quá 20). Mỗi test là 1 số nguyên dương N có ít nhất 4 chữ số, nhưng không quá 18 chữ số. </p>

<p><strong>Output</strong></p>

<p>Ghi ra YES hoặc NO</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>12321</div>

<div>1234512</div>

<div>10233211111</div>
</td>
<td>
<div>NO</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01011 - LIỆT KÊ SỐ ĐẸP

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N, hãy liệt kê các số thuận nghịch M nhỏ hơn N và thỏa mãn điều kiện: </p>

<ul>
<li>Chỉ có các chữ số 0,2,4,6,8</li>
<li>Số M có số lượng các chữ số là&nbsp;chẵn</li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 10). Mỗi test viết một số N (22 &lt; N &lt;10<sup>6</sup>)</p>

<p><strong>Output</strong></p>

<p>Ghi kết quả của mỗi test trên một dòng, mỗi số cách nhau đúng một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>30</div>

<div>100</div>
</td>
<td>
<div>22 </div>

<div>22 44 66 88</div>
</td>
</tr>
</tbody>
</table>



---

## PY01012 - CHÈN XÂU

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Cho xâu S1 và xâu S2, độ dài không quá 100. </p>

<p>Hãy chèn xâu S2 vào vị trí p trong xâu S1 (vị trí ký tự đầu tiên là vị trí 1). </p>

<p><strong>Input:</strong></p>

<p>Dòng thứ nhất ghi xâu S1</p>

<p>Dòng thứ hai ghi xâu S2</p>

<p>Dòng thứ ba ghi số p (giá trị p đảm bảo nằm trong phạm vi xâu S1) </p>

<p><strong>Output:</strong></p>

<p>Ghi ra kết quả.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>mon thcs2 hoc de</div>

<div>ngon ngu C.</div>

<div>1</div>
</td>
<td>
<div>ngon ngu C.mon thcs2 hoc de</div>
</td>
</tr>
</tbody>
</table>



---

## PY01013 - ƯỚC SỐ CHUNG NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho hai số nguyên dương a và b. Hãy kiểm tra xem ước số chung lớn nhất của hai số này có tổng chữ số là nguyên tố hay không. </p>

<p>Ví dụ a = 42, b = 28, ước số chung lớn nhất = 14. Tổng chữ số của ước số chung là 1+4=5 là một số nguyên tố. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi test ghi trên một dòng hai số nguyên dương a,b (không quá 6 chữ số)</p>

<p><strong>Output</strong></p>

<p>Ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>28 42</div>

<div>123 18</div>

<div>550 55</div>
</td>
<td>
<div>YES</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01014 - CHIA HẾT CHO K

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho ba số nguyên dương a, K, N. Hãy liệt kê tất cả các số nguyên dương b thỏa mãn cả hai điều kiện: </p>

<ul>
<li>a + b ≤ N</li>
<li>a + b chia hết cho K</li>
</ul>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi ba số nguyên dương theo thứ tự a, K, N (không quá 9 chữ số). </p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các số b tìm được theo thứ tự tăng dần. </p>

<p>Nếu không tìm được số nào in ra -1</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10 1 10</div>
</td>
<td>
<div>-1</div>
</td>
</tr>
<tr>
<td>
<div>10 6 40</div>
</td>
<td>
<div>2 8 14 20 26</div>
</td>
</tr>
</tbody>
</table>



---

## PY01015 - SỐ KHÔNG GIẢM

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một số được gọi là số không giảm nếu không có cặp chữ số cạnh nhau (i, i+1) nào mà số thứ i lớn hơn số thứ i+1. </p>

<p>Viết chương trình kiểm tra số nguyên dương có thỏa mãn là số không giảm hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 10). </p>

<p>Mỗi dòng ghi một số nguyên dương (không quá 500 chữ số).</p>

<p><strong>Output</strong></p>

<p>Ghi ra YES nếu đó là số không giảm. NO nếu ngược lại</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>12345678888888888888889</div>

<div>65645645465754765876857685846</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01016 - GIẢI MÃ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một xâu ký tự độ dài không quá 100 chỉ bao gồm các chữ cái in hoa. Người ta thực hiện mã hóa bằng cách đếm các ký tự cạnh nhau giống nhau và viết số lượng phía sau các chữ cái đó. </p>

<p>Ví dụ xâu AAECCCCGGGD thì được mã hóa thành A2E1C4G3D1 </p>

<p>Với giả thiết không có ký tự nào xuất hiện nhiều hơn 9 lần liên tiếp. </p>

<p>Cho trước xâu kết quả mã hóa. Hãy khôi phục xâu ký tự ban đầu tương ứng. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi bộ test ghi xâu mã hóa. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test ghi ra xâu ký tự ban đầu. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>A8</div>

<div>A2E1C4G3D1</div>
</td>
<td>
<div>AAAAAAAA</div>

<div>AAECCCCGGGD</div>
</td>
</tr>
</tbody>
</table>



---

## PY01017 - MÃ HÓA 1

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một xâu ký tự có thể có các ký tự chữ cái và chữ số. Người ta thực hiện một phép mã hóa đơn giản, trong đó đếm từ trái qua phải các ký tự giống nhau liên tiếp và viết số đếm trước ký tự đó. </p>

<p>Ví dụ: AACDDPQ được mã hóa thành 2A1C2D1P1Q</p>

<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 11111147g được mã hóa thành 6114171g</p>

<p>Viết chương trình thực hiện thao tác mã hóa như trên. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi dòng sau là một xâu ký tự, độ dài không quá 1000.</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra xâu ký tự mã hóa tương ứng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>AACDDPQ</div>

<div>11111147g</div>

<div>1111111111</div>
</td>
<td>
<div>2A1C2D1P1Q</div>

<div>6114171g</div>

<div>101</div>
</td>
</tr>
</tbody>
</table>



---

## PY01018 - MÃ HÓA 2

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho dãy ký tự chuẩn P[] gồm 28 chữ cái, trong đó có 26 chữ cái in hoa từ A đến Z, hai ký tự cuối là gạch dưới ‘_’ và dấu chấm ‘.’</p>

<p><strong>P[] = </strong>“ABCDEFGHIJKLMNOPQRSTUVWXYZ_.”</p>

<p>Phép mã hóa với khoảng cách K (0&lt;K&lt;28) được định nghĩa là phép chuyển các ký tự s[i] thành ký tự P[(i+K)%28] trong dãy ký tự chuẩn P nói trên. </p>

<p>Ví dụ với K = 3 thì ‘A’ chuyển thành ‘D’; ‘B’ chuyển thành ‘E’ và ‘<strong>.</strong>’ chuyển thành ‘C’. </p>

<p>Cho số K và một xâu S (chỉ bao gồm các chữ cái thuộc P[], không có khoảng trống). Hãy mã hóa xâu S theo quy tắc trên, sau đó đảo ngược thứ tự các chữ cái. </p>

<p><strong>Input</strong></p>

<p>Mỗi dòng ghi số K và xâu S. </p>

<p>Input kết thúc khi K = 0. </p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả cho từng test. </p>

<p><strong>Ví dụ </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1 ABCD</div>

<div>14 ROAD</div>

<div>0</div>
</td>
<td>
<div>EDCB</div>

<div>ROAD</div>
</td>
</tr>
</tbody>
</table>



---

## PY01019 - KHOẢNG CÁCH KÝ TỰ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Nhập xâu s1, giả sử gọi xâu đảo là s2.&nbsp;Hãy&nbsp;kiểm tra xem khoảng cách ký tự cạnh nhau trong hai xâu có thỏa mãn công thức sau hay không:</p>

<p><strong>|</strong>s1[i] – s1[i-1]<strong>|</strong> = <strong>|</strong>s2[i] – s2[i-1]<strong>|</strong> với tất cả giá trị 0 &lt; i &lt; N</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi bộ test là một xâu ký tự độ dài không quá 100000. Không có khoảng trống. </p>

<p><strong>Output</strong></p>

<p>Ghi ra YES hoặc NO.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output </strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>acxz</div>

<div>bcxz</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>

---

## PY01020 - SỐ PHÁT LỘC

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một số kết thúc bởi hai chữ số 86 được gọi là số phát lộc. Cho một số nguyên dương không quá 500 chữ số, hãy kiểm tra số đó có phải số phát lộc hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi bộ test ghi số nguyên dương cần kiểm tra (không quá 500 chữ số)</p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả kiểm tra tương ứng (YES hoặc NO)</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3 </div>

<div>1539786 </div>

<div>1234789 </div>

<div>8686</div>
</td>
<td>
<div>YES</div>

<div>NO</div>

<div>YES</div>
</td>
</tr>
</tbody>
</table>



---

## PY01021 - TÍNH TỔNG CÁC CHỮ SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Cho xâu ký tự S bao gồm các ký tự ‘A’,..,’Z’ và các chữ số ‘0’,...,’9’. Nhiệm vụ của bạn in các ký tự từ ’A’,.., ‘Z’ trong S theo thứ tự từ điển và nối với tổng các chữ số trong S ở cuối cùng. Ví dụ S =”ACCBA10D2EW30” ta nhận được kết quả: “AABCCDEW6”.</p>

<p><strong>Input: </strong></p>

<ul>
<li>Dòng đầu tiên đưa vào số lượng bộ test T.</li>
<li>Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S. </li>
<li>T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤10<sup>5</sup>.</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng. </li>
</ul>

<p>&nbsp;<strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>2<br>
AC2BEW3<br>
ACCBA10D2EW30</div>
</td>
<td>
<div>ABCEW5<br>
AABCCDEW6</div>
</td>
</tr>
</tbody>
</table>



---

## PY01022 - TỔNG CHỮ SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Cho một số nguyên <strong>(có thể âm) </strong>không quá 100.000 chữ số. Mỗi bước thực hiện thay thế số nguyên này bằng giá trị tổng chữ số của số đó. Hỏi sau mấy bước thì số đó chỉ còn duy nhất 1 chữ số. </p>

<p><strong>Input</strong></p>

<p>Chỉ có duy nhất số nguyên N (không quá 100.000 chữ số)</p>

<p><strong>Output</strong></p>

<p>Ghi ra số bước cần thực hiện.</p>

<p><strong>Ví dụ </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10</div>
</td>
<td>
<div>1</div>
</td>
</tr>
<tr>
<td>
<div>919</div>
</td>
<td>
<div>3</div>
</td>
</tr>
<tr>
<td>
<div>6</div>
</td>
<td>
<div>1</div>
</td>
</tr>
</tbody>
</table>

---

## PY01023 - PHÂN TÍCH THỪA SỐ NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N. Hãy phân tích N thành tích các thừa số nguyên tố. Kết quả được in ra theo mẫu trong ví dụ, trong đó thêm số thừa số 1 (không phải nguyên tố) ở đầu kết quả phân tích. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, mỗi test ghi trên một dòng số nguyên dương N không quá 6 chữ số. </p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả phân tích theo mẫu như trong ví dụ. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>28</div>

<div>100</div>

<div>1234</div>
</td>
<td>
<div>1 * 2^2 * 7^1</div>

<div>1 * 2^2 * 5^2</div>

<div>1 * 2^1 * 617^1</div>
</td>
</tr>
</tbody>
</table>



---

## PY01024 - CHẴN - LẺ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N. Hãy kiểm tra xem N có thỏa mãn đồng thời hai tính chất sau đây hay không?</p>

<ul>
<li>Tổng chữ số của N chia hết cho 10</li>
<li>Các chữ số cạnh nhau đều khác nhau đúng 2 đơn vị</li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi bộ test ghi trên một dòng số nguyên dương N. N có ít nhất 3 chữ số nhưng không quá 18 chữ số. </p>

<p><strong>Output</strong></p>

<p>Ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>1353</div>

<div>246864</div>

<div>123435</div>
</td>
<td>
<div>NO</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01025 - CHÈN DẤU PHẨY

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Khi&nbsp; viết giá trị số nguyên trong Tiếng Anh, người ta thường thêm dấu phẩy để phân tách các nhóm 3 chữ số (tính từ cuối). Ví dụ số 153920529 được viết lại thành 153,920,529. </p>

<p>Cho số nguyên dương N trong phạm vi số int (không quá 2 tỷ). Hãy chèn dấu phẩy vào N theo quy tắc trên. </p>

<p><strong>Input </strong></p>

<p>Chỉ có 1 số N</p>

<p><strong>Output</strong></p>

<p>Kết quả sau khi đã chèn dầu phẩy</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>153920529</div>
</td>
<td>
<div>153,920,529</div>
</td>
</tr>
</tbody>
</table>



---

## PY01026 - SẮP ĐẶT LẠI XÂU KÝ TỰ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Cho hai xâu ký tự s1 và s2. Xâu s2 được gọi là một “sắp đặt lại” của xâu s1 nếu tập ký tự của xâu s2 hoàn toàn giống với xâu ký tự s1, tính cả số lần xuất hiện của từng ký tự. </p>

<p>Ví dụ: s2 = “intestg” là sắp đặt lại của xâu “testing”</p>

<p>Còn xâu “aabbbcccc” không được coi là sắp đặt lại của xâu “abc”. </p>

<p>Nhập 2 xâu s1 và s2 có độ dài không quá 1000 ký tự, chỉ bao gồm các ký tự viết thường, không có khoảng trống. Hãy kiểm tra xem s2 có phải là sắp đặt lại của s1 hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 5000. </p>

<p>Mỗi test ghi trên 2 dòng lần lượt là xâu s1 và s2. </p>

<p><strong>Output</strong></p>

<p>Ghi ra thứ tự bộ test, sau đó là YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p>Xem ví dụ để hiểu rõ hơn. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>testing </div>

<div>intestg </div>

<div>abc </div>

<div>aabbbcccc </div>

<div>abcabcbcc </div>

<div>aabbbcccc </div>

<div>abc </div>

<div>xyz </div>
</td>
<td>
<div>Test 1: YES</div>

<div>Test 2: NO</div>

<div>Test 3: YES</div>

<div>Test 4: NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01027 - SỐ LỘC PHÁT ĐẸP

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Ai cũng biết số lộc phát theo quan niệm người Việt là số chỉ chứa các chữ số 6 và/hoặc 8. Người ta định nghĩa thêm “số lộc phát đẹp” là số thỏa mãn tính chất nếu xét từ trái qua phải thì nó được ghép bởi 3 số: 6; 68; 688. Không nhất thiết phải dùng đủ cả 3 số này. </p>

<p>Ví dụ: các số 666666; 668688; 688688688 là các số lộc phát đẹp. </p>

<p>Cho trước một số nguyên dương N không quá 100 chữ số. Hãy kiểm tra xem đó có phải là số lộc phát đẹp hay không. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi số N có không quá 100 chữ số</p>

<p><strong>Output</strong></p>

<p>Ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>666666</div>
</td>
<td>
<div>YES</div>
</td>
</tr>
<tr>
<td>
<div>668688</div>
</td>
<td>
<div>YES</div>
</td>
</tr>
<tr>
<td>
<div>886236</div>
</td>
<td>
<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01028 - TÁCH TỪ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Nhập xâu ký tự S có độ dài không quá 100. Một từ được định nghĩa là một dãy ký tự không có khoảng trống. &nbsp;</p>

<p>Hãy tách xâu S thành các từ, mỗi từ in trên một dòng. </p>

<p><strong>Input:</strong></p>

<p>Chỉ có một dòng ghi xâu S (độ dài không quá 100)</p>

<p><strong>Output:</strong></p>

<p>Ghi ra kết quả.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>Tin hoc co so 2</div>
</td>
<td>
<div>Tin</div>

<div>hoc</div>

<div>co</div>

<div>so</div>

<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## PY01029 - SỐ ĐẢO NGUYÊN TỐ CÙNG NHAU

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Trong toán học, cặp số (a,b) được gọi là nguyên tố cùng nhau nếu ước số chung lớn nhất của a và b bằng 1. </p>

<p>Cho số nguyên dương N không quá 9 chữ số. Hãy kiểm tra xem N và số đảo của N có phải là một cặp số nguyên tố cùng nhau hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 20. </p>

<p>Mỗi bộ test ghi trên một dòng số nguyên dương N, không quá 9 chữ số. </p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>123</div>

<div>997</div>
</td>
<td>
<div>NO</div>

<div>YES</div>
</td>
</tr>
</tbody>
</table>



---

## PY01030 - NGUYÊN TỐ CÙNG NHAU

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một cặp số nguyên dương (a,b) được gọi là nguyên tố cùng nhau nếu a và b có ước chung lớn nhất bằng 1. </p>

<p>Cho hai số nguyên dương N và K trong đó 10 &lt; N &lt; 10000; 1 &lt; K &lt; 6. </p>

<p>Hãy liệt kê các số có K chữ số thỏa mãn nguyên tố cùng nhau với N. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi hai số N và K</p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các số thỏa mãn theo thứ tự từ nhỏ đến lớn. Mỗi dòng ghi 10 số. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>123 2</div>
</td>
<td>
<div>10 11 13 14 16 17 19 20 22 23 </div>

<div>25 26 28 29 31 32 34 35 37 38 </div>

<div>40 43 44 46 47 49 50 52 53 55 </div>

<div>56 58 59 61 62 64 65 67 68 70 </div>

<div>71 73 74 76 77 79 80 83 85 86 </div>

<div>88 89 91 92 94 95 97 98</div>
</td>
</tr>
</tbody>
</table>



---

## PY01031 - ĐỔI CƠ SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Cơ số từ 2 đến 36 được xây dựng từ 10 chữ số (0 đến 9) và 26 chữ cái Tiếng Anh in hoa (‘A’ đến ‘Z’). </p>

<p>Hãy viết chương trình chuyển một số nguyên dương N trong cơ số 10 sang cơ số b. Trong đó N không quá 100.000, 2 ≤ b ≤ 36.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 10. </p>

<p>Mỗi bộ test ghi 2 số N và b. </p>

<p>Nlà một số nguyên dương N trong cơ số 10, không quá 100.000.&nbsp; 2 ≤ b ≤ 36</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test ghi ra kết quả đổi cơ số tương ứng.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Ouput</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>10 2</div>

<div>2021 2</div>

<div>31 16</div>
</td>
<td>
<div>1010</div>

<div>11111100101</div>

<div>1F</div>
</td>
</tr>
</tbody>
</table>



---

## PY01032 - SỐ THUẬN NGHỊCH

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 3</small>

<p>Trong hệ cơ số thập phân, một số được gọi là thuận nghịch nếu đọc ngược lại ta vẫn thu được chính số đó. Ví dụ: 12321, 2345432, 111111 …</p>

<p>Chúng ta mở rộng khái niệm như sau: cho hệ cơ số K, giá trị thập phân x được gọi là thuận nghịch trong cơ số K nếu biểu diễn của x trong cơ số K có giá trị giống nhau khi viết xuôi và khi viết ngược. Với giả thiết biểu diễn trong hệ cơ số K bất kỳ (2 ≤ K ≤ 100000) là cách sử dụng chính các giá trị số từ 0 đến K-1 chứ không dùng các chữ cái. </p>

<p>Bài toán đặt ra là cho đoạn [a,b] và số M. Hãy đếm các số trong đoạn [a,b] là thuận nghịch trong tất cả các cơ số 2 ≤ K ≤ M. </p>

<p><strong>Input:</strong></p>

<p>Chỉ có một dòng ghi 3 số a,b,M.&nbsp; 0 ≤ a ≤ b ≤ 2 000 000; 2 ≤ M ≤ 100 000.</p>

<p><strong>Output:</strong></p>

<p>Ghi ra số lượng các số thỏa mãn.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1 356 2</div>
</td>
<td>
<div>36</div>
</td>
</tr>
<tr>
<td>
<div>18 118 13</div>
</td>
<td>
<div>0</div>
</td>
</tr>
</tbody>
</table>



---

## PY01033 - BỘ BA NGUYÊN TỐ CÙNG NHAU

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một cặp số nguyên dương (a,b) được gọi là nguyên tố cùng nhau nếu a và b có ước chung lớn nhất bằng 1. Một bộ ba số (a, b, c) được gọi là bộ ba nguyên tố cùng nhau nếu a &lt; b &lt; c và các cặp (a,b), (b,c), (a,c) đều nguyên tố cùng nhau. </p>

<p>Cho hai số nguyên dương L và R (10 &lt; L &lt; R &lt; 200). Hãy viết chương trình liệt kê các bộ ba số nguyên tố cùng nhau trong đoạn [L, R]. </p>

<p><strong>Input</strong></p>

<p>Chỉ có 2 số L và R</p>

<p><strong>Output</strong></p>

<p>Ghi ra các bộ ba số nguyên tố cùng nhau, mỗi bộ ba trên một dòng theo định dạng như trong ví dụ. </p>

<p>Các bộ ba được liệt kê theo thứ tự từ điển tăng dần. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>15 20</div>
</td>
<td>
<div>(15, 16, 17)</div>

<div>(15, 16, 19)</div>

<div>(15, 17, 19)</div>

<div>(16, 17, 19)</div>

<div>(17, 18, 19)</div>

<div>(17, 19, 20)</div>
</td>
</tr>
</tbody>
</table>



---

## PY01034 - ĐỔI CHỖ CÁC CHỮ SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 3</small>

<p>Cho một số nguyên không âm N được biểu diễn như một xâu ký tự. Hãy sử dụng nhiều nhất một phép đổi chỗ các chữ số trong N sao cho ta nhận được số lớn nhất nhỏ hơn N. Phép biến đổi có số 0 cho số đầu tiên sẽ không được chấp nhận. Ví dụ số N=354 thì số lớn nhất nhỏ hơn N được tạo ra là 345. Số 100 sẽ không có phép biến đổi vì số 010 có số 0 đứng đầu.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên đưa vào số lượng test T (T≤100).</p>

<p>Những dòng kế tiếp đưa vào các test. Mỗi bộ test là một xâu ký tự&nbsp;bao gồm các ký tự số. Độ dài tối đa là 1000.</p>

<p><strong>Output:</strong></p>

<p>Với mỗi test in ra số nguyên lớn nhất tìm được&nbsp;trên một dòng. Nếu không tồn tại đáp án, in ra -1.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>354</div>

<div>999</div>

<div>100</div>

<div>11101</div>

<div>&nbsp;</div>
</td>
<td>
<div>345</div>

<div>-1</div>

<div>-1</div>

<div>11011</div>
</td>
</tr>
</tbody>
</table>



---

## PY01035 - HỆ CƠ SỐ 8

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Cho một số nhị phân, người ta nhận ra quy tắc đơn giản là chỉ cần xét lần lượt các cụm ba chữ số nhị phân tình từ cuối của số đó, sau đó chuyển lần lượt từng cụm sang giá trị thập phân tương ứng thì kết quả nhận được chính là biểu diễn của số đó trong hệ cơ số 8. Nếu cụm cuối cùng bị thiếu thì bổ sung các chữ số 0 cho đủ 3 chữ số. </p>

<p>Ví dụ: </p>

<p>11001100 =&gt; 011 | 001 | 100 =&gt; 314</p>

<p>Hãy áp dụng tính chất trên để chuyển đổi một số nhị phân (không quá 100 chữ số và luôn bắt đầu bởi chữ số 1) sang hệ cơ số 8. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một số nhị phân, không quá 100 chữ số</p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả trong hệ cơ số 8</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1010</div>
</td>
<td>
<div>12</div>
</td>
</tr>
<tr>
<td>
<div>11001100</div>
</td>
<td>
<div>314</div>
</td>
</tr>
</tbody>
</table>



---

## PY01036 - TÍNH TỔNG PHÂN THỨC

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Nhập số nguyên dương N (1 &lt; N &lt; 10000). </p>

<p>Viết chương trình tính tổng: </p>

<ul>
<li>S = 1 + 1/3 + 1/5 + … + 1/N nếu N lẻ</li>
<li>S = 1/2 + 1/4 + 1/6 + … + 1/N nếu N chẵn</li>
</ul>

<p>Kết quả được in ra với 6 chữ số phần thập phân. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 10. </p>

<p>Mỗi test ghi một số N</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra kết quả trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>10</div>

<div>15</div>
</td>
<td>
<div>1.141667</div>

<div>2.021800</div>
</td>
</tr>
</tbody>
</table>



---

## PY01037 - SỐ PHẢN NGUYÊN TỐ NHỎ NHẤT

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Số nguyên dương N được gọi là phản nguyên tố nếu như số lượng ước số của N lớn hơn số lượng ước số của tất cả các số nguyên dương nhỏ hơn N. </p>

<p>Ví dụ các số phản nguyên tố đầu tiên: 1, 2, 4, 6, 12, 24, …</p>

<p>Cho số nguyên dương X, hãy tìm số phản nguyên tố bé nhất không nhỏ hơn X. </p>

<p><strong>Input:</strong></p>

<p>Dòng đầu ghi số bộ test T (không quá 10<sup>6</sup>)</p>

<p>Mỗi test ghi số nguyên dương X (1 ≤ X ≤ 10<sup>7</sup>)</p>

<p><strong>Output:</strong></p>

<p>Với mỗi test, ghi ra kết quả tính được trên một dòng. </p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>5</div>
</td>
<td>
<div>6</div>
</td>
</tr>
</tbody>
</table>



---

## PY01038 - KIỂM TRA CHIA HẾT CHO 7

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một số nguyên dương N. Mỗi bước bạn thực hiện tính tổng của N với giá trị số đảo ngược của N. Bạn sẽ dừng lại khi gặp giá trị chia hết cho 7 hoặc khi đã thực hiện quá 1000 bước lặp. </p>

<p>Hãy tính giá trị chia hết cho 7 tìm được theo thủ tục trên hoặc ghi ra -1 nếu không thể tìm ra đáp án. </p>

<p><strong>Input:</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 1000).</p>

<p>Mỗi test ghi số N (1 ≤ N ≤ 10<sup>18</sup>)</p>

<p><strong>Output:</strong></p>

<p>Ghi ra giá trị chia hết cho 7 đầu tiên tìm được. Hoặc số -1 nếu không thể tìm được đáp án. </p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>1</div>

<div>2</div>

<div>3</div>

<div>4</div>

<div>999999</div>
</td>
<td>
<div>77</div>

<div>77</div>

<div>9447438</div>

<div>77</div>

<div>999999</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: 1 à 2 à 4 à 8 à 16 à 77</p>



---

## PY01039 - KIỂM TRA SỐ ĐẸP

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một số nguyên dương được gọi là đẹp&nbsp;nếu số đó chỉ có hai chữ số khác nhau và các chữ số ở cách nhau 2 vị trí đều bằng nhau. Ví dụ: 121, 1313131, 5656 … </p>

<p>Viết chương trình kiểm tra một số có phải số đẹp&nbsp;hay không? </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi bộ test ghi một số nguyên dương N (lớn hơn 10 và có không quá 18 chữ số) trên một dòng. </p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>12121212</div>

<div>343433</div>

<div>78789989</div>
</td>
<td>
<div>YES</div>

<div>NO</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01040 - MÃ HÓA 3

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 3</small>

<p>Cho một xâu ký tự. Quá trình mã hóa D - R - M sẽ trải qua ba bước Chia (Divide), Xoay (Rotate) và Trộn (Merge). Ví dụ với xâu: EWPGAJRB&nbsp; quá trình này sẽ diễn ra như sau: </p>

<ul>
<li><strong>Devide:</strong> Xâu ban đầu được chia thành 2 nửa: “EWPG” và “AJRB”.</li>
<li><strong>Rotate:</strong> Với mỗi nửa, tính toán giá trị xoay của nó bằng cách tính tổng giá trị các ký tự. (A = 0; B = 1; … Z = 25).&nbsp; Giá trị xoay của “EWPG” là 4 + 22 + 15 + 6 = 47. Tiến hành xoay xâu&nbsp; “EWPG”&nbsp; đi 47 ký tự (tính cả bước chuyển từ Z về A nếu cần) ta sẽ được xâu: “ZRKB”. Tương tự, “AJRB” được chuyển thành “BKSC”</li>
<li><strong>Merge:</strong> Trong bước này, mỗi ký tự trong xâu thứ nhất sẽ được xoay theo giá trị của ký tự ở vị trí tương ứng trong xâu thứ 2. Trong ví dụ trên, chữ Z trong xâu thứ nhất sẽ xoay theo giá trị B, tức là 1 vị trí. Do đó sẽ chuyển thành chữ A. Tiếp tục thực hiện với các ký tự tiếp theo ta sẽ có kết quả là “ABCD”.</li>
</ul>

<p>Cho một xâu ký tự chỉ bao gồm các chữ cái in hoa với số lượng ký tự là chẵn, bạn hãy tìm xâu mã hóa DRM tương ứng. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test T (T≤30). </p>

<p>Mỗi bộ test ghi trên một dòng xâu ký tự cần mã hóa, chỉ gồm các chữ cái in hoa, độ dài là chẵn và không quá 15000 ký tự. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test in ra trên một dòng kết quả mã hóa DRM tương ứng.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>EWPGAJRB</div>

<div>BB</div>

<div>TPQJDRJWSQXGRRIPXFMINTELHBJA</div>
</td>
<td>
<div>ABCD</div>

<div>E</div>

<div>FIRSTDATAFILEV</div>
</td>
</tr>
</tbody>
</table>

---

## PY01041 - SỐ TĂNG GIẢM

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một số nguyên dương được gọi là số tăng giảm nếu thỏa mãn các điều kiện: </p>

<ul>
<li>Có từ 3 chữ số trở lên</li>
<li>Tìm ra một vị trí trong dãy chữ số sao cho từ bên trái đến vị trí đó thỏa mãn thứ tự tăng dần (tăng chặt) còn từ vị trí đó đến hết thì thỏa mãn thứ tự giảm dần (giảm chặt). </li>
</ul>

<p>Viết chương trình kiểm tra một số có phải số tăng giảm hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương N không quá 18 chữ số</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Ouput</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>12342</div>

<div>23342</div>

<div>5678961</div>
</td>
<td>
<div>YES</div>

<div>NO</div>

<div>YES</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PY01042 - KIỂM TRA HỆ CƠ SỐ 3

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Hệ cơ số 3 chỉ biểu diễn các số sử dụng ba chữ số là 0, 1, 2. </p>

<p>Nhập vào dãy biểu diễn không quá 18 ký tự, hãy kiểm tra xem dãy biểu diễn nào là đúng với hệ cơ số 3. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu là số bộ test, mỗi dòng tiếp theo ghi một dãy biểu diễn cần kiểm tra. </p>

<p><strong>Output</strong></p>

<p>Nếu đúng in ra YES, nếu sai in ra NO.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>1214AB</div>

<div>10210221</div>

<div>22222222</div>
</td>
<td>
<div>NO</div>

<div>YES</div>

<div>YES</div>
</td>
</tr>
</tbody>
</table>



---

## PY01043 - SỐ THUẬN NGHỊCH CHẴN

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N không quá 6 chữ số. </p>

<p>Hãy liệt kê các số nhỏ hơn N thỏa mãn cả ba điều kiện: </p>

<ul>
<li>N là số thuận nghịch</li>
<li>Tất cả các chữ số của N đều chẵn</li>
<li>Số chữ số của N cũng là một số chẵn</li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 10). Mỗi test viết một số N (22 &lt; N &lt;10<sup>6</sup>)</p>

<p><strong>Output</strong></p>

<p>Ghi kết quả của mỗi test trên một dòng, mỗi số cách nhau đúng một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>30</div>

<div>100</div>
</td>
<td>
<div>22 </div>

<div>22 44 66 88</div>
</td>
</tr>
</tbody>
</table>



---

## PY01044 - XỬ LÝ XÂU KÝ TỰ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Trong lập trình cơ bản, một từ được hiểu là một dãy ký tự liên tiếp không chứa khoảng trống, dấu tab hoặc dấu xuống dòng.</p>

<p>Viết chương trình nhập hai dòng ký tự và hiển thị hợp và giao của hai tập từ tương ứng. Các từ trong tập từ không được phép trùng nhau, mỗi từ chỉ liệt kê một lần và theo đúng thứ tự từ điển. Các từ đều được chuyển hết về chữ viết thường.&nbsp;</p>

<p><strong>Input</strong></p>

<p>Chỉ có 2 dòng, mỗi dòng có độ dài không quá 1000 ký tự.</p>

<p><strong>Output</strong></p>

<p>Dòng 1 ghi hợp của 2 tập từ theo thứ tự từ điển</p>

<p>Dòng 2 ghi giao của 2 tập từ theo thứ tự từ điển.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>Lap trinh huong doi tuong</div>

<div>Ngon ngu lap trinh C++</div>
</td>
<td>
<div>c++ doi huong lap ngon ngu trinh tuong</div>

<div>lap trinh</div>
</td>
</tr>
</tbody>
</table>



---

## PY01045 - XÂU PALINDROME

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một xâu ký tự là xâu palindrome là một xâu khác rỗng mà nếu lật ngược xâu ấy ta thu được xâu ban đầu. Ví dụ các xâu <em>abcba</em>, <em>dd</em>&nbsp;là xâu palindrome, trong khi các xâu <em>abc</em>, <em>ptit</em>&nbsp;thì không phải.</p>

<p>Cho một xâu ký tự A. Tìm cách xoá đi nhiều nhất các kí tự của A&nbsp;để thu được một xâu palindrome.</p>

<p><strong>Input</strong></p>

<p>Một dòng duy nhất gồm một xâu kí tự S không quá 10000 ký tự, chỉ có các chữ cái in thường.&nbsp;</p>

<p><strong>Output</strong><strong>: </strong>Số kí tự lớn nhất có thể bỏ đi được để S&nbsp;là xâu palindrome.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>abccba</div>
</td>
<td>
<div>5</div>
</td>
</tr>
</tbody>
</table>



---

## PY01046 - THÁP HÀ NỘI

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Bài toán Tháp Hà Nội đã rất nổi tiểng. Bắt đầu có các đĩa xếp chồng lên cột A theo thứ tự kích thước giảm dần, nhỏ nhất ở trên cùng. Cột B và cột C ban đầu không có đĩa nào cả. </p>

<p>Mục tiêu của bạn là di chuyển toàn bộ các đĩa theo đúng thứ tự về cột C, tuân theo các quy tắc sau:</p>

<ol>
<li>Mỗi lần chỉ có thể di chuyển một đĩa.</li>
<li>Mỗi lần di chuyển sẽ lấy đĩa trên từ một trong các cột và đặt nó lên trên một cột khác.</li>
<li>Không được đặt đĩa lên trên đĩa nhỏ hơn..</li>
</ol>

<p><strong>Input:</strong></p>

<p>Số tự nhiên&nbsp; 0 &lt; N &lt; 10</p>

<p><strong>Output:</strong></p>

<p>In ra lần lượt từng bước theo mẫu trong ví dụ. Chú ý giữa các chữ cái và dấu -&gt; có khoảng trống. </p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Ouput</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>&nbsp;</div>
</td>
<td>
<div>A -&gt; C</div>

<div>A -&gt; B</div>

<div>C -&gt; B</div>

<div>A -&gt; C</div>

<div>B -&gt; A</div>

<div>B -&gt; C</div>

<div>A -&gt; C</div>
</td>
</tr>
</tbody>
</table>



---

## PY01047 - KIỂM TRA NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có không quá 500 chữ số. </p>

<p>Hãy kiểm tra xem 4 chữ số cuối cùng ghép lại có tạo thành một số nguyên tố hay không.</p>

<p>Chú ý: các chữ số 0 ở đầu trong 4 chữ số cuối vẫn được chấp nhận </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 20). </p>

<p>Mỗi test viết trên một dòng số nguyên dương N, không quá 500 chữ số. </p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>12234323130097</div>

<div>3443354654654654461123</div>

<div>43543543434554659999</div>
</td>
<td>
<div>YES</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01048 - TỔNG LIÊN TIẾP

- <small>Chủ đề con: CÂU LỆNH RẼ NHÁNH</small>
- <small>Độ khó: 3</small>

<p>Một số số nguyên dương có thể được biểu diễn thành tổng của các số nguyên dương liên tiếp. </p>

<p>Ví dụ: 6 = 1 +2 + 3 hoặc 9 = 4 + 5 hoặc 9 = 2 + 3 + 4</p>

<p>Cho số nguyên dương N không quá 9 chữ số. Hãy đếm xem có bao nhiêu cách biểu diễn N thành tổng các số nguyên dương liên tiếp. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 20. </p>

<p>Mỗi bộ test ghi một số nguyên dương N, không quá 9 chữ số. </p>

<p><strong>Output</strong></p>

<p>Ghi ra số cách tìm được. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Ouput</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>6</div>

<div>8</div>

<div>9</div>
</td>
<td>
<div>1</div>

<div>0</div>

<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## PY01049 - CHỮ SỐ NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một số nguyên dương được gọi là ưu thế nguyên tố nếu thỏa mãn cả hai điều kiện: </p>

<ul>
<li>Số chữ số của nó là một số nguyên tố</li>
<li>Số lượng chữ số nguyên tố nhiều hơn số lượng chữ số không nguyên tố </li>
</ul>

<p>Viết chương trình kiểm tra một số nguyên có thỏa mãn ưu thế nguyên tố hay không. </p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu ghi số bộ test, không quá 20. </li>
<li>Mỗi bộ test ghi số nguyên dương N, ít nhất 3 chữ số nhưng không quá 500 chữ số </li>
</ul>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>1234567</div>

<div>22334455667</div>

<div>23400300489898989</div>
</td>
<td>
<div>YES</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01050 - KÝ TỰ A – B – C

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Hãy liệt kê tất cả các xâu ký tự có độ dài không quá N, chỉ tạo bởi các ký tự A, B, C và thỏa mãn các điều kiện sau: </p>

<ul>
<li>Chứa cả ba ký tự A, B, C</li>
<li>Số ký tự A không nhiều hơn&nbsp;số ký tự B, số ký tự B không nhiều hơn&nbsp;số ký tự C</li>
</ul>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi số N, không quá 12. </p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các xâu thỏa mãn theo thứ tự độ dài từ ngắn nhất đến dài nhất.</p>

<p>Nếu có cùng độ dài thì ghi theo thứ tự từ điển. </p>

<p>Mỗi xâu ghi trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>
</td>
<td>
<div>ABC</div>

<div>ACB</div>

<div>BAC</div>

<div>BCA</div>

<div>CAB</div>

<div>CBA</div>

<div>ABCC</div>

<div>ACBC</div>

<div>ACCB</div>

<div>BACC</div>

<div>BCAC</div>

<div>BCCA</div>

<div>CABC</div>

<div>CACB</div>

<div>CBAC</div>

<div>CBCA</div>

<div>CCAB</div>

<div>CCBA</div>
</td>
</tr>
</tbody>
</table>



---

## PY01051 - TỔNG CHỮ SỐ THUẬN NGHỊCH

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có thể rất lớn nhưng không quá 500 chữ số. </p>

<p>Hãy kiểm tra xem tổng các chữ số của N có phải là một số thuận nghịch hay không. </p>

<p><em>Một số chỉ được coi là thuận nghịch nếu nhiều hơn 1 chữ số và số đảo của nó đúng bằng nó. </em></p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 20). </p>

<p>Mỗi test ghi số N (không quá 500 chữ số)</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>12341</div>

<div>22222222222222222222</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01052 - TỔNG CHỮ SỐ NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có thể rất lớn nhưng không quá 500 chữ số. </p>

<p>Hãy kiểm tra xem tổng các chữ số của N có phải là một số nguyên tố hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 20). </p>

<p>Mỗi test ghi số N (không quá 500 chữ số)</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>12341</div>

<div>22222222222222222222</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01053 - SỐ CHIA HẾT CHO 3

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có thể rất lớn nhưng không quá 500 chữ số. </p>

<p>Hãy kiểm tra xem N có chia hết cho 3 hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 20). </p>

<p>Mỗi test ghi số N (không quá 500 chữ số)</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>12341</div>

<div>123456789123456789</div>
</td>
<td>
<div>NO</div>

<div>YES</div>
</td>
</tr>
</tbody>
</table>



---

## PY01054 - TÍCH CHỮ SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có thể rất lớn nhưng không quá 500 chữ số. </p>

<p>Hãy tính tích các chữ số của N. Chú ý bỏ qua các chữ số 0 nếu có.&nbsp; </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 20). </p>

<p>Mỗi test ghi số N (không quá 500 chữ số). </p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra kết quả tính được.</p>

<p>Dữ liệu vào đảm bảo kết quả tích các chữ số sẽ không vượt quá 18 chữ số. &nbsp;</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>123410</div>

<div>123456789123456789</div>
</td>
<td>
<div>24</div>

<div>131681894400</div>
</td>
</tr>
</tbody>
</table>



---

## PY01055 - SỐ XEN KẼ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một số được gọi là xen kẽ nếu thỏa mãn cả ba tính chất sau: </p>

<ul>
<li>Số chữ số là số lẻ</li>
<li>Chữ số đầu tiên khác chữ số thứ hai. </li>
<li>Các số ở vị trí đầu tiên, vị trí thứ 3, vị trí thứ 5… &nbsp;và vị trí cuối cùng có giá trị bằng nhau </li>
</ul>

<p>Viết chương trình kiểm tra một số có phải xen kẽ hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 10). </p>

<p>Mỗi bộ test viết trên một dòng số cần kiểm tra, không quá 500 chữ số. </p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test viết ra YES hoặc NO tùy thuộc kết quả kiểm tra</p>

<p><strong>Ví&nbsp; dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>2324272921262</div>

<div>13141516</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01056 - CHẴN – LẺ - NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một số nguyên dương không quá 500 chữ số. </p>

<p>Hãy kiểm tra xem số đó có thỏa mãn đồng thời ba tính chất sau hay không?</p>

<ul>
<li>Vị trí chẵn là chữ số chẵn</li>
<li>Vị trí lẻ là chữ số lẻ</li>
<li>Tổng chữ số là một số nguyên tố. </li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 10)</p>

<p>Mỗi bộ test ghi trên một dòng giá trị số nguyên (không quá 500 chữ số)</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>2345678521</div>

<div>1212121212121212121212121</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01057 - VỊ TRÍ NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Trong 10 chữ số thập phân thì có 4 chữ số nguyên tố là 2, 3, 5, 7. </p>

<p>Một số nguyên dương được coi là thỏa mãn nguyên tố đúng vị trí nếu thỏa mãn cả hai điều kiện: </p>

<ul>
<li>Nếu i là nguyên tố thì vị trí thứ i cũng phải là chữ số nguyên tố. </li>
<li>Ngược lại nếu i không phải là số nguyên tố thì vị trí thứ i không phải là chữ số nguyên tố.&nbsp; </li>
</ul>

<p>Ví dụ: số <strong>14239567</strong> thỏa mãn nguyên tố đúng vị trí vì các vị trí thứ 2, 3, 5, 7 là các chữ số nguyên tố, các vị trí khác không nguyên tố.&nbsp; </p>

<p>Viết chương trình kiểm tra một số nguyên dương không quá 500 chữ số có thỏa mãn tính chất trên hay không.&nbsp; </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 10. </p>

<p>Mỗi bộ test viết trên một dòng số nguyên dương không quá 500 chữ số. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>14239567</div>

<div>2314514535353</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01058 - ĐOẠN CUỐI NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có không quá 500 chữ số. </p>

<p>Hãy kiểm tra xem 4 chữ số cuối cùng ghép lại có tạo thành một số nguyên tố hay không.</p>

<p>Chú ý: các chữ số 0 ở đầu trong 4 chữ số cuối vẫn được chấp nhận </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 20). </p>

<p>Mỗi test viết trên một dòng số nguyên dương N, không quá 500 chữ số. </p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>12234323130097</div>

<div>3443354654654654461123</div>

<div>43543543434554659999</div>
</td>
<td>
<div>YES</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01059 - TỔNG CHỮ SỐ - TÍCH CHỮ SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có thể rất lớn nhưng không quá 500 chữ số. Xét các vị trí từ trái qua phải (tính từ 0). Hãy tính: </p>

<ul>
<li>Tổng các chữ số ở vị trí chẵn</li>
<li>Tích các chữ số ở vị trí lẻ. – giá trị tích chữ số có thể đến 18 chữ số. Chú ý khi tính tích bỏ qua các chữ số 0, nhưng nếu tất cả các vị trí lẻ đều là giá trị 0 thì tích = 0. </li>
</ul>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu ghi số bộ test (không quá 20)</li>
<li>Mỗi bộ test ghi trên một dòng số nguyên dương N (ít nhất 2 chữ số và không quá 500 chữ số)</li>
</ul>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, viết trên một dòng hai giá trị: tổng chữ số và tích chữ số tính được. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>12345678</div>

<div>20000</div>

<div>22334455667788</div>
</td>
<td>
<div>16 384</div>

<div>2 0</div>

<div>35 40320</div>
</td>
</tr>
</tbody>
</table>



---

## PY01060 - TÍCH CHỮ SỐ - TỔNG CHỮ SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có thể rất lớn nhưng không quá 500 chữ số. Xét các vị trí từ trái qua phải (tính từ 0). Hãy tính: </p>

<ul>
<li>Tích các chữ số ở vị trí chẵn – giá trị tích chữ số có thể đến 18 chữ số. Chú ý khi tính tích bỏ qua các chữ số 0. </li>
<li>Tổng các chữ số ở vị trí lẻ</li>
</ul>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu ghi số bộ test (không quá 20)</li>
<li>Mỗi bộ test ghi trên một dòng số nguyên dương N (ít nhất 2 chữ số và không quá 500 chữ số)</li>
</ul>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, viết trên một dòng hai giá trị: tích chữ số và tổng chữ số tính được. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>12345678</div>

<div>20000</div>

<div>22334455667788</div>
</td>
<td>
<div>105 20</div>

<div>2 0</div>

<div>40320 35</div>
</td>
</tr>
</tbody>
</table>



---

## PY01061 - ĐẦU CUỐI NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N có ít nhất 4 chữ số và không quá 500 chữ số. </p>

<p>Một số được gọi là số đầu cuối nguyên tố nếu thỏa mãn cả hai điều kiện: </p>

<ul>
<li>Ba chữ số đầu ghép lại được một số nguyên tố</li>
<li>Ba chữ số cuối ghép lại được một số nguyên tố</li>
</ul>

<p>Viết chương trình kiểm tra xem N có phải là đầu cuối nguyên tố hay không?</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 20). </p>

<p>Mỗi bộ test viết trên một dòng số N, ít nhất 4 chữ số và không quá 500 chữ số. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>12743</div>

<div>7337</div>

<div>12345678901234</div>
</td>
<td>
<div>YES</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01062 - ƯU THẾ NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một số nguyên dương được gọi là ưu thế nguyên tố nếu thỏa mãn cả hai điều kiện: </p>

<ul>
<li>Số chữ số của nó là một số nguyên tố</li>
<li>Số lượng chữ số nguyên tố nhiều hơn số lượng chữ số không nguyên tố </li>
</ul>

<p>Viết chương trình kiểm tra một số nguyên có thỏa mãn ưu thế nguyên tố hay không. </p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu ghi số bộ test, không quá 20. </li>
<li>Mỗi bộ test ghi số nguyên dương N, ít nhất 3 chữ số nhưng không quá 500 chữ số </li>
</ul>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>1234567</div>

<div>22334455667</div>

<div>23400300489898989</div>
</td>
<td>
<div>YES</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01063 - ĐẾM SỐ TRONG XÂU

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một ký tự S[] chỉ có các chữ số, độ dài không quá 1000, và số nguyên dương N (không quá 9 chữ số). Hãy đếm xem số N xuất hiện bao nhiêu lần trong S[]. </p>

<p>Chú ý: các ký tự số không được đếm lặp. Tức là mỗi ký tự chỉ được xét một lần.</p>

<p>Ví dụ: S[] = “<strong><u>121</u></strong>2<strong><u>121</u></strong>112211221<strong><u>121</u></strong>”, N = <strong>121</strong> thì đáp án là 3.&nbsp; </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 20. </p>

<p>Mỗi test gồm hai dòng, dòng đầu là xâu ký tự S[], dòng sau là số N. </p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra kết quả tính được trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>1212121112211221121</div>

<div>121</div>

<div>2222222222322292</div>

<div>2222</div>
</td>
<td>
<div>3</div>

<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## PY01064 - KÝ TỰ THỨ K

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Xâu ký tự S được tạo ra bằng cách bổ sung dần các ký tự chữ cái Tiếng Anh in hoa như sau. </p>

<ul>
<li>Bước 1: Chỉ có chữ cái A</li>
<li>Bước 2: Thêm chữ cái B vào giữa 2 chữ A =&gt; S = "ABA"</li>
<li>Bước 3: Thêm chữ cái C vào giữa 2 xâu đã có ở bước 2: S = "ABACABA"</li>
</ul>

<p>Cứ như vậy cho đến bước thứ N (0 &lt; N &lt; 26)</p>

<p>Hãy xác định ký tự&nbsp;thứ K trong bước biến đổi thứ N là chữ cái gì?</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên là số lượng bộ test T (T ≤ 20).</li>
<li>Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 25, 1 ≤ K ≤ 2<sup>N</sup> - 1).</li>
</ul>

<p><strong>Output:&nbsp; </strong></p>

<ul>
<li>Với mỗi test, in ra đáp án trên một dòng.</li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>3 2</div>

<div>4 8</div>

<div>&nbsp;</div>
</td>
<td>
<div>B </div>

<div>D</div>
</td>
</tr>
</tbody>
</table>

---

## PY01065 - PHÉP TOÁN CƠ BẢN

- <small>Chủ đề con: CÂU LỆNH RẼ NHÁNH</small>
- <small>Độ khó: 2</small>

<p>Cho một biểu thức trong phạm vi hai chữ số với các phép toán cộng trừ nhân chia. <em>Các toán hạng và kết quả đảm bảo là số nguyên dương có hai chữ số</em>, <em>nếu có phép chia thì phải thỏa mãn tính chia hết. </em></p>

<p>Người ta có thể ẩn đi một số chữ số hoặc phép toán bằng cách điền dấu chấm hỏi (?). Nhiệm vụ của bạn là khôi phục các dấu chấm hỏi và in ra phép toán chính xác ban đầu. Nếu không thể có kết quả đúng thì ghi ra WRONG PROBLEM!</p>

<p><strong>Dữ liệu vào</strong></p>

<p>Dòng đầu ghi số bộ test T (1 ≤ T ≤ 100). </p>

<p>T dòng tiếp theo, mỗi dòng là một biểu thức <em>có thể</em> có các dấu ?. </p>

<p><em>Dữ liệu vào đảm bảo chỉ có duy nhất một kết quả đúng hoặc không thể có kết quả đúng. </em></p>

<p><strong>Kết quả</strong></p>

<p>Với mỗi bộ test, ghi ra biểu thức đúng tìm được. Hoặc WRONG PROBLEM!</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
?0 ? 12 = 28<br>
40 / ?3 = ??</div>

<div>&nbsp;</div>
</td>
<td>
<div>40 - 12 = 28</div>

<div>WRONG PROBLEM!</div>
</td>
</tr>
</tbody>
</table>



---

## PY01066 - XÂU “THĂNG BẰNG”

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một xâu ký tự được gọi là <strong>“thăng bằng”</strong> nếu khoảng cách của tất cả các cặp ký tự cạnh nhau trong xâu đó đều đúng bằng khoảng cách của hai vị trí tương ứng trong xâu đảo của nó. </p>

<p>Ví dụ xâu s1 có độ dài N và xâu đảo của nó là s2 thì xâu này sẽ thỏa mãn tính chất thăng bằng nếu: </p>

<p><strong>|</strong>s1[i] – s1[i-1]<strong>|</strong> = <strong>|</strong>s2[i] – s2[i-1]<strong>|</strong> với tất cả giá trị 0 &lt; i &lt; N</p>

<p>Hãy kiểm tra xem một xâu ký tự bất kỳ có phải là xâu “thăng bằng” hay không. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. Mỗi bộ test là một xâu ký tự độ dài không quá 100000. Không có khoảng trống. </p>

<p><strong>Output</strong></p>

<p>Ghi ra YES hoặc NO.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output </strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>acxz</div>

<div>bcxz</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>

---

## PY01067 - SỐ 2 ƯU THẾ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Hệ thống máy tính mới chuyển sang sử dụng hệ đếm tam phân với ba chữ số 0, 1, 2.</p>

<p>Do vốn đã quen với hệ đếm nhị phân nên Nam chỉ quan tâm đến các số tam phân thỏa mãn chữ số 2 chiếm ưu thế, tức là số lượng chữ số 2 chiếm nhiều hơn 50% số chữ số của số đó.</p>

<p>Hãy giúp Nam liệt kê N số tam phân mà số 2 chiếm ưu thế đầu tiên (theo thứ tự từ nhỏ đến lớn).</p>

<p><strong>Input</strong><br>
Dòng đầu ghi số bộ test (không quá 20)</p>

<p>Mỗi bộ test ghi số nguyên dương N (không quá 1000)</p>

<p><strong>Output</strong></p>

<p>Với mỗi test, viết trên một dòng N số tam phân ưu thế 2, các số cách nhau một khoảng trống.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>5</div>

<div>10</div>
</td>
<td>
<div>2 22 122 202 212</div>

<div>2 22 122 202 212 220 221 222 1222 2022</div>
</td>
</tr>
</tbody>
</table>



---

## PY01068 - ĐẶT TÊN

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 2</small>

<p>Kỳ thi ICPC có K đội của PTIT tham gia và đội tuyển đang rất đau đầu không biết chọn các cái tên như thế nào cho các đội. Yêu cầu phải đảm bảo tên không có khoảng trống và không được trùng nhau. Sau khi thảo luận, có N cái tên được đề xuất (có thể bị trùng nhau). Với K&lt;15 và 4 &lt; N &lt; 30.</p>

<p>Hãy liệt kê tất cả danh sách các tổ hợp K cái tên khác nhau có thể được tạo ra theo thứ tự từ điển.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi 2 số N và K.</p>

<p>Tiếp theo là 1 dòng ghi N cái tên, mỗi cái tên có độ dài không quá 15 và cách nhau một khoảng trống. Tất cả đều là ký tự in hoa.</p>

<p><strong>Output</strong></p>

<p>Ghi ra tất cả các tổ hợp tên có thể được lựa chọn theo thứ tự từ điển.</p>

<p>Tức là các tên trong mỗi tổ hợp liệt kê theo thứ tự từ điển và các tổ hợp cũng được liệt kê theo thứ tự từ điển.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 2</div>

<div>DONG TAY NAM BAC TAY BAC</div>
</td>
<td>
<div>BAC DONG</div>

<div>BAC NAM</div>

<div>BAC TAY</div>

<div>DONG NAM</div>

<div>DONG TAY</div>

<div>NAM TAY</div>
</td>
</tr>
</tbody>
</table>



---

## PY01069 - CHỮ SỐ NGUYÊN TỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 3</small>

<p>Chúng ta đều biết chỉ có 4 chữ số nguyên tố là 2, 3, 5, 7. Hãy liệt kê tất cả các số có ít nhất 4 chữ số nhưng không quá N chữ số và thỏa mãn tất cả các điều kiện sau: </p>

<ul>
<li>Chỉ có các chữ số 2, 3, 5, 7</li>
<li>Có đầy đủ 4 chữ số 2, 3, 5, 7</li>
<li>Không phải là số chẵn. </li>
</ul>

<p><strong>Input</strong></p>

<p>Chỉ có 1 dòng ghi số N (3 &lt; N &lt; 10)</p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các số thỏa mãn theo thứ tự tăng dần, mỗi số trên một dòng </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>
</td>
<td>
<div>2357</div>

<div>2375</div>

<div>2537</div>

<div>2573</div>

<div>2735</div>

<div>2753</div>

<div>3257</div>

<div>3275</div>

<div>3527</div>

<div>3725</div>

<div>5237</div>

<div>5273</div>

<div>5327</div>

<div>5723</div>

<div>7235</div>

<div>7253</div>

<div>7325</div>

<div>7523</div>
</td>
</tr>
</tbody>
</table>



---

## PY01070 - BÀI TOÁN HÌNH HỌC - 1

- <small>Chủ đề con: CÂU LỆNH RẼ NHÁNH</small>
- <small>Độ khó: 3</small>

<p>Cho <em>N</em> điểm trên mặt phẳng Oxy. Nhiệm vụ của bạn là xác định xem có tồn tại một đường tròn ngoại tiếp của 3 đỉnh và thỏa mãn có đúng K điểm <strong><em>nằm trong</em></strong> đường tròn hay không (không tính các điểm nằm trên đường tròn).</p>

<p><strong>Dữ liệu vào:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10).</p>

<p>Mỗi test gồm số nguyên <em>N</em> (3 ≤ N ≤ 100), là số lượng điểm trên mặt phẳng. Dòng tiếp theo là số nguyên <em>K (1 ≤ K ≤ 100)</em>.</p>

<p><em>N</em> dòng tiếp theo, dòng thứ <em>i</em> gồm 2 số nguyên x<sub>i</sub>, y<em><sub>i</sub></em> &nbsp;(-1000 ≤ <em>x<sub>i</sub>, y<sub>i </sub>≤ 1000</em>).</p>

<p><strong>Kết quả:&nbsp; </strong></p>

<p>Với mỗi test, in ra “YES” nếu tìm được đường tròn chứa đúng K điểm. In ra “NO” trong trường hợp ngược lại.</p>

<p><strong>Ví dụ:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4 </div>

<div>1</div>

<div>0 0</div>

<div>5 0</div>

<div>0 5</div>

<div>1 1</div>

<div>5</div>

<div>2</div>

<div>5 5</div>

<div>5 -5</div>

<div>-5 5</div>

<div>-5 -5</div>

<div>0 0</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY01071 - PYTHON FILE

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Một file code Python sẽ có phần mở rộng là .py.&nbsp;</p>

<p>Trong hệ điều hành Windows tên file sẽ không phân biệt chữ hoa, chữ thường. Hãy kiểm tra xem tên file có đúng là file code Python hay không.&nbsp;</p>

<p><strong>Input</strong><br>
Chỉ có một dòng ghi tên file&nbsp;S (1 ≤ |S| ≤ 128). Tên file chỉ chứa các ký tự&nbsp;‘a’-‘z’, ‘A’-‘Z’, ‘.’ và dấu&nbsp;‘_’.</p>

<p><strong>Output</strong><br>
In ra "yes" hoặc "no" tùy thuộc kết quả kiểm tra.</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Sample Input 1</strong></div>
</td>
<td>
<div><strong>Sample Output 1</strong></div>
</td>
</tr>
<tr>
<td>
<div>abc.py </div>
</td>
<td>
<div>yes</div>
</td>
</tr>
</tbody>
</table>

<table>
<tbody>
<tr>
<td>
<div><strong>Sample Input 2</strong></div>
</td>
<td>
<div><strong>Sample Output 2</strong></div>
</td>
</tr>
<tr>
<td>
<div>abc.bin </div>
</td>
<td>
<div>no</div>
</td>
</tr>
</tbody>
</table>



---

## PY01072 - BÀI TOÁN TỔ HỢP

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có N phần tử. Hãy liệt kê tất cả các tổ hợp chập K của tập các phần tử khác nhau trong A[]. Các tổ hợp cần liệt kê theo thứ tự từ điển (tức là trong mỗi tổ hợp thì giá trị từ nhỏ đến lớn, và tổ hợp sau lớn hơn tổ hợp trước). </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và K. </p>

<p>Dòng thứ 2 ghi N số của mảng A[]. Các giá trị không quá 1000. </p>

<p>Dữ liệu đảm bảo số phần tử khác nhau của A[] không quá 20 và K không quá 10. </p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các tổ hợp tìm được, mỗi tổ hợp trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>8 3</div>

<div>2 4 4 3 5 1 3 4</div>
</td>
<td>
<div>1 2 3</div>

<div>1 2 4</div>

<div>1 2 5</div>

<div>1 3 4</div>

<div>1 3 5</div>

<div>1 4 5</div>

<div>2 3 4</div>

<div>2 3 5</div>

<div>2 4 5</div>

<div>3 4 5</div>
</td>
</tr>
</tbody>
</table>



---

## PY01073 - HOÁN VỊ KÝ TỰ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho xâu ký tự S có không quá 9 ký tự chữ cái in hoa, không có khoảng trống. Các ký tự khác nhau từng đôi một và đã được sắp xếp từ trái sang phải theo thứ tự từ điển. Hãy liệt kê tất cả các hoán vị của xâu ký tự S theo đúng thứ tự từ điển, mỗi hoán vị trên một dòng. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi xâu S, độ dài không quá 9</p>

<p><strong>Output</strong></p>

<p>Ghi lần lượt các hoán vị theo thứ tự từ điển, mỗi xâu trên một dòng.</p>

<p>Chú ý: hoán vị đầu tiên chính là xâu S. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>XYZ</div>
</td>
<td>
<div>XYZ</div>

<div>XZY</div>

<div>YXZ</div>

<div>YZX</div>

<div>ZXY</div>

<div>ZYX</div>
</td>
</tr>
</tbody>
</table>



---

## PY01074 - TỔNG ƯỚC SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho N số nguyên. Nhiệm vụ của bạn là phân tích các số nguyên đã cho dưới dạng tích của các thừa số nguyên tố, sau đó tính tổng các ước số nguyên tố này.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên số nguyên N (1 ≤≤ N ≤ 10<sup>6</sup>).</p>

<p>N dòng tiếp theo, mỗi dòng gồm một số nguyên có giá trị không vượt quá 2*10<sup>6</sup>.</p>

<p><strong>Output</strong></p>

<p>In ra một số nguyên là đáp án tìm được.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>5&nbsp; </div>

<div>7</div>

<div>9&nbsp; </div>

<div>10&nbsp; </div>

<div>13&nbsp; </div>

<div>100</div>
</td>
<td>
<div>47</div>
</td>
</tr>
</tbody>
</table>

<p><em>Giải thích test: </em></p>

<p><em>7 = 7</em></p>

<p><em>9 = 3 x 3 </em><em>à</em><em> 3 + 3 = 6 </em></p>

<p><em>10 = 2 x 5 </em><em>à</em><em> 2 + 5 = 7</em></p>

<p><em>13 = 13</em></p>

<p><em>100 = 2 x 2 x 5 x 5 </em><em>à</em><em> 2+2+5+5 = 14</em></p>

<p><em>Cộng lại, 7 + 6 + 7 + 13 + 14 = 47.</em></p>

---

## PY01075 - TRÒ CHƠI TRÊN ĐƯỜNG THẲNG

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Nam đang chơi một trò chơi. Trong trò này có một đường thẳng dài vô hạn với các điểm có tọa độ nguyên (âm, dương, 0). Lúc đầu Nam đang ở điểm có tọa độ 0.</p>

<p>Ngoài ra, trong trò chơi còn có <em>n</em> thẻ, thẻ thứ <em>i</em> có hai thuộc tính là <em>a<sub>i</sub></em> và <em>c<sub>i</sub></em><sub>. </sub>Nếu muốn sử dụng thẻ thứ <em>i</em> thì Nam phải trả <em>c<sub>i</sub></em><sub> </sub>VNĐ. Khi đó Nam sẽ có các bước nhảy độ dài <em>a<sub>i</sub></em>. Tức là từ điểm <em>x</em>, anh ấy có thể nhảy đến điểm <em>(x – a<sub>i</sub>)</em> hoặc <em>(x + a<sub>i</sub>).</em></p>

<p>Nam muốn nhảy đến bất kì điểm nào trên đường thẳng (có thể qua một số điểm trung gian) và cô ấy muốn trả một số tiền ít nhất để mua các thẻ.</p>

<p>Hãy tính toán số&nbsp; tiền tối thiểu mà Nam phải bỏ ra. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu chứa một số nguyên <em>T</em> - số trò chơi mà Nam chơi.</p>

<p>Mỗi trò chơi được mô tả trên 3 dòng:</p>

<ul>
<li>Dòng đầu tiên chứa một số nguyên <em>n</em> – số lượng thẻ trong trò chơi (không quá 200).</li>
<li>Dòng thứ hai gồm <em>n</em> số nguyên <em>a<sub>i</sub></em> (<em>1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup></em>) - độ dài bước nhảy của thẻ.</li>
<li>Dòng thứ ba gồm <em>n</em> số nguyên <em>c<sub>i</sub></em> (<em>1 ≤ c<sub>i</sub> ≤ 10<sup>5</sup></em>) – chi phí của thẻ.</li>
</ul>

<p><strong>Output</strong></p>

<p>Với mỗi trò chơi in kết quả trên một dòng. Nếu Nam không thể mua một số thẻ để đi đến bất kì ô nào in ra <em>-1</em>. Nếu không, in ra chi phí tối thiểu Nam phải bỏ ra để mua thẻ.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Test 1</strong></div>
</td>
<td>
<div><strong>Test 2</strong></div>
</td>
</tr>
<tr>
<td>
<div><strong>Input:</strong></div>

<div>1</div>

<div>3</div>

<div>2 6 4</div>

<div>1 1 1</div>

<div>&nbsp;</div>

<div>&nbsp;</div>

<div><strong>Output:</strong></div>

<div>-1</div>
</td>
<td>
<div><strong>Input:</strong></div>

<div>1</div>

<div>3</div>

<div>3 4 5</div>

<div>1 2 3</div>

<div>&nbsp;</div>

<div>&nbsp;</div>

<div><strong>Output:</strong></div>

<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY01076 - SỐ NGUYÊN LỚN

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho hai số a và b trong đó a≤10<sup>12</sup>, b≤10<sup>250</sup>. Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số a, b. </p>

<p><strong>Input: </strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>T dòng tiếp đưa các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào số a; dòng tiếp theo đưa vào số b.</li>
<li>Các số T, a, b thỏa mãn ràng buộc: 1≤T≤100; 1≤a≤10<sup>12</sup>; 1≤b≤10<sup>250</sup>;</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p>&nbsp;&nbsp;&nbsp;&nbsp; <strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>1221</div>

<div>1234567891011121314151617181920212223242526272829</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY02002 - LIỆT KÊ SỐ FIBONACCI

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Dãy số Fibonacci được định nghĩa theo công thức như sau:</p>

<ul>
<li>F<sub>1</sub> = 1</li>
<li>F<sub>2</sub> = 1</li>
<li>F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub> với n&gt;2</li>
</ul>

<p>Cho hai số nguyên dương a và b (1 &lt; a &lt; b &lt; 93). Viết chương trình liệt kê các số Fibonacci từ a đến b. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 10. </p>

<p>Mỗi bộ test viết trên một dòng hai số a và b.</p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả của mỗi test trên một dòng, mỗi số cách nhau một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>1 10</div>
</td>
<td>
<div>1 1 2 3 5 8 13 21 34 55</div>
</td>
</tr>
</tbody>
</table>



---

## PY02003 - DÃY SỐ HAMMING

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Dãy số nguyên dương tăng dần trong đó ước số nguyên tố lớn nhất của các số trong dãy đều không vượt quá 5 được gọi là dãy số Hamming. Ví dụ 10 = 2x5 thuộc dãy Hamming còn 26 = 2x13 không thuộc dãy Hamming. </p>

<p>Số 1 được coi là số đầu tiên của dãy Hamming. </p>

<p>Cho số nguyên dương N.&nbsp; Hãy xác định xem N có thuộc dãy Hamming hay không và nếu có thì thứ tự của N trong dãy Hamming là bao nhiêu. </p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên ghi số bộ test (không quá 10<sup>5</sup>). </p>

<p>Mỗi test ghi một số N (1 ≤ N ≤ 10<sup>18</sup>). </p>

<p><strong>Output:</strong></p>

<p>Nếu giá trị N thuộc dãy Hamming thì ghi ra thứ tự của N (tính từ 1). </p>

<p>Nếu không thì ghi ra “Not in sequence”</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>11</div>

<div>1</div>

<div>2</div>

<div>6</div>

<div>7</div>

<div>8</div>

<div>9</div>

<div>10</div>

<div>11</div>

<div>12</div>

<div>13</div>

<div>14</div>
</td>
<td>
<div>1</div>

<div>2</div>

<div>6</div>

<div>Not in sequence</div>

<div>7</div>

<div>8</div>

<div>9</div>

<div>Not in sequence</div>

<div>10</div>

<div>Not in sequence</div>

<div>Not in sequence</div>
</td>
</tr>
</tbody>
</table>



---

## PY02004 - DÃY SỐ NHỊ PHÂN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] chỉ có các giá trị nhị phân 0 và 1. </p>

<p>Hãy đếm xem có bao nhiêu cặp số khác nhau đứng cạnh nhau trong dãy. </p>

<p><strong>Input</strong></p>

<p>Dòng 1 ghi số N là số phần tử của dãy (không quá 100). </p>

<p>Dòng 2 ghi N số nhị phân. </p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả bài toán. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6</div>

<div>1 0 0 1 1 1</div>
</td>
<td>
<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## PY02005 - CẶP NGHỊCH THẾ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] gồm có N phần tử. </p>

<p>Một cặp nghịch thế là một cặp số (u, v) sao cho u &lt; v và A[u] &gt; A[v]. Nhiệm vụ của bạn là hãy đếm số lượng cặp nghịch thế trong dãy số A[] ban đầu.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là N (N ≤ 1000), số lượng phần tử trong dãy số ban đầu.</p>

<p>Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 10<sup>9</sup>).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra một số nguyên là số lượng dãy nghịch thế tìm được.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>2 4 1 3 5</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>

<p><strong>Giải thích test:</strong></p>

<p>Có 3 cặp nghịch thế là (2, 1), (4,1) và (4, 3).</p>

---

## PY02006 - DÃY SỐ PHÙ HỢP

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho hai dãy số A[] và B[] có cùng N phần tử. Dãy số A[] được gọi là phù hợp với dãy số B[] khi và chỉ khi tồn tại một phép sắp đặt lại các phần tử trong A[] và B[] sao cho phần tử thứ i của A[] nhỏ hơn hoặc bằng phần tử thứ i của mảng B[] (với tất cả vị trí trong dãy). </p>

<p>Hãy xác định hai dãy số A[] và B[] có phù hợp với nhau hay không?</p>

<p><strong>Input</strong>: </p>

<p>Dòng đầu tiên đưa vào số lượng bộ test T (T≤100).</p>

<p>Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 phần: phần thứ nhất là số N; phần thứ hai là N số của A[]; phần thứ 3 là N số của B[].</p>

<p>(1≤N≤100, 0≤A[i], B[i]≤1000)</p>

<p><strong>Output:</strong></p>

<p>Đưa ra kết quả mỗi test theo từng dòng. Kết quả “YES” nếu A[] phù hợp với B[], ngược lại đưa ra “NO”.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4</div>

<div>7 5 3 2</div>

<div>5 4 8 7</div>

<div>8</div>

<div>7 5 3 2 5 105 45 10</div>

<div>2 4 0 5 6 9 75 84&nbsp; </div>
</td>
<td>
<div>YES</div>

<div>NO</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PY02007 - CHIA DƯ CHO 42

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A có 10 phần tử là các số nguyên dương. Hãy đếm xem sẽ có bao nhiêu số khác nhau trong dãy nếu tất cả các phần tử đều được chia dư cho 42. </p>

<p><strong>Input</strong></p>

<p>Gồm 10 số nguyên dương, viết trên một hoặc nhiều dòng. </p>

<p><strong>Output</strong></p>

<p>Ghi ra các số khác nhau tìm được sau khi đã chia dư cho 42. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1 2 3 4 5 6&nbsp; 7 8&nbsp; 9 10</div>
</td>
<td>
<div>10</div>
</td>
</tr>
<tr>
<td>
<div>42 84 252 420 840</div>

<div>126 42 84 420 126</div>
</td>
<td>
<div>1</div>
</td>
</tr>
<tr>
<td>
<div>39 40 41 42 43 44 82</div>

<div>83 84 85</div>
</td>
<td>
<div>6</div>
</td>
</tr>
</tbody>
</table>



---

## PY02008 - KHOẢNG CÁCH NGUYÊN TỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho hai số nguyên N và X. </p>

<p>Bắt đầu từ số X, hãy liệt kê N +1 số liên tiếp sao cho khoảng cách giữa số trước và số sau lần lượt là các số trong dãy N số nguyên tố đầu tiên. </p>

<p>Ví dụ N=5 và X=4. Vì 5 số nguyên tố đầu tiên là 2 3 5 7 11 nên ta có 6 số trong dãy cần liệt kê là: 4 6 9 14 21 32</p>

<p><strong>Input</strong></p>

<p>Chỉ có 1 dòng ghi 2 số N và X. (2 ≤ N ≤ 1000; 1 ≤ X ≤ 100)</p>

<p><strong>Output</strong></p>

<p>Ghi ra trên một dòng lần lượt N+1 số của dãy kết quả. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5 4</div>
</td>
<td>
<div>4 6 9 14 21 32</div>
</td>
</tr>
</tbody>
</table>



---

## PY02009 - TRÚNG THƯỞNG

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Chung kết Euro 2020, quá nhiều người dự đoán đúng Italia thắng Anh bằng đá luân lưu 11m. Ban tổ chức chương trình <em>Dự đoán tỉ số trúng Mercedes</em> thấy rất khó trao giải nên quyết định tìm người được trao thưởng bằng cách chạy đoạn code lựa chọn ngẫu nhiên. </p>

<p>Các người chơi dự đoán đúng được đánh số thứ tự bắt đầu từ 1, giả sử cũng có không quá 1000 người. Chương trình sẽ thực hiện lấy ngẫu nhiên N lần, mỗi lần 1 giá trị từ 1 đến 1000, N cũng không quá 1000. </p>

<p>Sau khi kết thúc N lần ngẫu nhiên, con số nào được chọn nhiều lần nhất sẽ cho biết người trúng thưởng. Trong trường hợp có nhiều số có số lần xuất hiện bằng nhau và lớn nhất thì số có giá trị nhỏ nhất sẽ được chọn. </p>

<p>Hãy giúp BTC tìm ra người được trao thưởng. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 100. </p>

<p>Mỗi bộ test gồm N+1 dòng. Dòng đầu ghi số N. Tiếp theo là N dòng ghi các giá trị ngẫu nhiên nhận được. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra số thứ tự của người được trao thưởng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>3</div>

<div>999</div>

<div>999</div>

<div>19</div>

<div>4</div>

<div>13</div>

<div>333</div>

<div>333</div>

<div>13</div>

<div>3</div>

<div>11</div>

<div>12</div>

<div>13</div>
</td>
<td>
<div>999</div>

<div>13</div>

<div>11</div>
</td>
</tr>
</tbody>
</table>



---

## PY02010 - LỚN NHẤT VÀ NHỎ NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số có N số nguyên dương. Các số trong dãy có thể tới 100 chữ số. </p>

<p>Hãy tìm số nhỏ nhất và số lớn nhất trong dãy. Nếu cả dãy bằng nhau thì in ra BANG NHAU. </p>

<p><strong>Input</strong></p>

<p>Có nhiều bộ test. Mỗi bộ test bắt đầu với số N (không quá 20). Tiếp theo là N dòng, mỗi dòng ghi một số trong dãy, giá trị đều nguyên dương nhưng có thể có chữ số 0 ở đâu, và có thể tới 100 chữ số. </p>

<p>Input kết thúc khi N = 0. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra trên một dòng số nhỏ nhất và lớn nhất. Nếu tất cả dãy bằng nhau thì ghi ra BANG NHAU.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>1</div>

<div>2</div>

<div>3</div>

<div>4</div>

<div>5</div>

<div>3</div>

<div>001</div>

<div>22</div>

<div>33333333333333333333333333333333333</div>

<div>3</div>

<div>1</div>

<div>1</div>

<div>1</div>

<div>0</div>
</td>
<td>
<div>1 5</div>

<div>1 33333333333333333333333333333333333</div>

<div>BANG NHAU</div>
</td>
</tr>
</tbody>
</table>



---

## PY02011 - BIẾN ĐỔI VỀ DÃY BẰNG NHAU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[] có N phần tử là các số nguyên dương. </p>

<p>Mỗi bước bạn được phép thay đổi 1 giá trị trong dãy bằng cách tăng lên 1 hoặc giảm đi 1. </p>

<p>Hãy tính xem cần ít nhất bao nhiêu bước để biến đổi dãy về giá trị bằng nhau, với điều kiện giá trị của dãy bằng nhau đó phải là một trong các giá trị ban đầu của dãy. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N là số phần tử của dãy (không quá 200). </p>

<p>Dòng thứ 2 ghi N phần tử của dãy, các phần tử đều nguyên dương và không quá 10000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra tổng số bước ít nhất tìm được và giá trị bằng nhau được chọn. </p>

<p>Trong trường hợp có nhiều giá trị có thể chọn thì chọn số đầu tiên theo thứ tự xuất hiện trong dãy ban đầu. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>8</div>

<div>13 5 8 7 9 15 26 34</div>
</td>
<td>
<div>59 13</div>
</td>
</tr>
</tbody>
</table>

---

## PY02012 - SẮP XẾP CHẴN LẺ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[] có n phần tử. Hãy sắp xếp các số chẵn trong dãy theo thứ tự tăng dần và các số lẻ theo thứ tự giảm dần. </p>

<p>In ra dãy kết quả đã sắp xếp trong đó vị trí số chẵn và vị trí số lẻ không thay đổi so với dãy ban đầu. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số n (1 &lt; n ≤ 1000)</p>

<p>Các dòng tiếp theo ghi đủ n số của dãy A[], các số đều nguyên dương và không quá 1000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra dãy kết quả đã sắp xếp trong đó các vị trí của số chẵn và số lẻ không thay đổi. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Ouput</strong></div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>1 2 3 4 5 6 7 7 9 6</div>
</td>
<td>
<div>9 2 7 4 7 6 5 3 1 6 </div>
</td>
</tr>
</tbody>
</table>



---

## PY02013 - BIẾN ĐỔI VỀ 1

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N. Mỗi bước thực hiện các phép biến đổi N theo quy tắc sau </p>

<ul>
<li>Nếu N chẵn thì N = N/2</li>
<li>Nếu N lẻ thì N = N*3 + 1</li>
</ul>

<p>Hãy đếm xem có bao nhiêu giá trị xuất hiện cho đến khi N = 1. Tất nhiên nếu ban đầu N = 1 thì chỉ có một giá trị duy nhất. </p>

<p>Ví dụ: N = 3 thì sẽ có 8 giá trị xuất hiện lần lượt là: 3, 10, 5, 16, 8, 4, 2, 1</p>

<p><strong>Input</strong></p>

<p>Có nhiều test, mỗi test ghi trên một dòng số nguyên dương N&nbsp; không quá 100. </p>

<p>Input kết thúc khi N = 0. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra kết quả tính được trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>2</div>

<div>3</div>

<div>0</div>
</td>
<td>
<div>1</div>

<div>2</div>

<div>8</div>
</td>
</tr>
</tbody>
</table>



---

## PY02014 - BIẾN ĐỔI NGUYÊN TỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[] có N số nguyên dương. Người ta muốn biến đổi tất cả các số trong dãy về số nguyên tố. Tại mỗi bước, mỗi số chưa nguyên tố được phép tăng hoặc giảm 1 đơn vị để biến đổi dần về số nguyên tố gần nhất. </p>

<p>Hãy tính xem cần ít nhất bao nhiêu bước cần thực hiện để biến đổi tất cả các phần tử của dãy về nguyên tố. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N là số phần tử của dãy (không quá 200).</p>

<p>Dòng thứ 2 ghi N số của dãy, các giá trị đều nguyên dương và không quá 10000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra số bước ít nhất tính được. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>8</div>

<div>13 5 8 7 9 15 26 34</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY02015 - BIẾN ĐỔI DÃY SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho một dãy số A[] có 4 số nguyên dương, đánh số vị trí từ 1 đến 4. Tại mỗi bước, giá trị A[i] được thay thế bằng abs(A[i] – A[i+1]), riêng A[4] = abs(A[4]-A[1]). </p>

<p><em>Hàm abs (trị tuyệt đối) được sử dụng để đảm bảo các giá trị của dãy số luôn dương.</em></p>

<p>Hãy đếm xem sau bao nhiêu bước thì dãy số A[] có cả 4 vị trí đều bằng nhau. </p>

<p><strong>Input</strong></p>

<p>Có 4 số của dãy A[], các giá trị không quá 9 chữ số. Input kết thúc với 4 số 0. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra số bước cần thực hiện.</p>

<p><strong>Ví dụ </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1 3 5 9</div>

<div>4 3 2 1</div>

<div>0 0 0 0</div>
</td>
<td>
<div>6</div>

<div>4</div>
</td>
</tr>
</tbody>
</table>



---

## PY02016 - XUẤT HIỆN NHIỀU LẦN NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là hãy tìm một số có tần số xuất hiện nhiều nhất, yêu cầu lớn hơn N/2 lần xuất hiện trong dãy số.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10).</p>

<p>Mỗi test gồm số nguyên N (1≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu.</p>

<p>Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 1 000 000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra đáp án của bài toán trên một dòng. Nếu có nhiều số cùng có tần số xuất hiện nhiều nhất như nhau và đều thỏa mãn số lần lớn hơn N/2 thì in ra số nhỏ nhất. </p>

<p>Nếu không tìm được đáp án, in ra “NO”.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>9</div>

<div>3 3 4 2 4 4 2 4 4</div>

<div>8</div>

<div>3 3 4 2 4 4 2 4</div>
</td>
<td>
<div>4</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY02017 - TÂN SUẤT LẺ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[] gồm có N phần tử. Các phần tử trong dãy số đều xuất hiện với tần suất chẵn, chỉ có duy nhất 1 số có số lần xuất hiện là số lẻ. Nhiệm vụ của bạn là hãy tìm số này.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10).</p>

<p>Mỗi test gồm số nguyên N (1≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu. N là một số lẻ.</p>

<p>Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 1 000 000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra trên mỗi dòng một số nguyên là đáp án của bài toán. </p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>7</div>

<div>1 2 3 2 3 1 3</div>

<div>5</div>

<div>1 1 3 3 2</div>
</td>
<td>
<div>3</div>

<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## PY02018 - SỐ NHỎ NHẤT CÒN THIẾU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có N phần tử là các số nguyên dương khác nhau. Hãy tìm số nhỏ nhất còn thiếu trong dãy số đó. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (1 &lt;= N &lt;= 30000).</p>

<p>Dòng tiếp theo ghi N số của dãy A (1 &lt;= A[i] &lt;= 30000). </p>

<p><strong>Output</strong></p>

<p>Ghi ra số nhỏ nhất còn thiếu nếu có. </p>

<p>(khi dãy số đầy đủ các số từ 1 đến N thì số nhỏ nhất còn thiếu sẽ là N+1). </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>1 2 4</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY02019 - NGUYÊN TỐ CÙNG NHAU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có n phần tử là các số nguyên dương khác nhau, giá trị không quá 100. Hãy liệt kê các cặp số nguyên tố cùng nhau xuất hiện trong dãy theo thứ tự tăng dần, mỗi cặp số in trên một dòng. </p>

<p>Một cặp số được gọi là nguyên tố cùng nhau nếu ước chung lớn nhất của chúng bằng 1.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số n (không quá 100). </p>

<p>Dòng thứ 2 ghi n số của dãy A[]</p>

<p><strong>Output</strong></p>

<p>Ghi lần lượt các cặp số nguyên tố cùng nhau theo thứ tự tăng dần. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>3 7 9 6 13</div>
</td>
<td>
<div>3 7<br>
3 13<br>
6 7<br>
6 13<br>
7 9<br>
7 13<br>
9 13</div>
</td>
</tr>
</tbody>
</table>



---

## PY02020 - TÍNH ĐIỂM TRUNG BÌNH

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Sau khi xem Olympic Tokyo 2020, Nam nhận thấy ở một số nội dung thi có chấm điểm thì điểm được tính cho vận động viên sẽ bỏ qua các giá trị điểm thấp nhất và cao nhất sau đó mới tính trung bình. </p>

<p>Nam mở rộng bài toán như sau: Có N giám khảo, mỗi giám khảo cho một giá trị điểm là một số thực trong đoạn từ 0 đến 10. Hãy loại bỏ các giá trị điểm bằng với điểm thấp nhất hoặc cao nhất, sau đó in ra điểm trung bình của các giá trị còn lại. </p>

<p>Dữ liệu vào của bài toán đảm bảo luôn có ít nhất 3 giá trị khác nhau trong các giá trị điểm ban đầu. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N là số giám khảo (không quá 100). </p>

<p>Dòng thứ 2 ghi N giá trị điểm, là các số thực trong đoạn [0,10] - đảm bảo luôn có ít nhất 3 giá trị khác nhau. </p>

<p><strong>Output</strong></p>

<p>Ghi ra giá trị điểm trung bình sau khi đã loại bỏ các giá trị nhỏ nhất và lớn nhất. Kết quả được ghi với đúng 2 số phần thập phân. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6</div>

<div>6.75 8 9.2 7.25 7.75 6.75</div>
</td>
<td>
<div>7.67</div>
</td>
</tr>
</tbody>
</table>



---

## PY02021 - DÃY CON CHUNG CỦA BA DÃY SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[], B[] và C[] là dãy không giảm và có lần lượt N, M, K phần tử. Nhiệm vụ của bạn là hãy tìm các phần tử chung của 3 dãy số này.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 20).</p>

<p>Mỗi test gồm số nguyên N, M và K (1≤ N, M, K ≤ 100 000).</p>

<p>Dòng tiếp theo gồm N số nguyên A[i], rồi M số nguyên B[i] và K số nguyên C[i].</p>

<p>(0 ≤ A[i], B[i], C[i] ≤ 10<sup>9</sup>).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test, in ra trên một dòng là đáp án thu được. Nếu không tìm được đáp án, in ra “NO”.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>6 5 8</div>

<div>1 5 10 20 40 80</div>

<div>5 7 20 80 100</div>

<div>3 4 15 20 30 70 80 120</div>

<div>3 5 4</div>

<div>1 5 5</div>

<div>3 4 5 5 10</div>

<div>5 5 10 20</div>

<div>3 3 3</div>

<div>1 2 3</div>

<div>4 5 6</div>

<div>7 8 9</div>
</td>
<td>
<div>20 80</div>

<div>5 5</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY02022 - LIỆT KÊ SỐ NGUYÊN TỐ TRONG DÃY

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số nguyên dương A[] có N phần tử. Hãy viết chương trình liệt kê các số nguyên tố khác nhau và số lần xuất hiện của số đó trong dãy ban đầu. </p>

<p>Các số được liệt kê theo thứ tự xuất hiện. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (không quá 500). </p>

<p>Dòng sau ghi N số của dãy (không quá 6 chữ số). </p>

<p><strong>Output</strong></p>

<p>Ghi ra các số nguyên tố khác nhau trong dãy theo thứ tự xuất hiện và số lần xuất hiện. Mỗi số liệt kê trên 1 dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>2 4 7 5 7 8 9 3 7 2 </div>
</td>
<td>
<div>2 2</div>

<div>7 3</div>

<div>5 1</div>

<div>3 1</div>
</td>
</tr>
</tbody>
</table>



---

## PY02023 - SẮP XẾP THEO TỔNG CHỮ SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có N phần tử đều là các số nguyên dương, không quá 6 chữ số. </p>

<p>Hãy sắp xếp dãy số theo tổng chữ số tăng dần. Nếu tổng chữ số bằng nhau thì số nào nhỏ hơn sẽ viết trước. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 10)</p>

<p>Mỗi bộ test gồm 2 dòng: </p>

<ul>
<li>Dòng đầu là số N (N &lt; 100)</li>
<li>Dòng thứ 2 ghi N số của mảng A[], các số đều nguyên dương và không quá 9 chữ số.</li>
</ul>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi trên một dòng dãy số kết quả.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>8</div>

<div>143 43 22 99 7 9 1111 10000000</div>
</td>
<td>
<div>10000000 22 1111 7 43 143 9 99</div>
</td>
</tr>
</tbody>
</table>



---

## PY02024 - SẮP XẾP THEO TÍCH CHỮ SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có N phần tử đều là các số nguyên dương, không quá 6 chữ số. </p>

<p>Hãy sắp xếp dãy số theo tích các chữ số tăng dần. Nếu tích các chữ số bằng nhau thì số nào nhỏ hơn sẽ viết trước. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 10)</p>

<p>Mỗi bộ test gồm 2 dòng: </p>

<ul>
<li>Dòng đầu là số N (N &lt; 100)</li>
<li>Dòng thứ 2 ghi N số của mảng A[], các số đều nguyên dương và không quá 9 chữ số.</li>
</ul>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi trên một dòng dãy số kết quả.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>8</div>

<div>143 43 22 99 7 9 1111 10000000</div>
</td>
<td>
<div>10000000 1111 22 7 9 43 143 99</div>
</td>
</tr>
</tbody>
</table>



---

## PY02025 - TẬP HỢP SỐ NGUYÊN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số a[] có n phần tử và dãy số b[] có m phần tử là các số nguyên dương nhỏ hơn 1000. Gọi tập hợp A là tập các số khác nhau trong a[], tập hợp B là tập các số khác nhau trong b[]. </p>

<p>Hãy tìm tập giao của A và B, hiệu A – B và hiệu B – A. Mỗi tập kết quả viết trên một dòng theo thứ tự từ nhỏ đến lớn. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi 2 số n và m (1 &lt; n,m &lt;100). </p>

<p>Dòng thứ 2 ghi n số của a[]. </p>

<p>Dòng thứ 3 ghi m số của b[]. </p>

<p>Các số đều dương và nhỏ hơn 1000. &nbsp;</p>

<p><strong>Output</strong></p>

<p>Dòng đầu ghi tập giao của A và B</p>

<p>Dòng thứ 2 ghi tập A – B</p>

<p>Dòng thứ 3 ghi tập B - A</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5 6</div>

<div>1 2 3 4 5</div>

<div>3 4 5 6 7 8</div>
</td>
<td>
<div>3 4 5</div>

<div>1 2 </div>

<div>6 7 8</div>
</td>
</tr>
</tbody>
</table>



---

## PY02026 - TẬP HỢP SỐ BẰNG NHAU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số a[] có n phần tử và dãy số b[] có m phần tử là các số nguyên dương nhỏ hơn 1000. Gọi tập hợp A là tập các số khác nhau trong a[], tập hợp B là tập các số khác nhau trong b[].</p>

<p>Tập A và tập B được coi là bằng nhau nếu số phần tử bằng nhau và tất cả các giá trị số từ nhỏ đến lớn đều bằng nhau từng đôi một. Khi A = B ta cũng có thể kết luận là hai dãy a[] và b[] chứa các số giống nhau. </p>

<p>Hãy kiểm tra xem A có bằng B hay không?</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi 2 số n và m (1 &lt; n,m &lt;100).</p>

<p>Dòng thứ 2 ghi n số của a[].</p>

<p>Dòng thứ 3 ghi m số của b[].</p>

<p>Các số đều dương và nhỏ hơn 1000.</p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả kiểm tra</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>12 18</div>

<div>1 2 3 4 5 1 2 3 5 4 1 2</div>

<div>1 1 1 1 1 1 1 1 1 2 3 4 5 5 5 5 5 5</div>
</td>
<td>
<div>YES</div>
</td>
</tr>
</tbody>
</table>



---

## PY02027 - TÁCH SỐ VÀ SẮP XẾP

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho N xâu ký tự bao gồm cả chữ số và chữ cái. Các chữ số liên tiếp sẽ tạo ra một số nguyên. Hãy sắp xếp các số tách được theo thứ tự tăng dần. </p>

<p>Chú ý: các chữ số 0 ở đầu nếu có sẽ không được tính. Ví dụ: các chữ số tách ra được là 00234 thì được tính như số 234, nếu là 00000000 thì được tính như số 0. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (không quá 100). </p>

<p>N dòng tiếp theo, mỗi dòng ghi một xâu ký tự, độ dài không quá 100.</p>

<p>Dữ liệu đảm bảo sẽ tách ra được không quá 500 số. &nbsp;</p>

<p><strong>Output</strong></p>

<p>Ghi ra các số theo thứ tự sắp xếp tăng dần, mỗi số trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>A129h</div>

<div>G07bxjq3</div>

<div>aaaaaaa4aaaa</div>
</td>
<td>
<div>3</div>

<div>4</div>

<div>7</div>

<div>129</div>
</td>
</tr>
</tbody>
</table>



---

## PY02028 - SẮP XẾP NGUYÊN TỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số nguyên dương A[] có N phần tử. Các giá trị trong dãy không quá 1000. </p>

<p>Hãy sắp xếp các số nguyên tố trong dãy theo thứ tự tăng dần. Các giá trị không nguyên tố vẫn giữ nguyên vị trí như lúc đầu. </p>

<p>Xem ví dụ để hiểu rõ hơn yêu cầu bài toán. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (1 &lt; N &lt; 100), dòng thứ 2 ghi N số của dãy A[]. </p>

<p><strong>Output</strong></p>

<p>Ghi ra dãy số kết quả trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>8</div>

<div>4 6 3 8 7 2 5 9</div>
</td>
<td>
<div>4 6 2 8 3 5 7 9</div>
</td>
</tr>
</tbody>
</table>



---

## PY02029 - BẦU CỬ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Khu dân cư ABC tiến hành bầu tổ trưởng dân phố. Có M ứng viên và N cử tri. Người dân trong khu dân cư đã chán ngấy với việc các ứng viên vận động tranh cử, câu kéo phiếu bầu trong các nhiệm kỳ trước nên họ quyết định đặt ra quy định mới như sau:</p>

<ul>
<li>Các ứng viên được đánh số từ 1 tới M. Mỗi cử tri sẽ viết ra đúng 1 số thứ tự ứng viên mình muốn chọn và bỏ vào hòm phiếu. </li>
<li>Người trúng cử là người có số phiếu bầu <strong>nhiều thứ hai</strong> </li>
<li>Nếu không có người đứng thứ hai thì kết quả bầu cử sẽ bị hủy bỏ</li>
<li>Nếu có nhiều hơn 1 người cùng có số phiếu nhiều thứ hai thì người nào có số thứ tự nhỏ nhất sẽ được chọn. </li>
</ul>

<p>Viết chương trình xác định người trúng cử. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và M (1 &lt; M &lt; 10, 5 &lt; N &lt; 500). </p>

<p>Dòng thứ 2 ghi N giá trị trong các phiếu bầu. Các giá trị đảm bảo hợp lệ (tức là từ 1 đến M). </p>

<p><strong>Output</strong></p>

<p>Ghi ra số thứ tự của người trúng cử. </p>

<p>Hoặc nếu không có ai trúng cử thì ghi ra NONE</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10 4</div>

<div>2 3 1 2 3 4 1 2 3 2</div>
</td>
<td>
<div>3</div>
</td>
</tr>
<tr>
<td>
<div>8 4</div>

<div>1 2 3 4 4 3 2 1</div>
</td>
<td>
<div>NONE</div>
</td>
</tr>
</tbody>
</table>



---

## PY02030 - PHÂN CHIA NGUYÊN TỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[] có N phần tử là các số nguyên dương không quá 1000. Sau khi loại bỏ tất cả các giá trị bị lặp lại ở trong A[] ta tạo được dãy B[] có m phần tử là các giá trị khác nhau theo đúng thứ tự xuất hiện trong dãy A[]. </p>

<p>Hãy tìm vị trí i nhỏ nhất (tính từ 0) trong dãy B[] thỏa mãn:</p>

<ul>
<li>Tổng các phần tử từ B[0] đến B[i] là một số nguyên tố</li>
<li>Tổng các phần tử từ B[i+1] đến B[m-1] cũng là một số nguyên tố. </li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (1 &lt; N &lt; 500). </p>

<p>Dòng tiếp theo ghi N số của dãy A[]</p>

<p><strong>Output</strong></p>

<p>Ghi ra vị trí i đầu tiên tìm được. </p>

<p>Nếu không có vị trí thỏa mãn thì ghi ra dòng chữ NOT FOUND</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>3 6 7 3 4 7 3 6 4 4</div>
</td>
<td>
<div>0</div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>3 6 7 3 5 7 3 6 6 7</div>
</td>
<td>
<div>NOT FOUND</div>
</td>
</tr>
</tbody>
</table>

<p><em>Giải thích test 1:</em></p>

<p><em>Dãy B[] = {3, 6, 7, 4}</em></p>

<p><em>Vị trí 0 thỏa mãn vì 3 là số nguyên tố; 6+7+4 = 17 cũng là số nguyên tố. </em></p>

---

## PY02031 - KIỂM TRA NGUYÊN TỐ

- <small>Chủ đề con: CÂU LỆNH RẼ NHÁNH</small>
- <small>Độ khó: 1</small>

<p>Cho ma trận A[] cỡ N*M chỉ bao gồm các số nguyên dương không quá 1000. Hãy kiểm tra các số trong ma trận, nếu giá trị nào là số nguyên tố thì thay thế bằng số 1, không phải thì thay thế bằng số 0. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi 2 số N và M là kích thước ma trận (1 &lt; N,M &lt; 20)</p>

<p>N dòng tiếp theo mỗi dòng có M số mô tả ma trận</p>

<p><strong>Output</strong></p>

<p>Ghi ra ma trận kết quả</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3 3</div>

<div>1 2 3</div>

<div>4 5 6</div>

<div>7 8 9</div>
</td>
<td>
<div>0 1 1</div>

<div>0 1 0</div>

<div>1 0 0</div>
</td>
</tr>
</tbody>
</table>



---

## PY02032 - LIỆT KÊ CÁC SỐ CÓ HAI CHỮ SỐ TĂNG DẦN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho một dãy ký tự số không quá 1000 chữ số và không có chữ số 0. </p>

<p>Người ta lần lượt lấy ra mỗi lần 2 chữ số tính từ trái sang phải. Nếu bước cuối cùng không đủ hai chữ số thì bỏ qua chữ số đó. Kết quả sẽ được một dãy số nguyên dương A[] chỉ bao gồm các số có hai chữ số. </p>

<p>Hãy liệt kê <strong>các số khác nhau xuất hiện trong A[]</strong> theo <strong>thứ tự tăng dần</strong>. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi dãy ký tự số (độ dài không quá 1000). Dữ liệu vào đảm bảo không có chữ số 0. </p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các số khác nhau xuất hiện trong dãy A[] theo thứ tự tăng dần, mỗi số viết cách nhau một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>124356141111434356149</div>
</td>
<td>
<div>11 12 14 43 56</div>
</td>
</tr>
</tbody>
</table>



---

## PY02033 - LIỆT KÊ CÁC SỐ CÓ HAI CHỮ SỐ THEO THỨ TỰ XUẤT HIỆN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho một dãy ký tự số không quá 1000 chữ số và không có chữ số 0. </p>

<p>Người ta lần lượt lấy ra mỗi lần 2 chữ số tính từ trái sang phải. Nếu bước cuối cùng không đủ hai chữ số thì bỏ qua chữ số đó. Kết quả sẽ được một dãy số nguyên dương A[] chỉ bao gồm các số có hai chữ số. </p>

<p>Hãy liệt kê <strong>các số khác nhau xuất hiện trong A[]</strong> theo <strong>thứ tự xuất hiện</strong>. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi dãy ký tự số (độ dài không quá 1000). Dữ liệu vào đảm bảo không có chữ số 0. </p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các số khác nhau xuất hiện trong dãy A[] theo thứ tự xuất hiện, mỗi số viết cách nhau một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>124356141111434356149</div>
</td>
<td>
<div>12 43 56 14 11</div>
</td>
</tr>
</tbody>
</table>



---

## PY02034 - ĐẾM CÁC SỐ CÓ HAI CHỮ SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho một dãy ký tự số không quá 1000 chữ số và không có chữ số 0. </p>

<p>Người ta lần lượt lấy ra mỗi lần 2 chữ số tính từ trái sang phải. Nếu bước cuối cùng không đủ hai chữ số thì bỏ qua chữ số đó. Kết quả sẽ được một dãy số nguyên dương A[] chỉ bao gồm các số có hai chữ số. </p>

<p>Hãy liệt kê và đếm <strong>các số khác nhau xuất hiện trong A[]</strong> theo <strong>thứ tự xuất hiện</strong>. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi dãy ký tự số (độ dài không quá 1000). Dữ liệu vào đảm bảo không có chữ số 0. </p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các số khác nhau xuất hiện trong dãy A[] và số lần xuất hiện tương ứng, mỗi số viết trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>124356141111434356149</div>
</td>
<td>
<div>12 1</div>

<div>43 3</div>

<div>56 2</div>

<div>14 2</div>

<div>11 2</div>
</td>
</tr>
</tbody>
</table>



---

## PY02035 - NGƯỠNG TỐI THIỂU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho một dãy ký tự số không quá 1000 chữ số và không có chữ số 0. </p>

<p>Người ta lần lượt lấy ra mỗi lần 2 chữ số tính từ trái sang phải. Nếu bước cuối cùng không đủ hai chữ số thì bỏ qua chữ số đó. Kết quả sẽ được một dãy số nguyên dương A[] chỉ bao gồm các số có hai chữ số. </p>

<p>Nhập thêm số nguyên dương K gọi là giá trị ngưỡng tối thiểu. Hãy liệt kê các số xuất hiện từ K lần trở lên trong dãy A[] theo thứ tự từ nhỏ đến lớn.&nbsp; </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi dãy ký tự số (độ dài không quá 1000). Dữ liệu vào đảm bảo không có chữ số 0. </p>

<p>Dòng thứ 2 ghi số nguyên dương K (không quá 100).</p>

<p><strong>Output</strong></p>

<p>Ghi ra lần lượt các số khác nhau của dãy A[] thỏa mãn xuất hiện ít nhất K lần và số lần xuất hiện tương ứng, mỗi số viết trên một dòng theo thứ tự tăng dần.</p>

<p>Nếu không có số nào thỏa mãn ghi ra dòng chữ NOT FOUND </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>124356141111434356149</div>

<div>2</div>
</td>
<td>
<div>11 2</div>

<div>14 2</div>

<div>43 3</div>

<div>56 2</div>
</td>
</tr>
<tr>
<td>
<div>124356141111434356149</div>

<div>10</div>
</td>
<td>
<div>NOT FOUND</div>
</td>
</tr>
</tbody>
</table>



---

## PY02036 - LIỆT KÊ CẶP SỐ NGUYÊN TỐ CÙNG NHAU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có n phần tử là các số nguyên dương khác nhau, giá trị không quá 100. Hãy liệt kê các cặp số nguyên tố cùng nhau xuất hiện trong dãy theo thứ tự tăng dần, mỗi cặp số in trên một dòng. </p>

<p>Một cặp số được gọi là nguyên tố cùng nhau nếu ước chung lớn nhất của chúng bằng 1.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số n (không quá 100). </p>

<p>Dòng thứ 2 ghi n số của dãy A[]</p>

<p><strong>Output</strong></p>

<p>Ghi lần lượt các cặp số nguyên tố cùng nhau theo thứ tự tăng dần. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>3 7 9 6 13</div>
</td>
<td>
<div>3 7<br>
3 13<br>
6 7<br>
6 13<br>
7 9<br>
7 13<br>
9 13</div>
</td>
</tr>
</tbody>
</table>



---

## PY02038 - ĐẾM CẶP ĐỒNG XU

- <small>Chủ đề con: CÂU LỆNH RẼ NHÁNH</small>
- <small>Độ khó: 2</small>

<p>Cho một lưới hình vuông kích thước N*N. Trên một số ô của lưới người ta đặt các đồng xu (ký hiệu bằng chữ cái C (coin)). Hãy đếm xem có thể lấy ra bao nhiêu cặp đồng xu ở cùng một hàng hoặc cùng một cột. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên ghi số N (1 ≤ N ≤ 100)</p>

<p>N dòng tiếp theo mô tả trạng thái của lưới, chữ cái C ứng với vị trí có đồng x, dấu chấm tương ứng với ô trống)</p>

<p><strong>Output</strong></p>

<p>Ghi ra số cặp đồng xu đếm được. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div>&nbsp;<strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>CC..</div>

<div>C..C</div>

<div>.CC.</div>

<div>.CC.</div>
</td>
<td>
<div>9</div>
</td>
</tr>
</tbody>
</table>



---

## PY02039 - MA TRẬN - 1

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho ma trận vuông cấp N*N chỉ bao gồm các số nguyên dương. </p>

<p>Với đường chéo chính, ta sẽ chia ma trận thành 2 nửa, được gọi là nửa trên và nửa dưới của đường chéo chính (không tính các phần tử nằm trên đường chéo chính). </p>

<p>Độ chênh lệch của ma trận được tính bằng trị tuyệt đối khi lấy <strong>tổng giá trị các phần tử ở nửa trên</strong> trừ đi <strong>tổng giá trị các phần tử ở nửa dưới</strong>. </p>

<p>Nhập thêm một giá trị K gọi là <em>ngưỡng cân đối của ma trận</em>.&nbsp; Trong trường hợp độ chênh lệch không quá K thì ma trận được coi là cân đối, nếu lớn hơn K thì không cân đối. </p>

<p>Hãy xác định độ chênh lệch và tính cân đối của ma trận. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (2 &lt; N &lt; 50)</p>

<p>N dòng tiếp theo ghi các giá trị của ma trận, các số đều nguyên dương và không quá 1000. </p>

<p>Dòng cuối ghi số K (0 &lt; K &lt;100)</p>

<p><strong>Output</strong></p>

<p>Dòng đầu ghi chữ YES hoặc NO</p>

<p>Dòng thứ 2 ghi ra giá trị độ chênh lệch của ma trận </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>2 8 10 6 7</div>

<div>6 3 2 6 9</div>

<div>10 2 6 2 8</div>

<div>9 9 7 9 8</div>

<div>9 6 5 6 9</div>

<div>5</div>
</td>
<td>
<div>YES</div>

<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY02040 - MA TRẬN - 2

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho ma trận vuông cấp N*N chỉ bao gồm các số nguyên dương. </p>

<p>Với đường chéo phụ, ta sẽ chia ma trận thành 2 nửa, được gọi là nửa trên và nửa dưới của đường chéo phụ (không tính các phần tử nằm trên đường chéo phụ). </p>

<p>Độ chênh lệch của ma trận được tính bằng trị tuyệt đối khi lấy <strong>tổng giá trị các phần tử ở nửa trên</strong> trừ đi <strong>tổng giá trị các phần tử ở nửa dưới</strong>. </p>

<p>Nhập thêm một giá trị K gọi là <em>ngưỡng cân đối của ma trận</em>.&nbsp; Trong trường hợp độ chênh lệch không quá K thì ma trận được coi là cân đối, nếu lớn hơn K thì không cân đối. </p>

<p>Hãy xác định độ chênh lệch và tính cân đối của ma trận. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (2 &lt; N &lt; 50)</p>

<p>N dòng tiếp theo ghi các giá trị của ma trận, các số đều nguyên dương và không quá 1000. </p>

<p>Dòng cuối ghi số K (0 &lt; K &lt;100)</p>

<p><strong>Output</strong></p>

<p>Dòng đầu ghi chữ YES hoặc NO</p>

<p>Dòng thứ 2 ghi ra giá trị độ chênh lệch của ma trận </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>2 8 10 6 7</div>

<div>6 3 2 6 9</div>

<div>10 2 6 2 8</div>

<div>9 9 7 9 8</div>

<div>9 6 5 6 9</div>

<div>5</div>
</td>
<td>
<div>NO</div>

<div>11</div>
</td>
</tr>
</tbody>
</table>



---

## PY02041 - TỔNG SỐ NGUYÊN LỚN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho hai xâu ký tự A và B mô tả hai số nguyên dương lớn có thể có đến 1000 chữ số. </p>

<p>Có thể có các chữ số 0 ở đầu của A và B.<br>
Hãy tính tổng A + B. </p>

<p>Kết quả ghi ra cần loại bỏ các chữ số 0 ở đầu nếu có. </p>

<p><strong>Input</strong></p>

<p>Có hai dòng ghi 2 số A và B. </p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả A + B. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>121212121212121212</div>

<div>45678978</div>
</td>
<td>
<div>121212121257800190</div>
</td>
</tr>
</tbody>
</table>



---

## PY02042 - HIỆU SỐ NGUYÊN LỚN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho hai xâu ký tự A và B mô tả hai số nguyên dương lớn có thể có đến 1000 chữ số. </p>

<p>Có thể có các chữ số 0 ở đầu của A và B.<br>
Hãy tính A - B. </p>

<p>Kết quả có thể âm, khi ghi ra cần loại bỏ các chữ số 0 ở đầu nếu có. </p>

<p>Tất nhiên nếu kết quả là -0 thì ghi ra là 0. </p>

<p><strong>Input</strong></p>

<p>Có hai dòng ghi 2 số A và B. </p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả A - B. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>000123456789012345678901234567890</div>

<div>00000000000000001234567890</div>
</td>
<td>
<div>123456789012345678900000000000</div>
</td>
</tr>
</tbody>
</table>



---

## PY02043 - ĐẾM SỐ TRONG XÂU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho một ký tự S[] chỉ có các chữ số, độ dài không quá 1000, và số nguyên dương N (không quá 9 chữ số). Hãy đếm xem số N xuất hiện bao nhiêu lần trong S[]. </p>

<p>Chú ý: các ký tự số không được đếm lặp. Tức là mỗi ký tự chỉ được xét một lần.</p>

<p>Ví dụ: S[] = “<strong><u>121</u></strong>2<strong><u>121</u></strong>112211221<strong><u>121</u></strong>”, N = <strong>121</strong> thì đáp án là 3.&nbsp; </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 20. </p>

<p>Mỗi test gồm hai dòng, dòng đầu là xâu ký tự S[], dòng sau là số N. </p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra kết quả tính được trên một dòng. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>1212121112211221121</div>

<div>121</div>

<div>2222222222322292</div>

<div>2222</div>
</td>
<td>
<div>3</div>

<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## PY02045 - TÁCH ĐÔI VÀ TÍNH TỔNG

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho một số nguyên dương không quá 200 chữ số. Mỗi bước tách số nguyên thành hai nửa: <strong>nửa đầu</strong> là n/2 chữ số đầu tiên, <strong>nửa sau</strong> là phần còn lại (trong đó n là số chữ số của số ban đầu, nếu n lẻ thì phép chia 2 sẽ tính phần nguyên). Sau đó thực hiện tính tổng của hai nửa này. </p>

<p>Lặp lại các bước trên cho đến khi kết quả chỉ còn là số có 1 chữ số. </p>

<p>Hãy thực hiện tính toán và in kết quả của từng bước. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một số nguyên dương không quá 200 chữ số. </p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả từng bước, mỗi bước trên một dòng. Dừng lại khi kết quả chỉ còn 1 chữ số. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Ouput</strong></div>
</td>
</tr>
<tr>
<td>
<div>123456</div>
</td>
<td>
<div>579</div>

<div>84</div>

<div>12</div>

<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY02046 - PHÂN CHIA NGUYÊN TỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[] có N phần tử là các số nguyên dương không quá 1000. Sau khi loại bỏ tất cả các giá trị bị lặp lại ở trong A[] ta tạo được dãy B[] có m phần tử là các giá trị khác nhau theo đúng thứ tự xuất hiện trong dãy A[]. </p>

<p>Hãy tìm vị trí i nhỏ nhất (tính từ 0) trong dãy B[] thỏa mãn:</p>

<ul>
<li>Tổng các phần tử từ B[0] đến B[i] là một số nguyên tố</li>
<li>Tổng các phần tử từ B[i+1] đến B[m-1] cũng là một số nguyên tố. </li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (1 &lt; N &lt; 500). </p>

<p>Dòng tiếp theo ghi N số của dãy A[]</p>

<p><strong>Output</strong></p>

<p>Ghi ra vị trí i đầu tiên tìm được. </p>

<p>Nếu không có vị trí thỏa mãn thì ghi ra dòng chữ NOT FOUND</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>3 6 7 3 4 7 3 6 4 4</div>
</td>
<td>
<div>0</div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>3 6 7 3 5 7 3 6 6 7</div>
</td>
<td>
<div>NOT FOUND</div>
</td>
</tr>
</tbody>
</table>

<p><em>Giải thích test 1:</em></p>

<p><em>Dãy B[] = {3, 6, 7, 4}</em></p>

<p><em>Vị trí 0 thỏa mãn vì 3 là số nguyên tố; 6+7+4 = 17 cũng là số nguyên tố. </em></p>

---

## PY02048 - TÁCH NHÓM TỐI ƯU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[] có N phần tử là các số nguyên dương. Với mỗi số nguyên K, hãy tính xem có thể tách dãy số A thành ít nhất bao nhiêu nhóm sao cho mỗi số trong nhóm đều có thể tìm được ít nhất một số khác <strong>cùng nhóm</strong> có chênh lệch <strong>không vượt quá K. </strong></p>

<p>Ví dụ: A[] = {2, 6, 1, 7, 3, 4, 9}; K = 1 thì kết quả là 3 ứng với 3 nhóm {2,1,3,4}; {6,7};&nbsp; {9}</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và K (0 &lt;= K &lt;= 10<sup>5</sup>; 0 &lt;= N &lt;= 10<sup>6</sup>). </p>

<p>Dòng thứ 2 ghi ra N số của dãy A[], các số nguyên dương và không quá 10<sup>6</sup>.</p>

<p><strong>Output</strong></p>

<p>Ghi ra số nhóm ít nhất có thể. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>7 1</div>

<div>2 6 1 7 3 4 9</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY02049 - ƯỚC SỐ CỦA GIAI THỪA

- <small>Chủ đề con: CÂU LỆNH RẼ NHÁNH</small>
- <small>Độ khó: 3</small>

<p>Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p<sup>x</sup>. Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3<sup>2</sup>.&nbsp; </p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào số lượng bộ test T.</li>
<li>Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số N, p được viết cách nhau một vài khoảng trống.</li>
<li>T, N, p thỏa mãn ràng buộc : 1≤T≤100; 1≤N≤10<sup>5</sup>; 2≤p≤5000;</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>3<br>
62&nbsp; 7<br>
76&nbsp; 2<br>
3&nbsp; 5</div>
</td>
<td>
<div>9<br>
73<br>
0</div>
</td>
</tr>
</tbody>
</table>



---

## PY02050 - ĐOẠN LIÊN TIẾP NHỎ HƠN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có N phần tử. Với mỗi vị trí thứ i trong dãy, hãy tính độ dài của đoạn&nbsp;liên tiếp tính từ i trở về phía trước mà các giá trị đều nhỏ hơn hoặc bằng A[i].</p>

<p><strong>Input:&nbsp;</strong>Dòng đầu ghi số bộ test (không quá 10). Mỗi test có 2 dòng.</p>

<ul>
<li>Dòng đầu tiên gồm 1 số nguyên N (1 ≤ N ≤ 10<sup>5</sup>).</li>
<li>Dòng tiếp theo gồm N số nguyên A<sub>1</sub>, A<sub>2</sub>, …, A<sub>N</sub>&nbsp;(1 ≤&nbsp;A[i]&nbsp;≤ 10<sup>6</sup>).</li>
</ul>

<p><strong>Output</strong></p>

<ul>
<li>Với mỗi bộ test, in ra dãy kết quả trên một dòng.</li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>7</div>

<div>100 80 60 70 60 75 85</div>
</td>
<td>
<div>1 1 1 2 1 4 6</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PY02051 - KHÔI PHỤC DÃY SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Bình có sẵn dãy số A có N phần tử và tạo ra ma trận B kích thước N*N theo quy tắc:</p>

<ul>
<li>B[i][i] = 0</li>
<li>B[i][j] = A[i] + A[j] (với i#j)</li>
</ul>

<p>Bình đưa cho Nam ma trận B và đố Nam khôi phục dãy số A ban đầu. </p>

<p>Hãy giúp Nam nhé.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (1 &lt; N &lt;= 1000). </p>

<p>N dòng tiếp theo ghi ma trận B, các số đều nguyên dương và không quá 100.000.&nbsp; </p>

<p><strong>Output</strong></p>

<p>Ghi ra dãy số A tìm được trên một dòng, mỗi số cách nhau 1 khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>0 2</div>

<div>2 0</div>
</td>
<td>
<div>1 1</div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>0 3 6 7</div>

<div>3 0 5 6</div>

<div>6 5 0 9</div>

<div>7 6 9 0</div>
</td>
<td>
<div>2 1 4 5</div>
</td>
</tr>
</tbody>
</table>



---

## PY02052 - TÍNH CÂN ĐỐI CỦA MA TRẬN - 1

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho ma trận vuông cấp N*N chỉ bao gồm các số nguyên dương. </p>

<p>Với đường chéo chính, ta sẽ chia ma trận thành 2 nửa, được gọi là nửa trên và nửa dưới của đường chéo chính (không tính các phần tử nằm trên đường chéo chính). </p>

<p>Độ chênh lệch của ma trận được tính bằng trị tuyệt đối khi lấy <strong>tổng giá trị các phần tử ở nửa trên</strong> trừ đi <strong>tổng giá trị các phần tử ở nửa dưới</strong>. </p>

<p>Nhập thêm một giá trị K gọi là <em>ngưỡng cân đối của ma trận</em>.&nbsp; Trong trường hợp độ chênh lệch không quá K thì ma trận được coi là cân đối, nếu lớn hơn K thì không cân đối. </p>

<p>Hãy xác định độ chênh lệch và tính cân đối của ma trận. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (2 &lt; N &lt; 50)</p>

<p>N dòng tiếp theo ghi các giá trị của ma trận, các số đều nguyên dương và không quá 1000. </p>

<p>Dòng cuối ghi số K (0 &lt; K &lt;100)</p>

<p><strong>Output</strong></p>

<p>Dòng đầu ghi chữ YES hoặc NO</p>

<p>Dòng thứ 2 ghi ra giá trị độ chênh lệch của ma trận </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>2 8 10 6 7</div>

<div>6 3 2 6 9</div>

<div>10 2 6 2 8</div>

<div>9 9 7 9 8</div>

<div>9 6 5 6 9</div>

<div>5</div>
</td>
<td>
<div>YES</div>

<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY02053 - TÍNH CÂN ĐỐI CỦA MA TRẬN - 2

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho ma trận vuông cấp N*N chỉ bao gồm các số nguyên dương. </p>

<p>Với đường chéo phụ, ta sẽ chia ma trận thành 2 nửa, được gọi là nửa trên và nửa dưới của đường chéo phụ (không tính các phần tử nằm trên đường chéo phụ). </p>

<p>Độ chênh lệch của ma trận được tính bằng trị tuyệt đối khi lấy <strong>tổng giá trị các phần tử ở nửa trên</strong> trừ đi <strong>tổng giá trị các phần tử ở nửa dưới</strong>. </p>

<p>Nhập thêm một giá trị K gọi là <em>ngưỡng cân đối của ma trận</em>.&nbsp; Trong trường hợp độ chênh lệch không quá K thì ma trận được coi là cân đối, nếu lớn hơn K thì không cân đối. </p>

<p>Hãy xác định độ chênh lệch và tính cân đối của ma trận. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N (2 &lt; N &lt; 50)</p>

<p>N dòng tiếp theo ghi các giá trị của ma trận, các số đều nguyên dương và không quá 1000. </p>

<p>Dòng cuối ghi số K (0 &lt; K &lt;100)</p>

<p><strong>Output</strong></p>

<p>Dòng đầu ghi chữ YES hoặc NO</p>

<p>Dòng thứ 2 ghi ra giá trị độ chênh lệch của ma trận </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>2 8 10 6 7</div>

<div>6 3 2 6 9</div>

<div>10 2 6 2 8</div>

<div>9 9 7 9 8</div>

<div>9 6 5 6 9</div>

<div>5</div>
</td>
<td>
<div>NO</div>

<div>11</div>
</td>
</tr>
</tbody>
</table>



---

## PY02054 - BIẾN ĐỔI VỀ MA TRẬN VUÔNG

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho ma trận A kích thước N*M chỉ bao gồm các số nguyên dương. </p>

<p>Trong trường hợp N # M, hãy biến đổi ma trận A về dạng ma trận vuông theo quy tắc sau: </p>

<ul>
<li>Nếu N &gt; M, hãy loại bỏ các <strong>hàng có thứ tự lẻ</strong> trong ma trận ban đầu (thứ tự hàng tính từ 1) cho đến khi N = M. Ví dụ N = 6, M = 4 thì cần loại bỏ hàng thứ 1 và hàng thứ 3. </li>
<li>Nếu M &gt; N, hãy loại bỏ các <strong>cột có thứ tự chẵn</strong> trong ma trận ban đầu (thứ tự cột tính từ 1). Ví dụ: N = 4, M = 6 thì cần loại bỏ cột thứ 2 và cột thứ 4. </li>
</ul>

<p>In ra ma trận kết quả sau khi biến đổi. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và M (1 &lt; N,M &lt; 50). </p>

<p>N dòng tiếp theo ghi các phần tử của ma trận A, các giá trị đều nguyên dương và không quá 1000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra ma trận vuông sau khi biến đổi. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4</div>

<div>2 8 7 6</div>

<div>6 3 2 6</div>

<div>7 2 2 8</div>

<div>9 9 9 8</div>

<div>9 6 6 3</div>

<div>7 7 4 9</div>
</td>
<td>
<div>6 3 2 6 </div>

<div>9 9 9 8 </div>

<div>9 6 6 3 </div>

<div>7 7 4 9</div>
</td>
</tr>
<tr>
<td>
<div>4 6</div>

<div>2 8 7 6 4 3</div>

<div>6 3 2 6 7 2</div>

<div>7 2 2 8 9 1</div>

<div>9 9 9 8 0 7</div>
</td>
<td>
<div>2 7 4 3 </div>

<div>6 2 7 2 </div>

<div>7 2 9 1 </div>

<div>9 9 0 7</div>
</td>
</tr>
</tbody>
</table>



---

## PY02055 - SỐ NGUYÊN TỐ LỚN NHẤT TRONG MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho ma trận A cỡ N*M chỉ bao gồm các số nguyên dương. </p>

<p>Hãy tìm số nguyên tố lớn nhất trong ma trận và các vị trí có giá trị bằng số nguyên tố lớn nhất đó. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và M (1 &lt; N, M &lt; 50)</p>

<p>Tiếp theo là N dòng ghi các giá trị của ma trận, không có số nào lớn hơn 1000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra giá trị của số nguyên tố lớn nhất. Sau đó lần lượt là các vị trí của số nguyên tố lớn nhất, mỗi vị trí trên một dòng (chỉ số hàng và cột tính từ 0). Các vị trí được liệt kê theo thứ tự từ trái qua phải, từ trên xuống dưới.</p>

<p>Nếu không tìm thấy số nguyên tố nào thì ghi ra NOT FOUND</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>.Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4</div>

<div>23 21 26 10</div>

<div>13 13 22 14</div>

<div>28 29 28 23</div>

<div>29 19 11 19</div>

<div>16 26 24 21</div>

<div>13 25 21 29</div>
</td>
<td>
<div>29</div>

<div>Vi tri [2][1]</div>

<div>Vi tri [3][0]</div>

<div>Vi tri [5][3]</div>
</td>
</tr>
</tbody>
</table>



---

## PY02056 - SỐ THUẬN NGHỊCH LỚN NHẤT TRONG MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho ma trận A cỡ N*M chỉ bao gồm các số nguyên dương. </p>

<p>Một số được coi là thuận nghịch nếu có từ 2 chữ số trở lên và nếu viết theo thứ tự ngược lại giá trị vẫn không thay đổi so với giá trị ban đầu. Ví dụ: 99, 121, 1331</p>

<p>Hãy tìm số thuận nghịch lớn nhất trong ma trận và các vị trí có giá trị bằng số thuận nghịch lớn nhất đó. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và M (1 &lt; N, M &lt; 50)</p>

<p>Tiếp theo là N dòng ghi các giá trị của ma trận, không có số nào lớn hơn 10000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra giá trị của số thuận nghịch lớn nhất. Sau đó lần lượt là các vị trí của số thuận nghịch lớn nhất, mỗi vị trí trên một dòng (chỉ số hàng và cột tính từ 0). Các vị trí được liệt kê theo thứ tự từ trái qua phải, từ trên xuống dưới.</p>

<p>Nếu không tìm thấy số thuận nghịch nào thì ghi ra NOT FOUND</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>.Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4</div>

<div>23 21 77 10</div>

<div>13 13 22 14</div>

<div>28 29 28 23</div>

<div>29 77 11 19</div>

<div>16 26 24 21</div>

<div>13 25 77 77</div>
</td>
<td>
<div>77</div>

<div>Vi tri [0][2]</div>

<div>Vi tri [3][1]</div>

<div>Vi tri [5][2]</div>

<div>Vi tri [5][3]</div>
</td>
</tr>
</tbody>
</table>



---

## PY02057 - SỐ MAY MẮN TRONG MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho ma trận A cỡ N*M chỉ bao gồm các số nguyên dương. </p>

<p>Một số được coi là số may mắn nếu giá trị của nó đúng bằng khoảng cạch giữa số lớn nhất và số nhỏ nhất của ma trận. </p>

<p>Trong test ví dụ dưới đây, số lớn nhất là 77, số nhỏ nhất là 10. Giá trị may mắn là 67. </p>

<p>Hãy tìm xem trong ma trận có tồn tại số may mắn hay không. Nếu có thì ở các vị trí nào? </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và M (1 &lt; N, M &lt; 50)</p>

<p>Tiếp theo là N dòng ghi các giá trị của ma trận, không có số nào lớn hơn 10000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra giá trị bằng số may mắn nếu tìm được. Sau đó lần lượt là các vị trí tìm thấy, mỗi vị trí trên một dòng (chỉ số hàng và cột tính từ 0). Các vị trí được liệt kê theo thứ tự từ trái qua phải, từ trên xuống dưới.</p>

<p>Nếu không tìm thấy giá trị bằng số may mắn nào thì ghi ra NOT FOUND</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>.Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4</div>

<div>23 21 77 10</div>

<div>13 13 22 14</div>

<div>28 67 28 23</div>

<div>29 77 11 67</div>

<div>16 51 24 21</div>

<div>13 25 77 77</div>
</td>
<td>
<div>67</div>

<div>Vi tri [2][1]</div>

<div>Vi tri [3][3]</div>
</td>
</tr>
</tbody>
</table>



---

## PY02058 - SỐ ĐẸP TRONG MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho ma trận A cỡ N*M chỉ bao gồm các số nguyên dương. </p>

<p>Một số được coi là số may mắn nếu giá trị của nó đúng bằng khoảng cách giữa số lớn nhất và số nhỏ nhất của ma trận. </p>

<p>Trong test ví dụ dưới đây, số lớn nhất là 77, số nhỏ nhất là 10. Giá trị may mắn là 67. </p>

<p>Hãy tìm xem trong ma trận có tồn tại số may mắn hay không. Nếu có thì ở các vị trí nào? </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và M (1 &lt; N, M &lt; 50)</p>

<p>Tiếp theo là N dòng ghi các giá trị của ma trận, không có số nào lớn hơn 10000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra giá trị bằng số may mắn nếu tìm được. Sau đó lần lượt là các vị trí tìm thấy, mỗi vị trí trên một dòng (chỉ số hàng và cột tính từ 0). Các vị trí được liệt kê theo thứ tự từ trái qua phải, từ trên xuống dưới.</p>

<p>Nếu không tìm thấy giá trị bằng số may mắn nào thì ghi ra NOT FOUND</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>.Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4</div>

<div>23 21 77 10</div>

<div>13 13 22 14</div>

<div>28 67 28 23</div>

<div>29 77 11 67</div>

<div>16 51 24 21</div>

<div>13 25 77 77</div>
</td>
<td>
<div>67</div>

<div>Vi tri [2][1]</div>

<div>Vi tri [3][3]</div>
</td>
</tr>
</tbody>
</table>



---

## PY02059 - SỐ NGUYÊN TỐ TRONG MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho ma trận A cỡ N*M chỉ bao gồm các số nguyên dương. </p>

<p>Hãy tìm số nguyên tố lớn nhất trong ma trận và các vị trí có giá trị bằng số nguyên tố lớn nhất đó. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và M (1 &lt; N, M &lt; 50)</p>

<p>Tiếp theo là N dòng ghi các giá trị của ma trận, không có số nào lớn hơn 1000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra giá trị của số nguyên tố lớn nhất. Sau đó lần lượt là các vị trí của số nguyên tố lớn nhất, mỗi vị trí trên một dòng (chỉ số hàng và cột tính từ 0). Các vị trí được liệt kê theo thứ tự từ trái qua phải, từ trên xuống dưới.</p>

<p>Nếu không tìm thấy số nguyên tố nào thì ghi ra NOT FOUND</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>.Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4</div>

<div>23 21 26 10</div>

<div>13 13 22 14</div>

<div>28 29 28 23</div>

<div>29 19 11 19</div>

<div>16 26 24 21</div>

<div>13 25 21 29</div>
</td>
<td>
<div>29</div>

<div>Vi tri [2][1]</div>

<div>Vi tri [3][0]</div>

<div>Vi tri [5][3]</div>
</td>
</tr>
</tbody>
</table>



---

## PY02060 - BÀI D. BỘI SỐ CHUNG NHỎ NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Bội số chung nhỏ nhất của hai số nguyên x và y (viết tắt LCM(x, y)) là số nguyên dương nhỏ nhất chia hết cho cả x và y. &nbsp;Cho hai số nguyên dương a và b (a ≤ b). Hãy đếm xem có bao nhiêu cặp số nguyên (x, y) sao cho</p>

<p><strong>LCM(x,y) = a * (a+1) * …. * b</strong></p>

<p><strong>Dữ liệu vào:&nbsp; </strong>Dòng đầu ghi số bộ test (không quá 10).&nbsp; Mỗi test ghi trên một dòng hai số a và b (a ≤ b ≤ 10<sup>6</sup>) </p>

<p><strong>Kết quả:</strong></p>

<p>Với mỗi bộ test, ghi ra số lượng cặp (x, y)&nbsp; thỏa mãn điều kiện đề bài. Vì kết quả có thể rất lớn nên hãy ghi kết quả theo modulo 10<sup>9</sup> + 7.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>2 3</div>

<div>5 5</div>
</td>
<td>
<div>9 </div>

<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY02061 - TÍNH TÍCH CHẬP MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Phép tích chập (convolution) là kỹ thuật quan trọng trong xử lý ảnh. Kết quả phép tích chập giữa ma trận x[] và ma trận kernel h[] được xác định bằng công thức:</p>

<p>Trong đó ma trận kernel có kích thước bằng 2k+1. Với kernel 3x3 thì -1 ≤ u,v ≤ 1, do đó, giá trị các phần tử của ma trận kết quả có dạng:</p>

<p>Cho ma trận ảnh và ma trận kernel 3x3. Nhiệm vụ của bạn là hãy thực hiện phép nhân tích chập của 2 ma trận, sau đó tính <strong>tổng tất cả các phần tử của ma trận thu được.</strong></p>

<p>Giải thích test: Vị trí ô đầu tiên của ma trận kết quả:</p>

<p><strong>Dữ liệu vào:</strong></p>

<ul>
<li>Dòng đầu tiên là số lượng bộ test T&nbsp;(T ≤ 20). </li>
<li>Mỗi test bắt đầu bởi hai số nguyên N và M&nbsp;(3 ≤ N,M ≤ 300).</li>
<li>Kế tiếp là N dòng, mỗi dòng gồm M số nguyên mô tả ma trận ảnh.</li>
<li>3 dòng tiếp theo, mỗi dòng gồm 3 số nguyên mô tả ma trận kernel.</li>
<li>Giá trị các phần tử của hai ma trận có giá trị tuyệt đối không vượt quá 100.</li>
</ul>

<p><strong>Kết quả:&nbsp; </strong></p>

<ul>
<li>Với mỗi test, hãy in ra <strong>tổng các phần tử của ma trận mới tìm được.</strong></li>
</ul>

<p><strong>Ví dụ:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4 4</div>

<div>2 1 0 0</div>

<div>3 2 1 1</div>

<div>4 3 2 1</div>

<div>2 2 1 0</div>

<div>-1 -1 -1</div>

<div>-1 8 -1</div>

<div>-1 -1 -1</div>

<div>3 3</div>

<div>1 2 3</div>

<div>4 5 6</div>

<div>7 8 9</div>

<div>1 1 1</div>

<div>1 1 1</div>

<div>1 1 1</div>
</td>
<td>
<div>10</div>

<div>45</div>
</td>
</tr>
</tbody>
</table>

<div>&nbsp;</div>



---

## PY02062 - DÃY SỐ ĐỘC ĐẮC

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho dãy số A[] có N phần tử. Một dãy con X chứa các phần tử liên tiếp của A[] được gọi là “độc nhất”, nếu như tồn tại một phần tử xuất hiện duy nhất đúng một lần trong X.</p>

<p>Dãy số A[] được gọi là “độc đắc” nếu như mọi dãy con liên tiếp có độ dài nhỏ hơn N đều là dãy số độc nhất. Nhiệm vụ của bạn là xác định xem dãy số đã cho có phải là “độc đắc” hay không?</p>

<p><strong>Dữ liệu vào:</strong></p>

<ul>
<li>Dòng đầu tiên là số lượng bộ test T (1 ≤ T ≤ 20).</li>
<li>Mỗi test gồm số đầu tiên là số lượng phần tử N&nbsp;(2 ≤ N ≤ 10<sup>5</sup>)</li>
<li>Dòng tiếp theo gồm N số nguyên không âm A[i], có giá trị không vượt quá 10<sup>9</sup>.</li>
</ul>

<p><strong>Kết quả:&nbsp; </strong></p>

<ul>
<li>Với mỗi test, hãy in ra đáp án tìm được trên một dòng. Nếu dãy số là độc đắc, in ra “YES”. In ra “NO” trong trường hợp ngược lại.</li>
</ul>

<p><strong>Ví dụ:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>5</div>

<div>1 2 3 4 5</div>

<div>7</div>

<div>1 2 3 4 3 4 1</div>

<div>5</div>

<div>1 1 1 1 1</div>

<div>5</div>

<div>1 2 5 2 1</div>

<div>5</div>

<div>5 5 2 5 5</div>
</td>
<td>
<div>YES</div>

<div>NO</div>

<div>NO</div>

<div>YES<br>
NO</div>
</td>
</tr>
</tbody>
</table>



---

## PY02063 - TÍCH LỚN NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A gồm N phần tử là các số nguyên. Hãy tính tích lớn nhất của <strong>2 hoặc 3</strong> phần tử trong dãy. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên ghi số N (3 ≤ N ≤ 10000)</p>

<p>Dòng thứ 2 ghi N số của dãy A (|Ai| ≤ 1000)</p>

<p><strong>Outpput</strong></p>

<p>Ghi ra kết quả trên một dòng</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6</div>

<div>5 10 -2 3 5 2</div>
</td>
<td>
<div>250</div>
</td>
</tr>
</tbody>
</table>



---

## PY02064 - BIỂU THỨC TOÁN HỌC

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số a[] gồm có N phần tử. Nhiệm vụ của bạn là xác định nhóm chỉ số <img src="data:image/png;base64,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">&nbsp;sao cho biểu thức dưới đây đạt giá trị lớn nhất.</p>

<p><strong>Dữ liệu vào:</strong></p>

<ul>
<li>Dòng đầu tiên là số lượng bộ test T (T ≤ 10). </li>
<li>Mỗi test bắt đầu bởi hai số nguyên N và K. (0 ≤ 5K ≤ N ≤ 1000).</li>
<li>Dòng tiếp theo mô tả dãy số <img src="data:image/png;base64,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">.</li>
</ul>

<p><strong>Kết quả:&nbsp; </strong></p>

<ul>
<li>Với mỗi test, in ra giá trị lớn nhất của biểu thức S.</li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>5 1</div>

<div>1 2 3 4 5</div>

<div>6 1</div>

<div>1 2 3 -3 -2 -1</div>
</td>
<td>
<div>15</div>

<div>13</div>
</td>
</tr>
</tbody>
</table>



---

## PY02065 - DIỆN TÍCH TOÀN PHẦN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Trên mỗi ô của vùng diện tích có kích thước MxN, các khối vuông đơn vị (kích thước 1x1x1) được xếp chồng lên nhau để tạo thành một khối lớn có chiều cao bằng H[i, j]. Các khối lớn khi được đặt cạnh nhau sẽ che phủ một phần mặt bên của chúng.</p>

<p>Nhiệm vụ của bạn là hãy tính diện tích toàn phần của khối thể tích thu được, bao gồm cả phần bề mặt trên, mặt đáy và bốn mặt xung quanh.</p>

<p><strong>Dữ liệu vào:</strong></p>

<ul>
<li>Dòng đầu tiên là số lượng bộ test T (T ≤ 10). </li>
<li>Mỗi test bắt đầu bởi hai số nguyên M và N.&nbsp;(0 ≤ M,&nbsp;N ≤ 1000).</li>
<li>M dòng tiếp theo, mỗi dòng gồm N số nguyên mô tả chiều cao của ô (i, j). Chiều cao của mỗi ô không vượt quá 1000.</li>
</ul>

<p><strong>Kết quả:&nbsp; </strong></p>

<ul>
<li>Với mỗi test, in ra diện tích toàn phẩn của khối thể tích được tạo thành.</li>
</ul>

<p><strong>Ví dụ:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>1 1</div>

<div>1</div>

<div>1 2</div>

<div>1 2</div>

<div>1 1</div>

<div>2</div>

<div>3 3</div>

<div>1 1 1</div>

<div>1 1 1</div>

<div>1 1 1</div>

<div>3 3</div>

<div>1 1 1</div>

<div>1 2 0</div>

<div>1 0 2</div>
</td>
<td>
<div>6</div>

<div>14</div>

<div>10</div>

<div>30</div>

<div>38</div>

<div>&nbsp;</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PY02066 - BÀI TOÁN ĐẾM

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Ngày thi chung kết ICPC PTIT 2020, các lập trình viên đang say sưa đọc đề và fix bug trong Hội trường 1, nhưng từ Ký túc xá thì nhóm bạn nữ xinh đẹp nào đó liên tục đồng thanh lặp đi lại lại câu hát quen thuộc: </p>

<p><em>“1, 2, 3, 5 anh có đánh rơi nhịp nào không?</em></p>

<p><em>Nếu câu trả lời là có …” </em></p>

<p>Để cho phù hợp với tình hình thời sự và giảm bớt căng thẳng cho các bạn thí sinh, ban tổ chức quyết định thêm một bài toán đơn giản: cho một dãy các số nguyên đếm tăng dần. Hỏi có số nào bị “đánh rơi” khi đếm hay không? Giả sử một dãy đếm chính xác thì luôn luôn đếm bắt đầu từ 1.</p>

<p><strong>Dữ liệu vào:</strong></p>

<ul>
<li>Dòng đầu ghi số N là số con số được đếm (1 ≤ N ≤ 100)</li>
<li>Các dòng tiếp theo ghi đủ N số A[i] theo thứ tự tăng dần (1 ≤ A[i] ≤ 200). Các số phân cách bởi khoảng trống hoặc xuống dòng. </li>
</ul>

<p><strong>Kết quả:</strong></p>

<ul>
<li>Nếu phép đếm là đầy đủ, chính xác thì ghi ra <strong>Excellent!</strong></li>
<li>Hoặc lần lượt liệt kê các số bị đánh rơi, mỗi số trên một dòng. </li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input 1</strong></div>
</td>
<td>
<div><strong>Output 1</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>1 2 3 5</div>
</td>
<td>
<div>4</div>
</td>
</tr>
<tr>
<td>
<div><strong>Input 2</strong></div>
</td>
<td>
<div><strong>Output 2</strong></div>
</td>
</tr>
<tr>
<td>
<div>7</div>

<div>4 5 7 8 9</div>

<div>10 11</div>
</td>
<td>
<div>1</div>

<div>2</div>

<div>3</div>

<div>6</div>
</td>
</tr>
<tr>
<td>
<div><strong>Input 3</strong></div>
</td>
<td>
<div><strong>Output 3</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>1 2 3 </div>

<div>4 </div>

<div>5</div>
</td>
<td>
<div>Excellent!</div>
</td>
</tr>
</tbody>
</table>



---

## PY02067 - DÃY SỐ TƯƠNG THÍCH

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số nguyên A[] gồm có N phần tử. Nhiệm vụ của bạn là tìm dãy số B[] có tổng phần tử nhỏ nhất thỏa mãn tính chất A[i] <strong>/ </strong>B[i] = A[i+1] <strong>/ </strong>B[i+1] với mọi chỉ số i (0 ≤ i ≤ N-2). </p>

<p>Phép chia trong bài toán này là phép chia nguyên (tức là chỉ lấy phần nguyên của kết quả: ví dụ 5/3 = 1). &nbsp;&nbsp;</p>

<p><strong>Dữ liệu vào</strong><strong>:</strong></p>

<p>Dòng đầu tiên là số lượng phần tử N (1 ≤ N ≤ 1000).</p>

<p>Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 2000).</p>

<p><strong>Kết quả</strong><strong>:&nbsp; </strong></p>

<p>In ra một số nguyên là tổng các phần tử của dãy số B[] tìm được.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>18 27 16 22 6</div>
</td>
<td>
<div>25</div>
</td>
</tr>
</tbody>
</table>

<p><em>Giải thích test: Dãy B</em><em>[]</em><em> tìm được là 5, 7, 5, 6, 2.</em></p>

---

## PY02068 - XỬ LÝ ẢNH

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Phương pháp làm mịn ảnh được thực hiện bằng cách sử dụng phép tích chập (convolution) giữa ma trận ảnh và một ma trận kernel có dạng:</p>

<p>Ma trận kernel trong ví dụ trên có kích thước bằng 5. Với ma trận kernel có kích thước L = 2k + 1, giá trị điểm ảnh <em>(i,j)</em> của ma trận mới sẽ bằng tổng của (2k + 1) x (2k + 1) phần tử (<em>i+u, j+v)</em> với mọi –k ≤ u,v ≤ k, sau đó chia cho (2k + 1) x (2k + 1). Kết quả điểm ảnh mới thu được sau khi thực hiện phép chia sẽ được làm tròn xuống.</p>

<p>Cho ma trận ảnh đầu vào và kích thước <em>L</em> của ma trận kernel, nhiệm vụ của bạn là hãy in ra ma trận ảnh sau khi được làm mịn.</p>

<p><strong>Dữ liệu vào:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test <em>T</em> (T ≤ 10).</p>

<p>Mỗi test bắt đầu bởi hai số nguyên <em>N</em>, <em>M </em>và <em>L (3 ≤ N,M ≤ 500; L ≤ </em>min<em>(n,m))</em>. <em>L</em> được đảm bảo là một số nguyên lẻ.</p>

<p>Kế tiếp là <em>N</em> dòng, mỗi dòng gồm <em>M</em> số nguyên mô tả ma trận ảnh đầu vào, có giá trị trong phạm vi từ 0 tới 255.</p>

<p><strong>Kết quả:&nbsp; </strong></p>

<p>Với mỗi test, hãy in ra ma trận ảnh sau khi đã được làm mịn.</p>

<p><strong>Ví dụ:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4 4 3</div>

<div>2 1 0 0</div>

<div>3 2 1 1</div>

<div>4 5 2 1</div>

<div>2 2 9 0</div>

<div>3 3 3</div>

<div>1 2 3</div>

<div>4 5 6</div>

<div>7 8 9</div>
</td>
<td>
<div>2 1</div>

<div>3 1</div>

<div>5</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: Giá trị phần tử (1,1) = floor[(2+1+0+3+2+1+4+5+2) / 9] = floor [20/9] = 2.</p>

---

## PY02069 - SỐ THUẬN NGHỊCHTRONG MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho ma trận A cỡ N*M chỉ bao gồm các số nguyên dương. </p>

<p>Một số được coi là thuận nghịch nếu có từ 2 chữ số trở lên và nếu viết theo thứ tự ngược lại giá trị vẫn không thay đổi so với giá trị ban đầu. Ví dụ: 99, 121, 1331</p>

<p>Hãy tìm số thuận nghịch lớn nhất trong ma trận và các vị trí có giá trị bằng số thuận nghịch lớn nhất đó. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi hai số N và M (1 &lt; N, M &lt; 50)</p>

<p>Tiếp theo là N dòng ghi các giá trị của ma trận, không có số nào lớn hơn 10000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra giá trị của số thuận nghịch lớn nhất. Sau đó lần lượt là các vị trí của số thuận nghịch lớn nhất, mỗi vị trí trên một dòng (chỉ số hàng và cột tính từ 0). Các vị trí được liệt kê theo thứ tự từ trái qua phải, từ trên xuống dưới.</p>

<p>Nếu không tìm thấy số thuận nghịch nào thì ghi ra NOT FOUND</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>.Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4</div>

<div>23 21 77 10</div>

<div>13 13 22 14</div>

<div>28 29 28 23</div>

<div>29 77 11 19</div>

<div>16 26 24 21</div>

<div>13 25 77 77</div>
</td>
<td>
<div>77</div>

<div>Vi tri [0][2]</div>

<div>Vi tri [3][1]</div>

<div>Vi tri [5][2]</div>

<div>Vi tri [5][3]</div>
</td>
</tr>
</tbody>
</table>



---

## PY02071 - TỔNG CÁC SỐ TỰ NHIÊN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các cách biểu diễn N thành tổng các số tự nhiên nhỏ hơn hoặc bằng N. Phép hoán vị của một cách được xem là giống nhau. </p>

<p>Ví dụ với N = 5 ta có kết quả là: (5), (4, 1), (3, 2), (3, 1, 1), (2, 2, 1), (2, 1, 1, 1), (1, 1, 1, 1, 1) .</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào số lượng test T.</li>
<li>Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.</li>
<li>T, n thỏa mãn ràng buộc: 1≤T, N≤10.</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Dòng đầu tiên là số lượng cách phân tích thỏa mãn. </li>
<li>Dòng tiếp theo liệt kê đáp án theo mẫu ví dụ đã cho.</li>
</ul>

<p><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4</div>

<div>5</div>
</td>
<td>
<div>5</div>

<div>(4) (3 1) (2 2) (2 1 1) (1 1 1 1)</div>

<div>7</div>

<div>(5) (4 1) (3 2) (3 1 1) (2 2 1) (2 1 1 1) (1 1 1 1 1)</div>
</td>
</tr>
</tbody>
</table>



---

## PY02072 - ĐOẠN CON TRUNG BÌNH LỚN NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dãy số A[] có N phần tử, N không quá 10<sup>5</sup>, các số trong dãy đều nguyên dương và không quá 9 chữ số. Hãy tính độ dài của dãy con liên tiếp có trung bình cộng lớn nhất trong dãy. </p>

<p>Trong trường hợp có nhiều dãy con liên tiếp đều có trung bình cộng lớn nhất thì dãy nào dài hơn sẽ được chọn. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N. </p>

<p>Dòng thứ 2 ghi N số của dãy A[]</p>

<p><strong>Output</strong></p>

<p>Ghi ra độ dài dãy con liên tiếp có trung bình cộng lớn nhất tìm được. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>5 1 6 7 2</div>
</td>
<td>
<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## PY02073 - KÝ TỰ GIỐNG NHAU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Giả sử bạn cần viết N ký tự giống nhau lên màn hình. Bạn chỉ được phép thực hiện ba thao tác dưới đây với chi phí thời gian khác nhau:</p>

<ul>
<li>Thao tác insert: chèn một ký tự với thời gian là X.</li>
<li>Thao tác delete: loại bỏ ký tự cuối cùng với thời gian là Y.</li>
<li>Thao tác copying: copy và paste tất cả các ký tự đã viết để số ký tự được nhân đôi với thời gian là Z. </li>
</ul>

<p>Hãy tìm thời gian ít nhất để có thể đưa ra màn hình N ký tự giống nhau. Ví dụ với N = 9, X =1, Y = 2, Z =1 ta có kết quả là 5 bằng cách thực hiện: insert, insert, copying, copying, insert.</p>

<p><strong>Input: </strong>Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số các ký tự giống nhau cần viết lên màn hình; dòng tiếp theo đưa vào bộ ba số X, Y, Z tương ứng với thời gian thực hiện ba thao tác; các số được viết cách nhau một vài khoảng trống. &nbsp;T, N, X, Y, Z thỏa mãn ràng buộc: 1≤T≤100;&nbsp; 1≤N ≤100; 1≤X, Y, Z ≤100.</p>

<p><strong>Output: </strong>Đưa ra kết quả mỗi test theo từng dòng.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
9<br>
1 2 1<br>
10<br>
2 5 4</div>
</td>
<td>
<div>5<br>
14</div>
</td>
</tr>
</tbody>
</table>



---

## PY02075 - TRỤC TỌA ĐỘ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Trên trục Ox tính từ vị trí 0, người ta muốn xếp nhiều nhất các đoạn thẳng sao cho không đoạn nào chồng lấn lên nhau. Đoạn thẳng thứ i có vị trí bắt đầu là X1[i] và kết thúc tại X2[i], với X1[i] &lt;= X2[i]. </p>

<p>Hãy tính số đoạn thẳng nhiều nhất có thể được lựa chọn để đưa lên trục Ox và không có đoạn nào chồng lấn lên nhau. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên ghi số bộ test, không quá 10. </p>

<p>Với mỗi bộ test: dòng đầu ghi số N là số đoạn thẳng (không quá 10<sup>5</sup>)</p>

<p>Tiếp theo là N dòng, mỗi dòng có 2 số nguyên mô tả đoạn thẳng. Các giá trị tọa độ đều là các số nguyên không âm và không quá 10<sup>6</sup>. </p>

<p><strong>Output</strong></p>

<p>Với mỗi test, viết trên 1 dòng số lượng đoạn thẳng nhiều nhất có thể được lựa chọn thỏa mãn điều kiện đề bài. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>10</div>

<div>39 55</div>

<div>37 74</div>

<div>0 1</div>

<div>19 25</div>

<div>65 76</div>

<div>51 52</div>

<div>19 21</div>

<div>5 94</div>

<div>46 65</div>

<div>32 40</div>
</td>
<td>
<div>5</div>
</td>
</tr>
</tbody>
</table>



---

## PY02078 - TĂNG - GIẢM

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho hai dãy số thực A[] và B[] đều có N phần tử, các giá trị là số thực&nbsp;và không quá 100.</p>

<p>Hãy tính độ dài dài nhất của dãy các vị trí (không cần liên tiếp) thỏa mãn cả hai điều kiện:</p>

<ul>
<li>Nếu xét các vị trí đó trên dãy A[] thì dãy con thu được thỏa mãn tính chất tăng dần (giá trị bằng nhau không được tính vào dãy tăng).</li>
<li>Nếu xét các vị trí đó trên dãy B[] thì dãy con thu được thỏa mãn tính chất giảm dần (giá trị bằng nhau không được tính vào dãy giảm).</li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test (không quá 100).</p>

<p>Mỗi bộ test bắt đầu bởi số N (không quá 500).</p>

<p>Tiếp theo là N dòng, mỗi dòng ghi 2 giá trị A[i] và B[i]</p>

<p><strong>Output</strong></p>

<p>Với mỗi test, ghi ra độ dài tính được trên một dòng.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>2</div>

<div>1.0 1.0</div>

<div>1.5 0.0</div>

<div>3</div>

<div>1.0 1.0</div>

<div>1.0 1.0</div>

<div>1.0 1.0</div>

<div>6</div>

<div>1.5 9.0</div>

<div>2.0 2.0</div>

<div>2.5 6.0</div>

<div>3.0 5.0</div>

<div>4.0 2.0</div>

<div>10.0 5.5</div>
</td>
<td>
<div>2</div>

<div>1</div>

<div>4</div>
</td>
</tr>
</tbody>
</table>



---

## PY02090 - MA TRẬN CON TỔNG BẰNG K

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 5</small>

<p>Cho ma trận đơn vị A[][] (chỉ có các giá trị 0,1) có kích thước <em>N</em>x<em>M</em>. Nhiệm vụ của bạn là hãy đếm số lượng ma trận đơn vị con của A[][] có tổng các phần tử bằng <em>K</em> cho trước.</p>

<p><strong>Dữ liệu vào:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10).</p>

<p>Mỗi test gồm số nguyên <em>N</em>, <em>M </em>và<em> K (3 ≤ N, M ≤ 1000; 1 ≤ K ≤ 4)</em> .</p>

<p><em>N</em> dòng tiếp theo, mỗi dòng gồm một xâu có độ dài bằng M, mô tả một hàng của ma trận.</p>

<p><strong>Kết quả:&nbsp; </strong></p>

<p>Với mỗi test, in ra số lượng hình chữ nhật có tổng bằng <em>K</em> tìm được.</p>

<p><strong>Ví dụ:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>5 5 4</div>

<div>01010</div>

<div>10101</div>

<div>01010</div>

<div>10101</div>

<div>01010</div>

<div>4 4 4</div>

<div>1111</div>

<div>1111</div>

<div>1111</div>

<div>1111</div>
</td>
<td>
<div>21</div>

<div>17</div>
</td>
</tr>
</tbody>
</table>



---

## PY02091 - DI CHUYỂN TỐI ƯU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Trên sân thi đấu có giới hạn 10<sup>9</sup> x 10<sup>9</sup>, các chú robot sử dụng công nghệ dò đường line sẽ di chuyển theo các vạch chỉ đường có sẵn. Mỗi bước, robot sẽ dịch chuyển được 1 ô đơn vị theo một trong 8 hướng. Robot có thể thực hiện được phép quay 45 độ hay 90 độ nếu như ô kế cận cũng đã được kẻ vạch. </p>

<p>Hình vẽ dưới đây minh họa các hướng di chuyển của robot trên một sân thi đấu có sẵn, các vị trí đánh dấu X mô tả robot không được đi theo hướng này.</p>

<p>Nhiệm vụ của bạn là hãy lập chương trình để di chuyển robot vị trí (x<sub>A</sub>, y<sub>A</sub>) tới vị trí (x<sub>B</sub>, y<sub>B</sub>) với số bước ít nhất. Input đảm bảo hai vị trí A và B chắc chắn đã được kẻ vạch.</p>

<p><strong>Dữ liệu vào:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10).</p>

<p>Mỗi test gồm số nguyên x<sub>A</sub>, y<sub>A</sub>, x<sub>B</sub>, y<sub>B</sub> mô tả tọa độ hai điểm A và B.</p>

<p>Tiếp theo là số nguyên N&nbsp;&nbsp;(N ≤ 10<sup>5</sup>), mô tả số vạch đường chỉ dẫn.</p>

<p>N dòng tiếp theo, mỗi dòng gồm 3 số nguyên x, y<sub>1</sub>, y<sub>2</sub> (y<sub>1</sub> ≤ y<sub>2</sub>) cho biết có một vạch chỉ dẫn từ ô (x, y<sub>1</sub>) tới (x, y<sub>2</sub>). Input đảm bảo tổng số lượng số ô được kẻ vạch trên sân thi đấu không vượt quá 10<sup>5</sup>. Giới hạn: 0 ≤ x, y<sub>1</sub>, y<sub>2</sub> ≤ 10<sup>9</sup>.</p>

<p><strong>Kết quả:&nbsp; </strong></p>

<p>Với mỗi test, in ra số bước di chuyển ít nhất tìm được.</p>

<p><strong>Ví dụ:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>0 6 2 2</div>

<div>3</div>

<div>0 6 6</div>

<div>1 6 10</div>

<div>2 2 5</div>

<div>1 1 2 10</div>

<div>2</div>

<div>1 1 4</div>

<div>2 8 10</div>
</td>
<td>
<div>5</div>

<div>-1</div>
</td>
</tr>
</tbody>
</table>

---

## PY02092 - BÀI TOÁN HÌNH HỌC - 2

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Cho N điểm trên mặt phẳng Oxy. Nhiệm vụ của bạn là tìm bao lồi của tập điểm và tính diện tích bao lồi này.</p>

<p>Bao lồi của một tập điểm là một đa giác có các đỉnh thuộc tập điểm đã cho và chứa tất cả N điểm.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 100).</p>

<p>Mỗi test bắt đầu bởi số nguyên N (3 ≤ N ≤ 1000).</p>

<p>N dòng tiếp theo, mỗi dòng gồm 2 số nguyên x[i], y[i] (-1000 ≤ x[i], y[i] ≤ 1000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test, in ra diện tích bao lồi tìm được trên một dòng. Kết quả được viết với độ chính xác 3 số sau dấu phẩy.&nbsp;</p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>7</div>

<div>0 3</div>

<div>2 2</div>

<div>1 1</div>

<div>2 1</div>

<div>3 0</div>

<div>0 0</div>

<div>3 3</div>

<div>4</div>

<div>0 0</div>

<div>2 0</div>

<div>1 2</div>

<div>1 1</div>

<div>&nbsp;</div>
</td>
<td>
<div>9.000</div>

<div>2.000</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: Bao lồi gồm các điểm (0, 0), (3, 0), (3, 3) và (0, 3).</p>

---

## PY02095 - BÀN CỜ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Một bàn cờ có dạng bảng vuông kích thước 4 * 4, trên đó có một số quân cờ. Một quân cờ chỉ có thể di chuyển sang 1 ô kề cạnh còn trống, mỗi di chuyển như vậy được gọi là 1 bước di chuyển. </p>

<p>Cho hai trạng thái của bàn cờ, hãy chỉ ra một dãy các bước di chuyển để đưa bảng từ trạng thái xuất phát đến trạng thái đích với số phép di chuyển là ít nhất. Mỗi trạng thái được mô tả là một ma trận 4 * 4 trong đó số ô ở hàng i, cột j là 1 nếu tại vị trí (i,j) tương ứng có quân cờ đang đứng hoặc bằng 0 nếu không có.</p>

<p><strong>Input</strong></p>

<ul>
<li>Gồm 2 * 4 dòng thể hiện ma trận mô tả trạng thái xuất phát và trạng thái đích. 4 dòng đầu tiên thể hiện ma trận xuất phát, 4 dòng tiếp theo là ma trận đích.</li>
<li>Input luôn đảm bảo là có nghiệm.</li>
</ul>

<p><strong>Output</strong></p>

<ul>
<li>Dòng đầu tiên ghi k là số ít nhất các phép biến đổi tìm được.</li>
<li>K dòng tiếp, mỗi dòng mô tả 1 phép biến đổi, theo đúng trình tự biến đổi, gồm 4 số nguyên dương u, v, x, y thể hiện di chuyển quân cờ ở vị trí (u, v) sang vị trí (x, y).</li>
</ul>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1111</div>

<div>1111</div>

<div>0000</div>

<div>0000</div>

<div>0000</div>

<div>0000</div>

<div>1111</div>

<div>1111</div>
</td>
<td>
<div>16</div>

<div>2 1 3 1</div>

<div>1 1 2 1</div>

<div>2 2 3 2</div>

<div>1 2 2 2 </div>

<div>2 3 3 3 </div>

<div>1 3 2 3</div>

<div>2 4 3 4</div>

<div>1 4 2 4</div>

<div>3 1 4 1</div>

<div>2 1 3 1</div>

<div>3 2 4 2</div>

<div>2 2 3 2</div>

<div>3 3 4 3</div>

<div>2 3 3 3</div>

<div>3 4 4 4</div>

<div>2 4 3 4</div>
</td>
</tr>
</tbody>
</table>



---

## PY02096 - VỊ TRÍ CHẴN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Cho trước 1 chữ số d (0 ≤ d ≤ 9) , ta gọi họ số đặc biệt của d là tập các số tự nhiên mà chữ số d chỉ xuất hiện tại vị trí chẵn (không xuất hiện trong vị trí lẻ). </p>

<p>Ví dụ: Số 1717171 là 1 số trong họ số đặc biệt của chữ số 7</p>

<p>Số 20 là 1 số trong họ số đặc biệt của chữ số 2. </p>

<p>Bây giờ, việc của bạn là: Cho trước 1 chữ số d, hãy đếm số lượng các số thuộc họ số đặc biệt của d nằm trong đoạn từ [a,b] mà là bội số của 1 số m cho trước.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên gồm 2 số m và d (1 ≤ m ≤ 2000, 0 ≤ d ≤ 9)</p>

<p>Dòng thứ 2 gồm 2 số a và b ( a ≤ b, số chữ số của cả a và b bằng nhau, không vượt quá 2000 và không có chữ số 0 ở đầu).</p>

<p><strong>Output: </strong></p>

<p>In ra kết quả bài toán. Vì kết quả bài toán có thể rất lớn nên kết quả in ra phải được lấy dư theo 10<sup>9</sup> + 7</p>

<p>Ví dụ: </p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>43 3</div>

<div>587 850</div>
</td>
<td>
<div>1</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test: </p>

<p>Trong khoảng từ 587 đến 850 chỉ có duy nhất 1 số thuộc họ số đặc biệt của chữ số 3 mà là bội của 43 đó là 731 (số 3 xuất hiện tại vị trí số 2 là vị trí chẵn) </p>

---

## PY02097 - DÃY CON TĂNG DÀI NHẤT 2 CHIỀU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Cho N cặp số A<sub>i</sub> (x<sub>i</sub>, y<sub>i</sub>). Cặp (x<sub>1</sub>, y<sub>1</sub>) &lt; (x<sub>2</sub>,y<sub>2</sub>) nếu như x<sub>1</sub> &lt; x<sub>2</sub> và y<sub>1</sub> &lt; y<sub>2</sub>.</p>

<p>Nhiệm vụ của bạn là hãy tìm dãy con tăng dài nhất trên mảng các cặp số này.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số nguyên N (N &lt;= 100 000).</p>

<p>N dòng tiếp theo, mỗi dòng gồm 2 số nguyên x<sub>i</sub>, y<sub>i</sub>. Các số có giá trị tuyệt đối không vượt quá 10<sup>9</sup>.</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra một số nguyên là độ dài dãy con tăng dài nhất tìm được.</p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>8</div>

<div>1 3</div>

<div>3 2</div>

<div>1 1</div>

<div>4 5</div>

<div>6 3</div>

<div>9 9</div>

<div>8 7</div>

<div>7 6</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY03004 - THỐNG KÊ TỪ KHÁC NHAU

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho một đoạn văn bản có N dòng trong đó có thể có các dấu câu như dẩy phẩy (,) dấu chấm (.) dấu chấm hỏi (?) dấu chấm cảm (!) dấu hai chấm (:) dấu chấm phẩy (;) dấu ngoặc đơn, dấu gạch ngang (-), dấu gạch chéo (/). &nbsp;</p>

<p>Hãy liệt kê các từ khác nhau xuất hiện trong đoạn văn bản theo thứ tự số lần xuất hiện giảm dần. </p>

<p>Chú ý: </p>

<ul>
<li>Khi thống kê thì không phân biệt chữ hoa, chữ thường.</li>
<li>Bỏ qua các dấu câu đã liệt kê ở trên khi tách từ</li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N không quá 1000. </p>

<p>Tiếp theo là N dòng mô tả văn bản. Mỗi dòng không quá 500 ký tự. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách các từ (ở dạng in thường) theo thứ tự số lần xuất hiện giảm dần. </p>

<p>Trong trường hợp số lần xuất hiện bằng nhau thì liệt kê theo thứ tự từ điển tăng dần. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>PTIT duy tri hoc phi on dinh nam 2019 va khong tang trong nam 2020-2021 va 2021-2022! </div>

<div>Khi dich benh xuat hien PTIT trich hon 6 ty dong ho tro sinh vien PTIT</div>

<div>voi muc ho tro 500000 dong/sinh vien PTIT.</div>
</td>
</tr>
<tr>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>ptit 4</div>

<div>2021 2</div>

<div>dong 2</div>

<div>ho 2</div>

<div>nam 2</div>

<div>sinh 2</div>

<div>tro 2</div>

<div>va 2</div>

<div>vien 2</div>

<div>2019 1</div>

<div>2020 1</div>

<div>2022 1</div>

<div>500000 1</div>

<div>6 1</div>

<div>benh 1</div>

<div>dich 1</div>

<div>dinh 1</div>

<div>duy 1</div>

<div>hien 1</div>

<div>hoc 1</div>

<div>hon 1</div>

<div>khi 1</div>

<div>khong 1</div>

<div>muc 1</div>

<div>on 1</div>

<div>phi 1</div>

<div>tang 1</div>

<div>tri 1</div>

<div>trich 1</div>

<div>trong 1</div>

<div>ty 1</div>

<div>voi 1</div>

<div>xuat 1</div>
</td>
</tr>
</tbody>
</table>



---

## PY03005 - THỐNG KÊ TỪ KHÁC NHAU THEO NGƯỠNG K

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho một đoạn văn bản có N dòng trong đó có thể có các dấu câu như dẩy phẩy (,) dấu chấm (.) dấu chấm hỏi (?) dấu chấm cảm (!) dấu hai chấm (:) dấu chấm phẩy (;) dấu ngoặc đơn, dấu gạch ngang (-), dấu gạch chéo (/).&nbsp; </p>

<p>Nhập thêm số nguyên dương K (1 &lt; K &lt; 50). Hãy liệt kê các từ khác nhau xuất hiện ít nhất K lần trong đoạn văn bản. Danh sách được sắp xếp theo thứ tự số lần xuất hiện giảm dần, nếu số lần xuất hiện bằng nhau thì sắp xếp theo thứ tự từ điển tăng dần. </p>

<p>Chú ý: </p>

<ul>
<li>Khi thống kê thì không phân biệt chữ hoa, chữ thường.</li>
<li>Bỏ qua các dấu câu đã liệt kê ở trên khi tách từ</li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N không quá 1000 và số K (1 &lt; K &lt; 50). </p>

<p>Tiếp theo là N dòng mô tả văn bản. Mỗi dòng không quá 500 ký tự. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách các từ (ở dạng in thường) xuất hiện ít nhất K lần trong dữ liệu vào. Danh sách được sắp xếp theo thứ tự số lần xuất hiện giảm dần. Trong trường hợp số lần xuất hiện bằng nhau thì liệt kê theo thứ tự từ điển tăng dần. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
</tr>
<tr>
<td>
<div>3 2</div>

<div>PTIT duy tri hoc phi on dinh nam 2019 va khong tang trong nam 2020-2021 va 2021-2022! </div>

<div>Khi dich benh xuat hien PTIT trich hon 6 ty dong ho tro sinh vien PTIT</div>

<div>voi muc ho tro 500000 dong/sinh vien PTIT.</div>
</td>
</tr>
<tr>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>ptit 4</div>

<div>2021 2</div>

<div>dong 2</div>

<div>ho 2</div>

<div>nam 2</div>

<div>sinh 2</div>

<div>tro 2</div>

<div>va 2</div>

<div>vien 2</div>
</td>
</tr>
</tbody>
</table>



---

## PY03006 - THỐNG KÊ TỪ KHÁC NHAU KHÔNG CHỨA CHỮ SỐ

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho một đoạn văn bản có N dòng trong đó có thể có các dấu câu như dẩy phẩy (,) dấu chấm (.) dấu chấm hỏi (?) dấu chấm cảm (!) dấu hai chấm (:) dấu chấm phẩy (;) dấu ngoặc đơn, dấu gạch ngang (-), dấu gạch chéo (/).&nbsp; </p>

<p>Hãy liệt kê các từ khác nhau xuất hiện trong đoạn văn bản theo thứ tự số lần xuất hiện giảm dần. </p>

<p>Chú ý: </p>

<ul>
<li>Khi thống kê thì không phân biệt chữ hoa, chữ thường.</li>
<li>Bỏ qua các dấu câu đã liệt kê ở trên khi tách từ</li>
<li>Tất cả các chữ số không được xem xét khi đếm. Nếu trong một từ có chữ số thì các chữ số đó cũng sẽ bị bỏ qua.</li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N không quá 1000. </p>

<p>Tiếp theo là N dòng mô tả văn bản. Mỗi dòng không quá 500 ký tự. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách các từ (ở dạng in thường) theo thứ tự số lần xuất hiện giảm dần. </p>

<p>Trong trường hợp số lần xuất hiện bằng nhau thì liệt kê theo thứ tự từ điển tăng dần. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>PTIT duy tri hoc phi on dinh nam 2019 va khong tang trong nam 2020-2021 va 2021-2022! </div>

<div>Khi dich benh xuat hien PTIT trich hon 6 ty dong ho tro sinh vien PTIT</div>

<div>voi muc ho tro 500000 dong/sinh vien PTIT.</div>
</td>
</tr>
<tr>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>ptit 4</div>

<div>dong 2</div>

<div>ho 2</div>

<div>nam 2</div>

<div>sinh 2</div>

<div>tro 2</div>

<div>va 2</div>

<div>vien 2</div>

<div>benh 1</div>

<div>dich 1</div>

<div>dinh 1</div>

<div>duy 1</div>

<div>hien 1</div>

<div>hoc 1</div>

<div>hon 1</div>

<div>khi 1</div>

<div>khong 1</div>

<div>muc 1</div>

<div>on 1</div>

<div>phi 1</div>

<div>tang 1</div>

<div>tri 1</div>

<div>trich 1</div>

<div>trong 1</div>

<div>ty 1</div>

<div>voi 1</div>

<div>xuat 1</div>
</td>
</tr>
</tbody>
</table>



---

## PY03007 - XỬ LÝ VĂN BẢN

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 1</small>

<p>Cho dữ liệu vào là luồng văn bản bất kỳ, gồm các ký tự viết hoa, viết thường, các ký tự số và các dấu câu, không có các ký tự đặc biệt khác. Người ta muốn tách văn bản thành các câu. Mỗi câu in trên một dòng. </p>

<p>Một câu được định nghĩa là dãy ký tự có <em>ít nhất 1 ký tự chữ cái hoặc chữ số</em>, không chứa các dấu ngắt câu gồm: dấu chấm (.), dấu chấm hỏi (?) và dấu chấm cảm (!). Dấu phẩy (,) và dấu hai chấm (:) không được coi là dấu ngắt câu. </p>

<p>Nhiệm vụ của bạn là in ra mỗi câu trên một dòng, ký tự đầu câu viết hoa, các ký tự khác viết thường, các từ cách nhau đúng một khoảng trống. Không có khoảng trống ở đầu và cuối câu, và không in ra các dấu ngắt câu. </p>

<p><strong>Dữ liệu vào</strong></p>

<p>Gồm một luồng văn bản không quá 100 dòng, mỗi dòng không quá 200 ký tự. </p>

<p><strong>Kết quả</strong></p>

<p>In ra các câu, mỗi câu trên một dòng theo quy tắc đã cho. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
</tr>
<tr>
<td>
<div>ky thi LAP TRINH ICPC PTIT&nbsp; bat dau to chuc&nbsp;&nbsp;&nbsp;&nbsp; tu&nbsp;&nbsp;&nbsp;&nbsp; nam 2010. nhu vay, nam nay la&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; tron 10 nam!</div>

<div>&nbsp;&nbsp;&nbsp; vay CO PHAI NAM NAY LA KY THI LAN THU 10?&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp; khong phai! nam nay la KY THI LAN THU 11.</div>
</td>
</tr>
<tr>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>Ky thi lap trinh icpc ptit bat dau to chuc tu nam 2010 </div>

<div>Nhu vay, nam nay la tron 10 nam</div>

<div>Vay co phai nam nay la ky thi lan thu 10</div>

<div>Khong phai</div>

<div>Nam nay la ky thi lan thu 11</div>
</td>
</tr>
</tbody>
</table>



---

## PY03008 - ĐỒ THỊ HÌNH SAO

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Một đơn đồ thị vô hướng được gọi là Hình Sao nếu có một đỉnh có thể nối đến tất cả các đỉnh còn lại, còn các đỉnh khác thì không có cạnh nối với nhau. </p>

<p>Cho mô tả một đơn đồ thị vô hướng N đỉnh với đúng N-1 cạnh. Hãy kiểm tra xem đồ thị đó có phải dạng Hình Sao hay không. </p>

<p><strong>Dữ liệu vào</strong></p>

<ul>
<li>Dòng đầu tiên ghi số N là số đỉnh của đồ thị (1 ≤ N ≤ 10<sup>5</sup>). </li>
<li>N-1 dòng tiếp theo, mỗi dòng ghi ra một cặp (u,v) là cạnh của đồ thị. Dữ liệu đảm bảo u ≠ v.</li>
</ul>

<p><strong>Kết quả </strong></p>

<ul>
<li>Ghi ra trên một dòng chữ <strong>“Yes”</strong> nếu đồ thị là Hình Sao; chữ <strong>“No”</strong> trong trường hợp ngược lại. </li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5<br>
1 2<br>
1 3<br>
1 4<br>
1 5</div>
</td>
<td>
<div>Yes</div>
</td>
</tr>
</tbody>
</table>

<div>&nbsp;</div>



---

## PY03012 - BẢNG XẾP HẠNG

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 1</small>

<p>Trên cổng thực hành trực tuyến của&nbsp;Học viện Công nghệ Bưu chính Viễn thông có danh sách sinh viên trong lớp được xếp hạng để đánh giá kết quả. Mỗi sinh viên có họ tên, số bài làm đúng, tổng số lượt submit. Hãy sắp xếp danh sách sinh viên để có bảng xếp hạng môn học</p>

<p>Thứ tự sắp xếp như sau:</p>

<ul>
<li>Sinh viên có số bài làm đúng nhiều hơn xếp trước, nếu có cùng số bài làm đúng thì ưu tiên sinh viên có số lượt submit ít hơn.</li>
<li>Sinh viên có cùng hạng, xếp họ tên ưu tiên theo thứ tự từ điển lên trước.</li>
</ul>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên đưa vào sĩ số lớp N.</p>

<p>Những dòng kế tiếp đưa vào N sinh viên. Mỗi sinh viên gồm 2 dòng dữ liệu, dòng thứ nhất là họ tên của sinh viên (S) <em>đã được chuẩn hóa</em>, dòng thứ hai gồm hai số nguyên liên tiếp C là số bài làm đúng, T là số lượt submit.</p>

<p>N, S thỏa mãn ràng buộc: 1≤ N ≤100; 1≤ Length(S)≤100</p>

<p>C, T thỏa mãn ràng buộc C&lt;500, T &lt; 10<sup>9</sup></p>

<p><strong>Output</strong></p>

<p>Đưa ra bảng xếp hạng danh sách sinh viên đã sắp xếp</p>

<p>Ví dụ</p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output:</div>
</td>
</tr>
<tr>
<td>
<div>2<br>
Nguyen Van Nam<br>
168 600<br>
Tran Thi Ngoc<br>
168 600</div>
</td>
<td>
<div>Nguyen Van Nam 168 600<br>
Tran Thi Ngoc 168 600</div>
</td>
</tr>
</tbody>
</table>

---

## PY03013 - ĐẾM CHỮ SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho 2 số nguyên A, B. Nhiệm vụ của bạn là hãy đếm xem mỗi chữ số sẽ xuất hiện bao nhiêu lần nếu như liệt kê tất cả các số từ A đến B.</p>

<p><strong>Input</strong></p>

<ul>
<li>Số đầu tiên là số lượng bộ test T (T ≤ 5000). Mỗi test gồm 2 số nguyên A và B.</li>
</ul>

<p><strong>Output</strong></p>

<ul>
<li>Với mỗi test, hãy in ra trên một dòng 10 số nguyên, là tần số xuất hiện của các chữ số từ 0 đến 9.</li>
</ul>

<p><strong>Example</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>1 9</div>

<div>10 456</div>

<div>123 2437</div>

<div>&nbsp;</div>
</td>
<td>
<div>0 1 1 1 1 1 1 1 1 1</div>

<div>85 195 195 195 152 92 85 84 84 84</div>

<div>661 1738 1206 770 700 662 662 662 661 661</div>
</td>
</tr>
</tbody>
</table>

<p><strong>Subtask 1: </strong>50% số test đầu tiên, 1 ≤ A ≤ B ≤ 10<sup>4</sup>.</p>

<p><strong>Subtask 2:</strong> 50% số test còn lại, 1 ≤ A ≤ B ≤ 10<sup>8</sup>.</p>

---

## PY03014 - BIỂU THỨC

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho một biểu thức đúng, tức là các dấu ngoặc đơn đều đầy đủ mở và đóng, đảm bảo đúng thứ tự. Hãy viết chương trình đánh số các cặp dấu ngoặc theo thứ tự xuất hiện, tính từ 1. </p>

<p>Ví dụ với biểu thức&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; (a + (b *c) ) + (d/e)</p>

<p>ta có thứ tự của các cặp ‘(‘, ‘)’ là&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1&nbsp; 2&nbsp; 2&nbsp; 1&nbsp; 3&nbsp; 3</p>

<p><strong>Input</strong>:</p>

<ul>
<li>Dòng đầu tiên đưa vào số lượng bộ test T (không quá 100).</li>
<li>Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một biểu thức số học được đưa vào trên một dòng, độ dài không quá 10<sup>6</sup>.</li>
</ul>

<p><strong>Output</strong>:</p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p>&nbsp;<strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>&nbsp;<strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>(a + (b *c) ) + (d/e)</div>

<div>( ( () ) ( () ) )</div>
</td>
<td>
<div>1&nbsp; 2&nbsp; 2&nbsp; 1&nbsp; 3&nbsp; 3</div>

<div>1 2&nbsp; 3&nbsp; 3&nbsp; 2&nbsp; 4&nbsp; 5&nbsp; 5&nbsp; 4&nbsp; 1</div>
</td>
</tr>
</tbody>
</table>



---

## PY03015 - CHIA CẮT ĐỒ THỊ

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<p>Cho đồ thị vô hướng G có N đỉnh và M cạnh. Hãy tìm đỉnh u sao cho nếu loại bỏ đỉnh u ra khỏi đồ thị thì đồ thị bị chia cắt thành nhiều thành phần liên thông nhất. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, mỗi bộ test gồm: </p>

<ul>
<li>
<ul>
<li>Dòng đầu ghi số N là số đỉnh (1 &lt; N &lt; 100) và số M là số cạnh (M &lt; N*(N-1)/2).</li>
<li>M dòng tiếp theo ghi các cạnh của đồ thị. </li>
</ul>
</li>
</ul>

<p><strong>Output</strong></p>

<p>Ghi ra thứ tự đỉnh (tính từ 1) thỏa mãn nếu loại bỏ đỉnh đó ra khỏi đồ thị thì sẽ chia cắt ra nhiều thành phần liên thông nhất. </p>

<p>Nếu có nhiều hơn 1 đỉnh thỏa mãn thì in ra thứ tự đỉnh nhỏ nhất. </p>

<p>Nếu không thể chia cắt được đồ thị thì ghi ra 0.</p>

<p><strong>Ví dụ </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>5 5</div>

<div>1 2</div>

<div>1 3</div>

<div>2 3</div>

<div>3 4</div>

<div>3 5</div>

<div>5 7</div>

<div>1 2</div>

<div>1 3</div>

<div>2 3</div>

<div>2 5</div>

<div>3 4</div>

<div>3 5</div>

<div>4 5</div>
</td>
<td>
<div>3</div>

<div>0</div>
</td>
</tr>
</tbody>
</table>



---

## PY03016 - ĐẾM CẶP SỬ DỤNG STACK

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<p>Cho dãy số nguyên A[]. Với mỗi giá trị A[i], các bạn đã biết ngăn xếp có thể được sử dụng để tìm phần tử đầu tiên bên phải hoặc đầu tiên bên trái lớn hơn giá trị A[i].</p>

<p>Bài toán đặt ra&nbsp;như sau: hãy đếm xem có bao nhiêu cặp (i,j) với i&lt;j thỏa mãn từ&nbsp;vị trí i đến vị trí j&nbsp;không có số nào lớn hơn A[i] hoặc A[j]. Tất nhiên&nbsp;các cặp (i,i+1) luôn thỏa mãn.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số N là số phần tử của A[] (1 &lt; N &lt; 500.000).</p>

<p>Tiếp theo là N dòng, mỗi dòng ghi 1 số nguyên dương là các phần tử của dãy A, các số đều không quá 9 chữ số.</p>

<p><strong>Output</strong></p>

<p>Ghi ra số cặp (i,j) đếm được.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>7</div>

<div>2</div>

<div>4</div>

<div>1</div>

<div>2</div>

<div>2</div>

<div>5</div>

<div>1</div>
</td>
<td>
<div>10</div>
</td>
</tr>
</tbody>
</table>

<p><strong><em>Giải thích test ví dụ:</em></strong>&nbsp;<em>Các cặp thỏa mãn (với chỉ số tính từ 1) là: (1,2); (2,3); (2,4); (2,5); (2,6); (3,4); (4,5); (4,6); (5,6); (6,7).</em></p>

---

## PY03018 - SỐ BƯỚC DI CHUYỂN ÍT NHẤT

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<p>Cho ma trận A&nbsp;kích thước N*M.</p>

<p>Hãy tìm&nbsp;<strong>số bước đi ít nhất</strong>&nbsp;để di chuyển&nbsp;từ vị trí A[1][1] đến vị trí A[N][M].</p>

<p>Biết&nbsp;rằng&nbsp;mỗi bước&nbsp;từ vị trí (i, j)&nbsp;ta&nbsp;có thể di&nbsp;chuyển&nbsp;theo một trong ba hướng:</p>

<ul>
<li>Hướng xuống dưới với số ô di chuyển là hiệu hai giá trị A[i][j] và A[i+1][j]</li>
<li>Hướng sang phải với số ô di chuyển là hiệu hai giá trị A[i][j] và A[i][j+1]</li>
<li>Hướng chéo xuống với số ô di chuyển là hiệu của hai giá trị A[i][j] và A[i+1][j+1]</li>
</ul>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào số lượng test T.</li>
<li>Dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số N, M; phần thứ hai là các phần tử của ma trận A[][]; các số được viết cách nhau một vài khoảng trống.</li>
<li>T, N, M, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M, A[i][j]≤10<sup>3</sup>.</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
<li>Nếu không tìm được đường đi ghi ra -1</li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>3&nbsp;3</div>

<div>2&nbsp;1&nbsp;2</div>

<div>1&nbsp;2&nbsp;4</div>

<div>1&nbsp;3&nbsp;2</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PY0314 - XẾP NHÓM

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<p>Có N quốc gia, mỗi quốc gia có dân số xác định. Hãy xác định có thể xếp được tối đa bao nhiêu nhóm có đúng k thành viên mà các thành viên từ các nước khác nhau.</p>

<p><strong>Input:</strong></p>

<p>Gồm nhiều test (không quá 20), mỗi test có định dạng như sau:</p>

<p>Dòng đầu tiên chứa số nguyên N và k(1 ≤ k ≤ N ≤ 10<sup>5</sup>): </p>

<p>Dòng tiếp theo chứa N số nguyên không âm là dân số từng nước, các giá trị này không vượt quá 10<sup>12</sup></p>

<p><strong>Ouput</strong></p>

<p>Với mỗi test, in ra 1 số nguyên là đáp án của bài toán.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>INPUT</strong></div>
</td>
<td>
<div><strong>OUTPUT</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>5 4</div>

<div>4 4 4 4 4</div>

<div>6 5</div>

<div>1 2 3 4 5 6</div>

<div>2 2</div>

<div>1000000000000 1000000000000</div>

<div>17 7</div>

<div>96 17 32 138 112 50 7 19 412 23 14 50 47 343 427 22 39</div>

<div>50 10</div>

<div>638074479 717901019 910893151 924124222 991874870 919392444 729973192 607898881 838529741 907090878 632877562 678638852 749258866 949661738 784641190 815740520 689809286 711327114 658017649 636727234 871088534 964608547 867960437 964911023 642411618 868318236 793328473 849540177 960039699 998262224 775720601 634685437 743766982 826321850 846671921 712570181 676890302 814283264 958273130 899003369 909973864 921987721 978601888 633027021 896400011 725078407 662183572 629843174 617774786 695823011</div>
</td>
<td>
<div>5</div>

<div>3</div>

<div>1000000000000</div>

<div>166</div>

<div>3983180234</div>
</td>
</tr>
</tbody>
</table>



---

## PY04001 - LỚP POINT

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Khai báo lớp Point (điểm trong không gian hai chiều) với hai thuộc tính là tọa độ x và tọa độ y (số thực). </p>

<p>nhập vào hai điểm p1, p2 và tính khoảng cách hai điểm đó.&nbsp;</p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu ghi số bộ test, không quá 20.</li>
<li>Mỗi bộ test có 4 số thực lần lượt là tọa độ của 2 điểm A và B, giá trị tuyệt đối không quá 1000. &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</li>
</ul>

<p><strong>Ouput</strong></p>

<p>Với mỗi bộ test, viết ra khoảng cách giữa 2 điểm với 4 chữ số phần thập phân.&nbsp;</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>0 0 0 5</div>

<div>0 199 5 6</div>
</td>
<td>
<div>5.0000</div>

<div>193.0648</div>
</td>
</tr>
</tbody>
</table>

---

## PY04002 - LỚP RECTANGLE

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Khai báo lớp Rectangle với 3 thuộc tính: </p>

<ul>
<li>Chiều dài: số nguyên</li>
<li>Chiều rộng: số nguyên</li>
<li>Màu sắc: xâu ký tự</li>
</ul>

<p>Nhập vào giá trị độ dài hai cạnh của hình chữ nhật và màu sắc. In ra thông tin về chu vi, diện tích và màu sắc (đã đưa về dạng chuẩn trong đó ký tự đầu viết hoa, các ký tự sau viết thường) của hình chữ nhật đó.</p>

<p><strong>Input</strong></p>

<p>Gồm 2 số nguyên là độ dài 2 cạnh hình chữ nhật và một xâu ký tự (không có khoảng trống) mô tả màu sắc.</p>

<p><strong>Output</strong></p>

<p>Nếu hình chữ nhật là hợp lệ (các cạnh đều nguyên dương) thì in ra 3 thông tin: chu vi, diện tích, màu sắc, mỗi thông tin cách nhau một khoảng trống.</p>

<p>Nếu dữ liệu không hợp lệ in ra INVALID</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10 2 RED</div>
</td>
<td>
<div>24 20 Red</div>
</td>
</tr>
</tbody>
</table>

---

## PY04003 - LỚP PHÂN SỐ - 1

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Khai báo lớp Phân số gồm hai thuộc tính tử số và mẫu số. Các giá trị đều nguyên dương và không quá 18 chữ số.</p>

<p>Nhập vào một phân số và in ra phân số đó ở dạng tối giản.</p>

<p><strong>Input</strong></p>

<p>Có hai số nguyên dương lần lượt là tử số và mẫu số.</p>

<p><strong>Output</strong></p>

<p>Ghi ra phân số tối giản như trong ví dụ</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>123 456</div>
</td>
<td>
<div>41/152</div>
</td>
</tr>
</tbody>
</table>

---

## PY04004 - LỚP PHÂN SỐ - 2

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Khai báo lớp Phân số gồm hai thuộc tính tử số và mẫu số. Các giá trị đều nguyên dương và không quá 18 chữ số.</p>

<p>nhập vào hai phân số p và q. Tính tổng p + q, rút gọn và in ra kết quả.</p>

<p><strong>Input</strong></p>

<p>Có bốn số nguyên dương lần lượt là tử số và mẫu số của p rồi đến q.</p>

<p><strong>Output</strong></p>

<p>Ghi ra phân số tổng p + q ở dạng tối giản như trong ví dụ</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>123 456 12 34</div>
</td>
<td>
<div>1609/2584</div>
</td>
</tr>
</tbody>
</table>

---

## PY04005 - LỚP TRIANGLE - 1

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Sử dụng lớp Point đã có trong bài 1, khai báo lớp Triangle với thuộc tính là 3 điểm. Viết các phương thức phù hợp để tính chu vi tam giác. </p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu ghi số bộ test, không quá 10</li>
<li>Mỗi bộ test ghi trên 1 dòng 6 số thực có giá trị tuyệt đối không quá 1000 lần lượt là tọa độ của 3 điểm.&nbsp;</li>
</ul>

<p><strong>Output</strong></p>

<ul>
<li>Nếu 3 điểm không thể tạo thành tam giác thì in ra INVALID</li>
<li>Nếu 3 điểm tạo thành 1 tam giác thì in ra chu vi của tam giác đó, làm tròn đến 3 chữ số phần thập phân.</li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>0 0 0 5 0 199</div>

<div>1 1 1 1 1 1</div>

<div>0 0 0 5 5 0</div>
</td>
<td>
<div>INVALID</div>

<div>INVALID</div>

<div>17.071</div>
</td>
</tr>
</tbody>
</table>

---

## PY04006 - LỚP TRIANGLE - 2

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Sử dụng lớp Point đã có trong bài 1, khai báo lớp Triangle với thuộc tính là 3 điểm. Viết các phương thức phù hợp để tính diện tích tam giác.</p>

<p><em>Công thức Heron tính diện tích tam giác khi biết độ dài 3 cạnh là a,b,c:</em></p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu ghi số bộ test, không quá 10</li>
<li>Mỗi bộ test ghi trên 1 dòng 6 số thực có giá trị tuyệt đối không quá 1000 lần lượt là tọa độ của 3 điểm.&nbsp;</li>
</ul>

<p><strong>Output</strong></p>

<ul>
<li>Nếu 3 điểm không thể tạo thành tam giác thì in ra INVALID</li>
<li>Nếu 3 điểm tạo thành 1 tam giác thì in ra diện tích của tam giác đó, làm tròn đến 2 chữ số phần thập phân.</li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>0 0 0 5 0 199</div>

<div>1 1 1 1 1 1</div>

<div>0 0 0 5 5 0</div>
</td>
<td>
<div>INVALID</div>

<div>INVALID</div>

<div>12.50</div>
</td>
</tr>
</tbody>
</table>

---

## PY04007 - LỚP MATRIX - 1

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Khai báo lớp Matrix mô tả ma trận các số nguyên với các thuộc tính là kích thước ma trận và mảng hai chiều lưu các phần tử.</p>

<p>Nhập&nbsp;ma trận a cấp n*m. Hãy viết chương trình tính tích của a với ma trận chuyển vị của a.&nbsp;&nbsp;&nbsp;&nbsp;</p>

<p><strong>Input:&nbsp;</strong>Dòng đầu tiên ghi số bộ test. </p>

<p>Với mỗi bộ test: </p>

<ul>
<li>Dòng đầu tiên ghi hai số n và m là bậc của ma trân a; </li>
<li>n dòng tiếp theo, mỗi dòng ghi m&nbsp; số của một dòng trong ma trận. n và m đều nguyên dương và nhỏ hơn 50. Các giá trị trong ma trận không vượt quá 100.&nbsp;</li>
</ul>

<p><strong>Output:&nbsp;</strong>Với mỗi bộ test ghi ra ma trận tích tương ứng, mỗi số cách nhau đúng một khoảng trống.&nbsp;</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>2&nbsp; 2</div>

<div>1&nbsp; 2</div>

<div>3&nbsp; 4</div>
</td>
<td>
<div>5 11</div>

<div>11 25</div>
</td>
</tr>
</tbody>
</table>

---

## PY04008 - LỚP MATRIX - 2

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Khai báo lớp Matrix mô tả ma trận các số nguyên với các thuộc tính là kích thước ma trận và mảng hai chiều lưu các phần tử.</p>

<p>Nhập&nbsp;ma trận a cấp n*m. Hãy viết chương trình tính tích của a với ma trận chuyển vị của a.&nbsp;&nbsp;&nbsp;&nbsp;</p>

<p><strong>Input:&nbsp;</strong>Dòng đầu tiên ghi số bộ test. </p>

<p>Với mỗi bộ test: </p>

<ul>
<li>Dòng đầu tiên ghi hai số n và m là bậc của ma trân a; </li>
<li>n dòng tiếp theo, mỗi dòng ghi m&nbsp; số của một dòng trong ma trận. n và m đều nguyên dương và nhỏ hơn 50. Các giá trị trong ma trận không vượt quá 100.&nbsp;</li>
</ul>

<p><strong>Output:&nbsp;</strong>Với mỗi bộ test ghi ra ma trận tích tương ứng, mỗi số cách nhau đúng một khoảng trống.&nbsp;</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>2&nbsp; 2</div>

<div>1&nbsp; 2</div>

<div>3&nbsp; 4</div>
</td>
<td>
<div>5 11</div>

<div>11 25</div>
</td>
</tr>
</tbody>
</table>

---

## PY04009 - LỚP SỐ PHỨC

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Khai báo lớp Số phức với hai thuộc tính là phần thực và phần ảo. </p>

<p>Viết chương trình thực hiện nhập hai số phức A, B và thực hiện các thao tác tính toán trên số phức</p>

<ul>
<li>C = (A + B) x A</li>
<li>D = (A + B)<sup>2</sup></li>
</ul>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số bộ test T (T &lt;= 100)</p>

<p>T dòng tiếp theo mỗi dòng gồm 4 số lần lượt là a, b, c, d, với -10<sup>2</sup>&nbsp;&lt; a, b, c, d &lt; 10<sup>2</sup>.</p>

<p><strong>Output:</strong></p>

<p>Kết quả của hai phép tính theo định dạng trong ví dụ</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3<br>
1 2 3 4<br>
2 3 4 5<br>
1 -2 5 -6</div>
</td>
<td>
<div>-8 + 14i, -20 + 48i<br>
-12 + 34i, -28 + 96i<br>
-10 - 20i, -28 - 96i</div>
</td>
</tr>
</tbody>
</table>

---

## PY04010 - LỚP THÍ SINH - 1

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Viết chương trình khai báo lớp Thí Sinh gồm các thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3 và Tổng điểm.</p>

<p>Đọc thông tin 1 thí sinh từ bàn phím và in ra màn hình 3 thông tin: Họ tên, Ngày sinh, Tổng điểm.</p>

<p><strong>Input</strong></p>

<p>Gồm 5 dòng lần lượt, mỗi dòng ghi 1 thông tin: Họ tên, Ngày sinh, Điểm môn 1, Điểm môn 2, Điểm môn 3. Họ tên không quá 50 chữ cái, Ngày sinh viết đúng chuẩn dd/mm/yyyy. Các giá trị điểm là số thực (float).</p>

<p><strong>Output</strong></p>

<p>Ghi ra Họ tên, Ngày sinh và Tổng điểm. Mỗi thông tin cách nhau một khoảng trống. Điểm được ghi ra với 1 số sau dấu phẩy.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>Nguyen Hoang Ha</div>

<div>11/10/2001</div>

<div>4.5</div>

<div>10.0</div>

<div>5.5</div>
</td>
<td>
<div>Nguyen Hoang Ha 11/10/2001 20.0</div>
</td>
</tr>
</tbody>
</table>

---

## PY04011 - LỚN HƠN – NHỎ HƠN

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Để kiểm tra tư duy của các thành viên, câu lạc bộ IT PTIT ra một đề toán logic trong đó các tên thành viên trong CLB được sử dụng để đưa vào phép các phép so sánh. Chỉ có hai phép so sánh được sử dụng là <em>lớn hơn</em> và <em>nhỏ hơn</em>. </p>

<p>Cho trước một dãy các phép so sánh, hãy chỉ ra liệu có thể tất cả các phép so sánh đó đều đúng hay không? </p>

<p><strong>Dữ liệu vào</strong></p>

<ul>
<li>Dòng đầu ghi số N là số phép so sánh. (1 ≤ N ≤ 10<sup>5</sup>). </li>
<li>Mỗi phép so sánh gồm 2 tên thành viên và một dấu lớn hơn hoặc nhỏ hơn, mỗi cái tên là một dãy ký tự không quá 20 chữ cái, không có khoảng trống. </li>
</ul>

<p><strong>Kết quả</strong></p>

<ul>
<li>Ghi ra <strong>“possible”</strong> nếu tất cả phép so sánh đều có thể đúng hoặc <strong>“impossible”</strong> nếu ngược lại. </li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>An &gt; Binh</div>

<div>Binh &gt; Cong</div>

<div>An &lt; Cong</div>
</td>
<td>
<div>impossible</div>

<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>An &gt; Binh</div>

<div>Binh &gt; Cong</div>

<div>An &gt; Cong</div>
</td>
<td>
<div>possible</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PY04012 - TÍNH ĐIỂM CHUYÊN CẦN

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 2</small>

<p>Lớp học phần môn XYZ của trường ABC có không quá 100 sinh viên. Danh sách sinh viên gồm các thông tin: mã sinh viên, họ tên, lớp. Môn học có 10 buổi. Dữ liệu điểm danh với mỗi sinh viên được cho bởi một xâu ký tự gồm 10 ký tự trong đó: x là có mặt, m là đến muộn, v là vắng.</p>

<p>Với điểm chuyên cần tối đa là 10. Giả sử mỗi buổi vắng bị trừ 2 điểm, mỗi buổi đến muộn bị trừ 1 điểm. Hãy tính điểm chuyên cần cho mỗi sinh viên (tất nhiên nếu tính ra điểm âm thì ghi vào bảng điểm vẫn là 0).</p>

<p>Nếu điểm bằng 0 thì in thêm ghi chú KDDK (tức là không đủ điều kiện dự thi hết môn).</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số n là số sinh viên. Mỗi sinh viên ghi trên 3 dòng lần lượt là mã sinh viên, họ tên, lớp.</p>

<p>Tiếp theo là n dòng ghi dữ liệu điểm danh. Mỗi dòng gồm mã sinh viên, sau đó là một khoảng trống rồi đến xâu ký tự điểm danh có đúng 10 chữ cái.</p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách điểm chuyên cần (theo đúng thứ tự ban đầu) gồm các thông tin:</p>

<ul>
<li>Mã sinh viên</li>
<li>Họ và tên</li>
<li>Lớp</li>
<li>Điểm chuyên cần</li>
<li>Ghi chú (nếu có)</li>
</ul>

<p>Mỗi thông tin cách nhau một khoảng trống.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>B19DCCN999</div>

<div>Le Cong Minh</div>

<div>D19CQAT02-B</div>

<div>B19DCCN998</div>

<div>Tran Truong Giang</div>

<div>D19CQAT02-B</div>

<div>B19DCCN997</div>

<div>Nguyen Tuan Anh</div>

<div>D19CQCN04-B</div>

<div>B19DCCN998 xxxmxmmvmx</div>

<div>B19DCCN997 xmxmxxxvxx</div>

<div>B19DCCN999 xvxmxmmvvm</div>
</td>
<td>
<div>B19DCCN999 Le Cong Minh D19CQAT02-B 0 KDDK</div>

<div>B19DCCN998 Tran Truong Giang D19CQAT02-B 4</div>

<div>B19DCCN997 Nguyen Tuan Anh D19CQCN04-B 6</div>
</td>
</tr>
</tbody>
</table>



---

## PY04013 - TÍNH TOÁN LƯỢNG MƯA

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Trong một ngày mưa nhiều, các trạm đo mưa hoạt động hết công suất. Tại mỗi trạm đo, các cơn mưa được ghi nhận thời điểm bắt đầu, thời điểm kết thúc và lượng mưa đo được. Một trạm mưa có thể có nhiều lần mưa trong ngày. </p>

<p>Hãy tính lượng mưa trung bình trong 1 giờ (60 phút) của từng trạm theo đúng thứ tự trong danh sách ban đầu. Chú ý để tính lượng mưa trung bình thì cần tính tất các lần đo mưa tại trạm đó. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số lượt đo lượng mưa. </p>

<p>Thông tin về một lần đo lượng mưa gồm 4 dòng:</p>

<ul>
<li>Tên trạm</li>
<li>Thời điểm bắt đầu mưa (hh:mm)</li>
<li>Thời điểm kết thúc mưa (hh:mm)</li>
<li>Lượng mưa đo được</li>
</ul>

<p>Số trạm đo khác nhau nhỏ hơn 10. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách các trạm khác nhau trong danh sách đo mưa và lượng mưa trung bình của từng trạm. </p>

<p>Thông tin trên mỗi dòng lần lượt gồm: </p>

<ul>
<li>Mã trạm đo (tính từ T01). Chú ý: nếu cùng tên trong danh sách đo thì cũng sẽ cùng mà trạm. </li>
<li>Tên trạm đo mưa</li>
<li>Lượng mưa trung bình trong 1 giờ tại mỗi trạm (tính chính xác đến 2 số phần thập phân). </li>
</ul>

<p>Các thông tin ghi cách nhau một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>Dong Anh </div>

<div>07:30 </div>

<div>08:00</div>

<div>60</div>

<div>Cau Giay</div>

<div>07:45</div>

<div>08:12</div>

<div>50</div>

<div>Soc Son</div>

<div>08:00</div>

<div>09:15</div>

<div>78</div>

<div>Dong Anh</div>

<div>18:50</div>

<div>20:00</div>

<div>88</div>

<div>Cau Giay</div>

<div>19:01</div>

<div>20:00</div>

<div>77</div>

<div>Soc Son</div>

<div>19:06</div>

<div>20:21</div>

<div>66</div>

<div>Dong Anh</div>

<div>21:00</div>

<div>21:40</div>

<div>49</div>

<div>Cau Giay</div>

<div>21:50</div>

<div>22:20</div>

<div>68</div>

<div>Dong Anh</div>

<div>22:15</div>

<div>23:45</div>

<div>30</div>

<div>Cau Giay</div>

<div>22:50</div>

<div>23:45</div>

<div>35</div>
</td>
<td>
<div>T01 Dong Anh 59.22</div>

<div>T02 Cau Giay 80.70</div>

<div>T03 Soc Son 57.60</div>
</td>
</tr>
</tbody>
</table>



---

## PY04014 - BẢNG ĐIỂM

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Trường THCS XYZ lập bảng điểm tổng kết cho học sinh. Có 10 môn học lần lượt gồm: Toán, Tiếng Việt, Ngoại ngữ, Vật lý, Hóa học, Sinh học, Lịch Sử, Địa, Giáo dục công dân và môn Công nghệ. Trong đó môn Toán và Tiếng Việt tính hệ số 2, các môn còn lại hệ số 1. </p>

<p>Học sinh được xếp hạng theo điểm trung bình: </p>

<ul>
<li>Từ 9 trở lên: loại XUAT SAC</li>
<li>Từ 8 đến 8.9: loại GIOI</li>
<li>Từ 7 đến 7.9: loại KHA</li>
<li>Từ 5 đến 6.9: loại TB</li>
<li>Dưới 5: loai YEU</li>
</ul>

<p>Hãy lập bảng điểm tổng kết và sắp xếp theo điểm trung bình giảm dần. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số học sinh (không quá 50). </p>

<p>Thông tin về mỗi học sinh có hai dòng: dòng đầu là họ tên (độ dài không quá 50), dòng thứ 2 gồm 10 số thực trong đoạn [0..10] lần lượt là điểm 10 môn theo đúng thứ tự đã mô tả. </p>

<p><strong>Output</strong></p>

<p>Danh sách đã sắp xếp được ghi ra bao gồm các thông tin: </p>

<ul>
<li>Mã học sinh (tự động gán tăng dần theo thứ tự nhập, bắt đầu là HS01)</li>
<li>Họ và tên</li>
<li>Điểm trung bình (với 1 chữ số phần thập phân)</li>
<li>Xếp loại</li>
</ul>

<p>Trong trường hợp điểm trung bình bằng nhau thì học sinh nào có mã học sinh nhỏ hơn sẽ xếp trên. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>Luu Thuy Nhi</div>

<div>9.3&nbsp; 9.0&nbsp; 7.1&nbsp; 6.5&nbsp; 6.2&nbsp; 6.0&nbsp; 8.2&nbsp; 6.7&nbsp; 4.8&nbsp; 5.5</div>

<div>Le Van Tam</div>

<div>8.0&nbsp; 8.0&nbsp; 5.5&nbsp; 9.0&nbsp; 6.8&nbsp; 9.0&nbsp; 7.2&nbsp; 8.3&nbsp; 7.2&nbsp; 6.8</div>

<div>Nguyen Thai Binh</div>

<div>9.0&nbsp; 6.4&nbsp; 6.0&nbsp; 7.5&nbsp; 6.7&nbsp; 5.5&nbsp; 5.0&nbsp; 6.0&nbsp; 6.0&nbsp; 6.0</div>
</td>
</tr>
<tr>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>HS02 Le Van Tam 7.7 KHA</div>

<div>HS01 Luu Thuy Nhi 7.3 KHA</div>

<div>HS03 Nguyen Thai Binh 6.6 TB</div>
</td>
</tr>
</tbody>
</table>



---

## PY04015 - LẬP HÓA ĐƠN - 1

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Tiền nước hàng tháng của thành phố ABC được tính theo đơn giá trong bảng sau: </p>

<p>Trong đó, phụ phí được hiểu là số tiền tính thêm (theo phần trăm) trên tổng số tiền nước tiêu thụ. </p>

<p>Cho danh sách khách hàng và chỉ số đồng hộ. Hãy sắp xếp danh sách hóa đơn theo tổng số tiền giảm dần. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số khách hàng (không quá 20). </p>

<p>Mỗi khách hàng viết trên 3 dòng gồm: </p>

<ul>
<li>Tên khách hàng (xâu ký tự độ dài không quá 50)</li>
<li>Chỉ số cũ</li>
<li>Chỉ số mới </li>
</ul>

<p>Trong đó chỉ số mới lớn hơn hoặc bằng chỉ số cũ, cả hai đều không quá 4 chữ số. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách khách hàng đã sắp xếp theo tổng tiền giảm dần gồm các thông tin</p>

<ul>
<li>Mã khách hàng (tự động gán tăng dần theo thứ tự nhập, bắt đầu từ KH01)</li>
<li>Tên khách hàng</li>
<li>Tổng số tiền (được làm tròn ở dạng số nguyên)</li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>Le Thi Thanh</div>

<div>468</div>

<div>500</div>

<div>Le Duc Cong</div>

<div>160</div>

<div>230</div>

<div>Ha Hue Anh</div>

<div>410</div>

<div>612</div>
</td>
<td>
<div>KH03 Ha Hue Anh 34545</div>

<div>KH02 Le Duc Cong 8240</div>

<div>KH01 Le Thi Thanh 3264</div>
</td>
</tr>
</tbody>
</table>



---

## PY04016 - LẬP HÓA ĐƠN - 2

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 2</small>

<p>Khách sạn XYZ có đơn giá (theo ngày) được quy định khác nhau theo từng tầng. Khách hàng đến thuê phòng sẽ được tính tổng số tiền ở theo đơn giá cộng thêm chi phí dịch vụ phát sinh nếu có. </p>

<p>Hãy giúp khách sạn tính tiền phải trả cho từng khách hàng và sắp xếp theo thứ tự tổng tiền giảm dần. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số khách hàng (không quá 20)</p>

<p>Mỗi khách hàng ghi trên 4 dòng gồm: </p>

<ul>
<li>Tên khách hàng (xâu ký tự độ dài không quá 100)</li>
<li>Số phòng</li>
<li>Ngày nhận phòng (định dạng dd/mm/yyyy)</li>
<li>Ngày trả phòng (định dạng dd/mm/yyyy)</li>
<li>Tiền dịch vụ phát sinh (số nguyên dương nhỏ hơn 100)</li>
</ul>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách đã được sắp xếp theo tổng tiền giảm dần bao gồm lần lượt các thông tin:</p>

<ul>
<li>Mã khách hàng (tự động tăng theo thứ tự nhập, tính từ KH01)</li>
<li>Tên khách hàng</li>
<li>Số phòng</li>
<li>Số ngày ở</li>
<li>Thành tiền</li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>Huynh Van Thanh&nbsp;&nbsp;&nbsp; </div>

<div>103&nbsp; </div>

<div>05/06/2010&nbsp;&nbsp;&nbsp; </div>

<div>05/06/2010&nbsp;&nbsp;&nbsp; </div>

<div>15</div>

<div>Le Duc Cong&nbsp;&nbsp; </div>

<div>106&nbsp; </div>

<div>08/03/2010&nbsp;&nbsp;&nbsp; </div>

<div>01/05/2010&nbsp;&nbsp;&nbsp; </div>

<div>220</div>

<div>Tran Thi Bich Tuyen&nbsp;&nbsp;&nbsp; </div>

<div>207&nbsp; </div>

<div>10/04/2010&nbsp;&nbsp;&nbsp; </div>

<div>21/04/2010&nbsp;&nbsp;&nbsp; </div>

<div>96</div>
</td>
<td>
<div>KH02 Le Duc Cong 106 55 1595</div>

<div>KH03 Tran Thi Bich Tuyen 207 12 504</div>

<div>KH01 Huynh Van Thanh 103 1 40</div>
</td>
</tr>
</tbody>
</table>



---

## PY04017 - TÍNH VẬN TỐC

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 2</small>

<p>Cuộc đua xe đạp bắt đầu từ <strong>6h00</strong> với độ dài quãng đường đua là <strong>120 Km</strong>. Các cua-rơ sẽ được ghi nhận thành tích dựa trên thời điểm đến đích. Hãy xếp hạng theo thứ tự thành tích giảm dần. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số cua-rơ tham gia cuộc đua. </p>

<p>Mỗi cua-rơ ghi trên 3 dòng:</p>

<ul>
<li>Họ tên (xâu ký tự độ dài không quá 50)</li>
<li>Đơn vị (xâu ký tự độ dài không quá 20)</li>
<li>Thời điểm đến đích theo định dạng h:mm</li>
</ul>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách đã sắp xêp theo thành tích, tốt hơn xếp trước, kém hơn xếp sau. </p>

<p>Thông tin mỗi cua-rơ bao gồm: </p>

<ul>
<li>Mã (là chữ cái đầu tiên của các từ trong tên đơn vị ghép với chữ cái đầu tiên các từ trong họ tên – xem ví dụ để hiểu rõ hơn)</li>
<li>Họ tên</li>
<li>Đơn vị</li>
<li>Vận tốc trung bình (đã làm tròn ra giá trị nguyên)</li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>Tran Vu Minh</div>

<div>Ha Noi</div>

<div>8:30</div>

<div>Vu Ngoc Hoang</div>

<div>Hoa Binh</div>

<div>8:20</div>

<div>Pham Dinh Tan</div>

<div>An Giang</div>

<div>8:45</div>
</td>
<td>
<div>HBVNH Vu Ngoc Hoang Hoa Binh 51 Km/h</div>

<div>HNTVM Tran Vu Minh Ha Noi 48 Km/h</div>

<div>AGPDT Pham Dinh Tan An Giang 44 Km/h</div>
</td>
</tr>
</tbody>
</table>



---

## PY04018 - XÁC ĐỊNH TRÚNG TUYỂN

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 2</small>

<p>Trường THPT ACB tuyển giáo viên mới cho ba môn Toán, Lý, Hóa. Theo yêu cầu mới, bài thi tuyển gồm 2 nội dung: Tin học và Chuyên môn. Điểm thi Tin học sẽ được nhân đôi khi tính tổng điểm. </p>

<p>Mỗi GV có thể có điểm ưu tiên được xét theo mã như trong bảng sau: </p>

<p>Mã xét tuyển gồm 2 thành phần. Chữ cái đầu tiên ứng với môn học: A là Toán, B là Lý và C là Hóa; tiếp theo là 1 chữ số thể hiện mã ưu tiên. </p>

<p>Tổng điểm sau khi cộng điểm ưu tiên nếu từ 18 trở lên sẽ được xét TRÚNG TUYỂN, nhỏ hơn sẽ bị LOẠI. </p>

<p>Viết chương trình nhập danh sách điểm thi và sắp xếp GV theo thứ tự tổng điểm giảm dần. Mã GV dự thi được tự động gán theo thứ tự bắt đầu từ 01. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu thi số giáo viên đăng ký thi tuyển (không quá 20). </p>

<p>Mỗi GV được viết trên 4 dòng gồm: </p>

<ul>
<li>Tên GV (xâu ký tự độ dài không quá 50)</li>
<li>Mã xét tuyển</li>
<li>Điểm tin học (số thực trong phạm vi 0 đến 10)</li>
<li>Điểm chuyên môn (số thực trong phạm vi 0 đến 10)</li>
</ul>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách đã sắp xếp. Thông tin mỗi GV gồm: Mã GV, Tên, Môn học, Tổng điểm (1 chữ số phần thập phân), Kết quả. Mỗi thông tin cách nhau một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>Le Van Binh</div>

<div>A1</div>

<div>7.0</div>

<div>3.0</div>

<div>Tran Van Toan</div>

<div>B3</div>

<div>4.0</div>

<div>7.0</div>

<div>Hoang Thi Tam</div>

<div>C2</div>

<div>7.0</div>

<div>6.0</div>
</td>
<td>
<div>GV03 Hoang Thi Tam HOA 21.5 TRUNG TUYEN</div>

<div>GV01 Le Van Binh TOAN 19.0 TRUNG TUYEN</div>

<div>GV02 Tran Van Toan LY 16.0 LOAI&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </div>
</td>
</tr>
</tbody>
</table>



---

## PY04019 - TUYỂN NHÂN VIÊN

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Doanh nghiệp X cần tuyển một số nhân viên mới. Bài thi tuyển có hai phần: lý thuyết và thực hành. Sau khi tính điểm trung bình, các thí sinh sẽ được xếp thành 4 loại: </p>

<ul>
<li>Nếu điểm dưới 5 -&gt; TRUOT</li>
<li>Nếu điểm lớn hơn hoặc bằng 5 nhưng nhỏ hơn 8 -&gt; CAN NHAC</li>
<li>Nếu điểm từ 8 đến 9.5 -&gt; DAT</li>
<li>Nếu điểm lớn hơn 9.5 -&gt; XUAT SAC</li>
</ul>

<p>Điểm các bài thi lý thuyết và thực hành đều là số thực trong phạm vi từ 0 đến 10. Tuy nhiên, khi nhập điểm các bài thi, cán bộ tuyển dụng có thể quên mất dấu . phân cách phần nguyên và phần thập phân. Do đó nếu điểm ghi là 78 thì cần được hiểu là 7.8</p>

<p>Hãy sắp xếp danh sách thí sinh đã được xếp loại theo điểm trung bình giảm dần. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số thí sinh. Mỗi thí sinh ghi trên 3 dòng lần lượt là: </p>

<ul>
<li>Họ và tên (xâu ký tự độ dài không quá 100)</li>
<li>Điểm lý thuyết</li>
<li>Điểm thực hành</li>
</ul>

<p>Mã thí sinh cần được tự động gán theo mẫu TS + số thứ tự (tính từ 01). </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách thí sinh đã sắp xếp, mỗi thí sinh gồm 4 thông tin: mã thí sinh, họ tên, điểm trung bình (với 2 số phần thập phân) và xếp loại. Mỗi thông tin cách nhau một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>Nguyen Thai Binh</div>

<div>45</div>

<div>75</div>

<div>Le Cong Hoa</div>

<div>4</div>

<div>4.5</div>

<div>Phan Van Duc</div>

<div>56</div>

<div>56</div>
</td>
<td>
<div>TS01 Nguyen Thai Binh 6.00 CAN NHAC</div>

<div>TS03 Phan Van Duc 5.60 CAN NHAC</div>

<div>TS02 Le Cong Hoa 4.25 TRUOT</div>
</td>
</tr>
</tbody>
</table>



---

## PY04020 - LẬP HÓA ĐƠN - 3

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 2</small>

<p>Cửa hàng điện máy – điện lạnh cần lập hóa đơn tính tiền cho khách hàng. Mỗi mặt hàng sẽ có đơn giá và một số tiền được gọi là chiết khấu trên tổng hóa đơn. Số tiền phải thanh toán sẽ bằng đơn giá * số lượng sau đó trừ đi tiền chiết khấu. </p>

<p>Hãy tính tiền cho từng hóa đơn và sắp xếp theo số tiền giảm dần. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số lượng hóa đơn. Không quá 20. </p>

<p>Mỗi thông tin hóa đơn gồm 5 dòng: </p>

<ul>
<li>Mã mặt hàng (xâu ký tự độ dài không quá 10, không có khoảng trống)</li>
<li>Tên mặt hàng (xâu ký tự độ dài không quá 100, có thể có khoảng trống)</li>
<li>Số lượng mua (không quá 50)</li>
<li>Đơn giá (số nguyên dương có thể đến 10 chữ số)</li>
<li>Tiền chiết khấu của hóa đơn (có thể đến 9 chữ số). </li>
</ul>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách hóa đơn đã sắp xếp, trong đó mỗi dòng gồm đầy đủ 6 thông tin: mã mặt hàng, tên mặt hàng, số lượng mua, đơn giá, chiết khấu và tổng tiền. Mỗi thông tin cách nhau một khoảng trống. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>ML01</div>

<div>May lanh SANYO</div>

<div>12</div>

<div>4000000</div>

<div>2400000</div>

<div>ML02</div>

<div>May lanh HITACHI</div>

<div>4</div>

<div>2550000000</div>

<div>0</div>

<div>ML03</div>

<div>May lanh&nbsp;NATIONAL</div>

<div>5</div>

<div>3000000</div>

<div>150000</div>
</td>
<td>
<div>ML02 May lanh HITACHI 4 2550000000 0 10200000000</div>

<div>ML01 May lanh SANYO 12 4000000 2400000 45600000</div>

<div>ML03 May lanh NATIONAL 5 3000000 150000 14850000</div>
</td>
</tr>
</tbody>
</table>



---

## PY04021 - TÍNH TOÁN THỜI GIAN

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 1</small>

<p>Quán Game mùa này vắng khách nên chủ quán quyết định tính tiền chi tiết đến từng phút. Dựa trên dữ liệu giờ vào và giờ ra, hãy tính thời gian chơi game của các Game thủ nhé. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu của dữ liệu vào ghi số lượng game thủ trong ngày (không quá 20). </p>

<p>Thông tin về một game thủ đến chơi game được ghi lại trên 4 dòng lần lượt là: </p>

<ul>
<li>Mã người chơi (xâu ký tự độ dài không quá 10, không có khoảng trống)</li>
<li>Tên người chơi (xâu ký tự độ dài không quá 100, có thể có khoảng trống). </li>
<li>Giờ vào (định dạng hh:mm)</li>
<li>Giờ ra (định dạng hh:mm)</li>
</ul>

<p><strong>Ouput</strong></p>

<p>Ghi ra danh sách game thủ đã được sắp xếp theo thời gian chơi game giảm dần. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>01T</div>

<div>Nguyen Van An</div>

<div>09:00</div>

<div>10:30</div>

<div>06T</div>

<div>Hoang Van Nam</div>

<div>15:30</div>

<div>18:00</div>

<div>02I</div>

<div>Tran Hoa Binh</div>

<div>09:05</div>

<div>10:00</div>
</td>
<td>
<div>06T&nbsp; Hoang Van Nam 2 gio 30 phut</div>

<div>01T&nbsp; Nguyen Van An 1 gio 30 phut</div>

<div>02I&nbsp; Tran Hoa Binh 0 gio 55 phut</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT037 - ĐỔI CƠ SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cơ số từ 2 đến 36 được xây dựng từ 10 chữ số (0 đến 9) và 26 chữ cái Tiếng Anh in hoa (‘A’ đến ‘Z’). </p>

<p>Hãy viết chương trình chuyển một số nguyên dương N trong cơ số 10 sang cơ số b. Trong đó N không quá 100.000, 2 ≤ b ≤ 36.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 10. </p>

<p>Mỗi bộ test ghi 2 số N và b. </p>

<p>Nlà một số nguyên dương N trong cơ số 10, không quá 100.000.&nbsp; 2 ≤ b ≤ 36</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test ghi ra kết quả đổi cơ số tương ứng.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Ouput</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>10 2</div>

<div>2021 2</div>

<div>31 16</div>
</td>
<td>
<div>1010</div>

<div>11111100101</div>

<div>1F</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT038 - HỆ CƠ SỐ 8

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho một số nhị phân, người ta nhận ra quy tắc đơn giản là chỉ cần xét lần lượt các cụm ba chữ số nhị phân tình từ cuối của số đó, sau đó chuyển lần lượt từng cụm sang giá trị thập phân tương ứng thì kết quả nhận được chính là biểu diễn của số đó trong hệ cơ số 8. Nếu cụm cuối cùng bị thiếu thì bổ sung các chữ số 0 cho đủ 3 chữ số. </p>

<p>Ví dụ: </p>

<p>11001100 =&gt; 011 | 001 | 100 =&gt; 314</p>

<p>Hãy áp dụng tính chất trên để chuyển đổi một số nhị phân (không quá 100 chữ số và luôn bắt đầu bởi chữ số 1) sang hệ cơ số 8. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một số nhị phân, không quá 100 chữ số</p>

<p><strong>Output</strong></p>

<p>Ghi ra kết quả trong hệ cơ số 8</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1010</div>
</td>
<td>
<div>12</div>
</td>
</tr>
<tr>
<td>
<div>11001100</div>
</td>
<td>
<div>314</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT039 - DÃY SỐ PHÙ HỢP

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho hai dãy số A[] và B[] có cùng N phần tử. Dãy số A[] được gọi là phù hợp với dãy số B[] khi và chỉ khi tồn tại một phép sắp đặt lại các phần tử trong A[] và B[] sao cho phần tử thứ i của A[] nhỏ hơn hoặc bằng phần tử thứ i của mảng B[] (với tất cả vị trí trong dãy). </p>

<p>Hãy xác định hai dãy số A[] và B[] có phù hợp với nhau hay không?</p>

<p><strong>Input</strong>: </p>

<p>Dòng đầu tiên đưa vào số lượng bộ test T (T≤100).</p>

<p>Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 phần: phần thứ nhất là số N; phần thứ hai là N số của A[]; phần thứ 3 là N số của B[].</p>

<p>(1≤N≤100, 0≤A[i], B[i]≤1000)</p>

<p><strong>Output:</strong></p>

<p>Đưa ra kết quả mỗi test theo từng dòng. Kết quả “YES” nếu A[] phù hợp với B[], ngược lại đưa ra “NO”.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4</div>

<div>7 5 3 2</div>

<div>5 4 8 7</div>

<div>8</div>

<div>7 5 3 2 5 105 45 10</div>

<div>2 4 0 5 6 9 75 84&nbsp; </div>
</td>
<td>
<div>YES</div>

<div>NO</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT041 - ĐẾM CẶP ĐỒNG XU

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho một lưới hình vuông kích thước N*N. Trên một số ô của lưới người ta đặt các đồng xu (ký hiệu bằng chữ cái C (coin)). Hãy đếm xem có thể lấy ra bao nhiêu cặp đồng xu ở cùng một hàng hoặc cùng một cột. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên ghi số N (1 ≤ N ≤ 100)</p>

<p>N dòng tiếp theo mô tả trạng thái của lưới, chữ cái C ứng với vị trí có đồng x, dấu chấm tương ứng với ô trống)</p>

<p><strong>Output</strong></p>

<p>Ghi ra số cặp đồng xu đếm được. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div>&nbsp;<strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>CC..</div>

<div>C..C</div>

<div>.CC.</div>

<div>.CC.</div>
</td>
<td>
<div>9</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT058 - ĐỈNH THẮT

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho đồ thị&nbsp;<strong>có&nbsp;hướng</strong>&nbsp;liên thông G có N đỉnh và M cạnh. Với một cặp đỉnh (u,v), đỉnh thắt của cặp đỉnh này được định nghĩa là một đỉnh mà tất cả đường đi từ u tới v đều đi qua nó.</p>

<p>Hãy đếm số đỉnh thắt với cặp đỉnh (u,v).</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test, không quá 100.</p>

<p>Mỗi bộ test bắt đầu với một dòng ghi 4 số N, M, u, v (0&lt; N &lt;= 100; 1 &lt; M &lt;=1000; 1 &lt;= u,v &lt;= N).</p>

<p>Tiếp theo là M dòng ghi các cạnh của đồ thị</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra số đỉnh thắt của cặp đỉnh (u,v)</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>5 7 1 3</div>

<div>1 2</div>

<div>2 4</div>

<div>2 5</div>

<div>3 1</div>

<div>3 2</div>

<div>4 3</div>

<div>5 4</div>

<div>4 5 1 4</div>

<div>1 2</div>

<div>1 3</div>

<div>2 3</div>

<div>2 4</div>

<div>3 4</div>
</td>
<td>
<div>2</div>

<div>0</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT059 - THÀNH PHẦN LIÊN THÔNG

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho đồ thị vô hướng G có N đỉnh, M cạnh.&nbsp;</p>

<p>Hãy liệt kê các đỉnh không cùng thành phần liên thông với một đỉnh cho trước.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi 3&nbsp;số N,&nbsp;M và X (0 &lt; N &lt; 300; 1 ≤ M ≤ N*(N-1)/2), 0 &lt; X &lt; N).</p>

<p>Tiếp theo là M dòng, mỗi dòng ghi một cạnh của đồ thị. Các cạnh được liệt kê với thứ tự bất kỳ.</p>

<p><strong>Output</strong></p>

<p>Ghi ra các đỉnh không liên thông với đỉnh X&nbsp;theo thứ tự tăng dần, mỗi dòng ghi một đỉnh. Nếu không có đỉnh nào thì ghi ra số 0.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4 2</div>

<div>1 3</div>

<div>2 3</div>

<div>1 2</div>

<div>4 5</div>
</td>
<td>
<div>4</div>

<div>5</div>

<div>6</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT060 - ĐỒ THỊ ĐẦY ĐỦ

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Một đồ thị được coi là <strong>đầy đủ</strong> nếu tất cả các cặp đỉnh đều có cạnh nối trực tiếp đến nhau. </p>

<p>Cho đồ thị vô hướng G với N đỉnh và M cạnh. </p>

<p>Giả sử mỗi bước người ta lấy một đỉnh rồi xóa tất cả các cạnh nối với đỉnh đó, sau đó&nbsp;thiết lập cạnh tới tất cả các đỉnh mà trước đó chưa kết nối với nó. </p>

<p>Hãy kiểm tra xem bằng cách này thì có thể đến một bước nào đó đồ thị trở thành <strong>đầy đủ</strong> hay không?</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số đỉnh N (không quá 1000)</p>

<p>Dòng thứ 2 ghi số M là số cạnh (M &lt; N*(N-1)/2)</p>

<p>Tiếp theo là M dòng, mỗi dòng ghi một cạnh của đồ thị. </p>

<p><strong>Output</strong></p>

<p>Ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>2</div>

<div>1 2</div>

<div>2 3</div>
</td>
<td>
<div>NO</div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>2<br>
1 3<br>
2 4</div>
</td>
<td>
<div>YES</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT064 - KHÔNG CÙNG THÀNH PHẦN LIÊN THÔNG

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho đồ thị vô hướng G có N đỉnh, M cạnh.&nbsp;</p>

<p>Hãy liệt kê các đỉnh không cùng thành phần liên thông với một đỉnh cho trước.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi 3&nbsp;số N,&nbsp;M và X (0 &lt; N &lt; 300; 1 ≤ M ≤ N*(N-1)/2), 0 &lt; X &lt; N).</p>

<p>Tiếp theo là M dòng, mỗi dòng ghi một cạnh của đồ thị. Các cạnh được liệt kê với thứ tự bất kỳ.</p>

<p><strong>Output</strong></p>

<p>Ghi ra các đỉnh không liên thông với đỉnh X&nbsp;theo thứ tự tăng dần, mỗi dòng ghi một đỉnh. Nếu không có đỉnh nào thì ghi ra số 0.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 4 2</div>

<div>1 3</div>

<div>2 3</div>

<div>1 2</div>

<div>4 5</div>
</td>
<td>
<div>4</div>

<div>5</div>

<div>6</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT065 - KIỂM TRA CHIA HẾT

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho ba số nguyên dương L, R và N. Viết chương trình đếm số lượng các số thỏa mãn cả hai điều kiện:</p>

<ul>
<li>Nằm trong đoạn [L, R].</li>
<li>Không chia hết cho bất kỳ số nào trong đoạn [2, N].</li>
</ul>

<p><strong>Input</strong></p>

<p>Với mỗi bộ test:</p>

<ul>
<li>
<ul>
<li>Dòng đầu gồm 2 số nguyên dương L, R (1 ≤ L, R ≤ 10<sup>18</sup>).</li>
<li>Dòng thứ 2 chứa số nguyên dương N (2 ≤ N ≤ 50).</li>
</ul>
</li>
</ul>

<p>Input kết thúc với một dòng chứa số nguyên -1.</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, in ra kết quả trong một dòng.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1 10</div>

<div>10</div>

<div>2001 2309</div>

<div>50</div>

<div>34 2003</div>

<div>50</div>

<div>-1</div>
</td>
<td>
<div>1</div>

<div>40</div>

<div>289</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT066 - DÃY CON NGẮN NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có N phần tử. Nhiệm vụ của bạn là tìm dãy con liên tiếp có độ dài nhỏ nhất, sao cho Ước số chung lớn nhất của tất cả các phần tử trong dãy đúng bằng K.</p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu tiên là số lượng bộ test T (T &lt;= 10).</li>
<li>Mỗi test bắt đầu bằng 2 số nguyên N và K.</li>
<li>Dòng tiếp theo gồm N số nguyên A[i] .</li>
</ul>

<p><strong>Giới hạn:</strong>&nbsp;1 &lt;= N &lt;= 1000;&nbsp;1 &lt;= A[i], K &lt;= 10^9</p>

<p><strong>Output</strong></p>

<ul>
<li>Với mỗi test, hãy in ra đáp án trên một dòng. Nếu không tìm được dãy con nào, in ra -1.</li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>8 3</div>

<div>6 9 7 10 12 24 36 27</div>

<div>4 3</div>

<div>2 4 6 8</div>

<div>4 6</div>

<div>1 2 3 6</div>

<div>&nbsp;</div>
</td>
<td>
<div>2</div>

<div>-1</div>

<div>1</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT067 - HOÁN VỊ NGƯỢC

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N theo thứ tự ngược. Ví dụ với N = 3 ta có kết quả: 321, 312, 231, 213, 132, 123.</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào số lượng test T.</li>
<li>Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.</li>
<li>T, n thỏa mãn ràng buộc: 1≤T, N≤10.</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Với mỗi test, dòng đầu tiên đưa ra số lượng hoán vị. Dòng thứ hai liệt kê các hoán vị ngược tìm được.</li>
</ul>

<p><strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>2</div>

<div>3</div>
</td>
<td>
<div>2</div>

<div>21 12&nbsp; </div>

<div>6</div>

<div>321 312 231 213 132 123&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </div>
</td>
</tr>
</tbody>
</table>



---

## PYKT068 - DANH SÁCH MÔN THI

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Học viện Hoàng gia tổ chức thi thời kỳ giãn cách theo các hình thức thi linh hoạt, phù hợp với từng môn học.</p>

<p>Thông tin về mỗi môn học gồm: </p>

<ul>
<li>Mã môn: xâu ký tự không có khoảng trống, không quá 15 ký tự</li>
<li>Tên môn: xâu ký tự không có thể có&nbsp; khoảng trống, không quá 100 ký tự</li>
<li>Hình thức thi: xâu ký tự không có thể có&nbsp; khoảng trống, không quá 100 ký tự</li>
</ul>

<p>Hãy nhập danh sách và in danh sách sắp xếp theo mã môn. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số môn học. Mỗi môn ghi trên 3 dòng lần lượt là mã môn, tên môn, hình thức thi. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách đã sắp xếp theo mã môn, thứ tự từ điển. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>MUL1320</div>

<div>Nhap mon da phuong tien</div>

<div>Bai tap lon + Van dap truc tuyen</div>

<div>BAS1203</div>

<div>Giai tich 1</div>

<div>Thi viet + Van dap truc tuyen</div>
</td>
<td>
<div>BAS1203 Giai tich 1 Thi viet + Van dap truc tuyen</div>

<div>MUL1320 Nhap mon da phuong tien Bai tap lon + Van dap truc tuyen</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT069 - DANH SÁCH CA THI

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Học viện Hoàng gia tổ chức thi thời kỳ giãn cách theo các hình thức thi linh hoạt, phù hợp với từng môn học.</p>

<p>Mỗi ca thi gồm các thông tin: </p>

<ul>
<li>Mã ca thi: tự động tăng, tính từ C001</li>
<li>Ngày thi: đúng định dạng dd/mm/yyyy</li>
<li>Giờ thi: theo đúng định dạng hh:mm</li>
<li>Phòng thi: một dãy chữ số đại diện cho ID phòng online, không quá 12 chữ số</li>
</ul>

<p>Hãy nhập danh sách các ca thi và sắp xếp theo thời gian thi (từ sớm nhất đến muộn nhất). Nếu hai ca thi cùng giờ thì sắp xếp theo mã ca thi tăng dần. </p>

<p><strong>Input – file văn bản CATHI.in</strong></p>

<p>Dòng đầu ghi số ca thi. Mỗi ca thi ghi trên 3 dòng gồm Ngày, Giờ và ID phòng thi. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách các ca thi theo thứ tự thời gian, nếu cùng giờ thì sắp xếp theo mã ca thi. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>09/01/2022<br>
15:30<br>
70172</div>

<div>09/01/2022<br>
10:00<br>
70279</div>

<div>&nbsp;</div>
</td>
<td>
<div>C002 09/01/2022 10:00 70279</div>

<div>C001 09/01/2022 15:30 70172</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT070 - SẮP XẾP LỊCH THI

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Học viện Hoàng gia tổ chức thi thời kỳ giãn cách theo các hình thức thi linh hoạt, phù hợp với từng môn học.</p>

<p>Thông tin về mỗi môn học gồm: </p>

<ul>
<li>Mã môn: xâu ký tự không có khoảng trống, không quá 15 ký tự</li>
<li>Tên môn: xâu ký tự không có thể có&nbsp; khoảng trống, không quá 100 ký tự</li>
<li>Hình thức thi: xâu ký tự không có thể có&nbsp; khoảng trống, không quá 100 ký tự</li>
</ul>

<p>Mỗi ca thi gồm các thông tin: </p>

<ul>
<li>Mã ca thi: tự động tăng, tính từ C001</li>
<li>Ngày thi: đúng định dạng dd/mm/yyyy</li>
<li>Giờ thi: theo đúng định dạng hh:mm</li>
<li>Phòng thi: một dãy chữ số đại diện cho ID phòng online, không quá 12 chữ số</li>
</ul>

<p>Lịch thi được xây dựng dựa trên mã môn và mã ca thi và mã nhóm lớp. Theo quy định, nhóm lớp đơn giản là các giá trị chữ số, bắt đầu từ 01 và không quá 99. Mỗi nhóm sẽ có số sinh viên tham gia ca thi đó. </p>

<p>Hãy nhập lịch thi và sắp xếp lại theo thứ tự thời gian. Nếu cùng giờ thì sắp theo mã ca thi (thứ tự từ điển). </p>

<p>Input – gồm 3 file văn bản. </p>

<p><strong>MONTHI.in</strong></p>

<p>Dòng đầu ghi số môn học. Mỗi môn ghi trên 3 dòng lần lượt là mã môn, tên môn, hình thức thi. </p>

<p><strong>CATHI.in</strong></p>

<p>Dòng đầu ghi số ca thi. Mỗi ca thi ghi trên 3 dòng gồm Ngày, Giờ và ID phòng thi. </p>

<p><strong>LICHTHI.in</strong></p>

<p>Dòng đầu ghi số lượng các dòng trong lịch thi. </p>

<p>Mỗi dòng tiếp theo ghi 4 thông tin: mã ca thi, mã môn, mã nhóm, số sinh viên. Mỗi thông tin cách nhau một khoảng trống. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách lịch thi đã sắp xếp theo yêu cầu, các thông tin cần liệt kê gồm:</p>

<ul>
<li>Ngày thi</li>
<li>Giờ thi</li>
<li>ID Phòng thi</li>
<li>Tên môn</li>
<li>Nhóm </li>
<li>Số sinh viên</li>
</ul>

<p>Các thông tin liệt kê cách nhau đúng một khoảng trống</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div><strong>MONTHI.in</strong></div>

<div>2</div>

<div>MUL1320</div>

<div>Nhap mon da phuong tien</div>

<div>Bai tap lon + Van dap truc tuyen</div>

<div>BAS1203</div>

<div>Giai tich 1</div>

<div>Thi viet + Van dap truc tuyen</div>
</td>
<td rowspan="3">
<div>09/01/2022 10:00 70279 Giai tich 1 04 72</div>

<div>09/01/2022 15:30 70172 Nhap mon da phuong tien 01 46</div>

<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div><strong>CATHI.in</strong></div>

<div>2</div>

<div>09/01/2022<br>
15:30<br>
70172</div>

<div>09/01/2022<br>
10:00<br>
70279</div>
</td>
</tr>
<tr>
<td>
<div><strong>LICHTHI.in</strong></div>

<div>2</div>

<div>C001 MUL1320 01 46</div>

<div>C002 BAS1203 04 72</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT071 - SỐ KHÔNG GIẢM TRONG FILE NHỊ PHÂN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho hai file nhị phân DATA1.in và DATA2.in, mỗi file đều chứa một ArrayList&lt;Integer&gt;. Dữ liệu đảm bảo có không quá 100000 số trong mỗi file, và các số đều nguyên dương, không quá 4 chữ số. </p>

<p>Một số nguyên dương có từ 2 chữ số trở lên được gọi là không giảm nếu các chữ số từ trái sang phải của nó thỏa mãn không có chữ số đằng sau nào lại nhỏ hơn chữ số phía trước nó. Ví dụ: 899, 1134; 7778.</p>

<p>Hãy liệt kê các số không giảm xuất hiện trong cả hai file DATA1.in và DATA2.in, các số cần liệt kê theo thứ tự tăng dần và kèm theo số lần xuất hiện trong lần lượt từng file. </p>

<p><strong>Input</strong></p>

<p>Hai file nhị phân DATA1.in và DATA2.in</p>

<p><strong>Output</strong></p>

<p>Ghi lần lượt từng số thỏa mãn theo thứ tự tăng dần, tiếp theo là số lần xuất hiện trong file 1 rồi đến file 2. </p>

<p>Ví dụ</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>Hai file nhị phân</div>
</td>
<td>
<div>Lần lượt các số thỏa mãn và số lần tương ứng. Ví dụ: </div>

<div>59 1 19</div>

<div>66 6 12</div>

<div>1228 9 10</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT072 - XOAY VÒNG XÂU KÝ TỰ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho N xâu S[1], S[2], …, S[N] có độ dài bằng nhau. Mỗi bước, với xâu T, bạn được phép xoay vòng 1 kí tự, tức lấy kí tự đầu tiên của T rồi chuyển xuống cuối. Ví dụ xâu “cool” sẽ chuyển thành “oolc”.</p>

<p>Bạn cần phải xoay N xâu sao cho tất cả chúng đều giống nhau. Hãy xác định số bước ít nhất để hoàn thành được công việc này?</p>

<p><strong>Input:</strong></p>

<p>Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 50).</p>

<p>N dòng tiếp theo, mỗi dòng gồm xâu S[i] có độ dài không quá 50.</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test, in ra số bước ít nhất tìm được, nếu không thể biến đổi, hãy in ra “NO”.</p>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
<td>
<div>Test 3</div>
</td>
<td>
<div>Test 4</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>4</div>

<div>xzzwo</div>

<div>zwoxz</div>

<div>zzwox</div>

<div>xzzwo</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>5</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>2</div>

<div>molzv</div>

<div>lzvmo</div>

<div>&nbsp;</div>

<div>&nbsp;</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>2</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>3</div>

<div>kc</div>

<div>kc</div>

<div>kc</div>

<div>&nbsp;</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>0</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>3</div>

<div>aa</div>

<div>aa</div>

<div>ab</div>

<div>&nbsp;</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>-1</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: Xoay tất cả các xâu thành “zwoxz”.</p>



---

## PYKT073 - XÁC ĐỊNH THỂ LOẠI THƠ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Trong thơ ca&nbsp;có rất nhiều các thể thơ và những cách gieo vần khác nhau cho các bài thơ. Trong số những thể thơ đó, bạn có thể lựa chọn cho mình một loại thể thơ riêng để đem lại nhiều hiệu quả cho bài thơ và giúp cho bạn có thể thấy được sự hiệu quả trong cách truyền đạt những cung bậc cảm xúc vào trong bài thơ.</p>

<p>Cho danh sách các bài thơ gồm hai thể loại thơ lục bát và thơ thất ngôn tứ tuyệt.</p>

<p>1. Thơ lục bát</p>

<p>- Là thể thơ dân tộc.</p>

<p>- Số chữ và số câu: Một cặp hai câu thơ, câu trên sáu chữ (lục), câu dưới tám chữ (bát). Một bài thơ có thể có nhiều cặp lục bát, số lượng cặp câu không hạn định.</p>

<p>2. Thơ thất ngôn tứ tuyệt</p>

<p>- Xuất xứ: Trung Quốc</p>

<p>- Thơ trung đại, thơ cận đại</p>

<p>- Là bài thơ mà mỗi dòng 7 tiếng, bài có 4 câu (Khai - Thừa - Chuyển - Hợp)</p>

<p>Nhiệm vụ của bạn là hãy viết chương trình xác định số lượng bài thơ và thể thơ (ghi bằng số) của từng bài từ danh sách các bài thơ có sẵn.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên cho số N là tổng số dòng của tất cả các bài thơ.</p>

<p>N dòng tiếp theo ghi lại các câu thơ của từng bài. Các bài thơ lục bát sẽ đảm bảo không đặt liên tiếp nhau.</p>

<p><strong>Output:</strong></p>

<p>In ra kết quả số bài thơ và số tương ứng với thể thơ theo từng dòng.</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>8</div>

<div>Minh ve minh co nho ta </div>

<div>Muoi lam nam ay thiet tha man nong </div>

<div>Minh ve minh co nho khong </div>

<div>Nhin cay nho nui nhin song nho nguon</div>

<div>Mot canh hai canh lai ba canh</div>

<div>Tran troc ban khoan giac chang lanh</div>

<div>Canh bon canh nam vua chop mat</div>

<div>Sao vang nam canh mong hon bay</div>
</td>
<td>
<div>2</div>

<div>1</div>

<div>2</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT074 - GỬI THÔNG BÁO

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Một thông báo (notification) là một tin nhắn, thông điệp được hiển thị trong một thời gian ngắn trên thanh trạng thái của thiết bị nhằm gây sự chú ý của người dùng. Nó tương tự như một tin nhắn thông thường (SMS ), tuy nhiên nó khác SMS là dịch vụ này hiện nay là hoàn toàn miễn phí và cần có kết nối internet mới có thể gửi và nhận notification. và notification chỉ có thể gửi cho ứng dụng mà nhà phát triển đã đăng ký và người dùng có cài ứng dụng đó. Các notification này sẽ hiển thị trên thanh trạng thái của smartphone và tablet, thường thanh trạng thái ở phía trên cùng của màn hình. Thông thường một thông báo là được tự động kích hoạt nhằm thông báo tới người dùng là ứng dụng đó đã hoàn thành một công việc nào đó. Hoặc bạn có thể gửi thông tin khuyến mãi tới cho khách hàng của bạn, mời khách hàng tham gia một sự kiện nào đó...</p>

<p>Theo quy định của một số thiết bị. Nội dung thông báo chỉ được phép chứa tối đa 100 ký tự. Điều này đòi hỏi lập trình viên phải xử lý nội dung các thông báo có độ dài lớn hơn 100 ký tự bằng cách rút gọn thông tin. Tuy nhiên, việc rút gọn phải đảm bảo nguyên tắc không bị cắt giữa từ. Trong trường hợp nếu từ hiện tại làm độ dài thông báo vượt quá 100 ký tự sẽ loại bỏ từ đó khỏi thông báo.</p>

<p>Nhiệm vụ của bạn là hãy viết chương trình xử lý yêu cầu trên.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số bộ test T &lt; 100.</p>

<p>T dòng tiếp theo mỗi dòng là một xâu ký tự có độ dài tối đa 1000 ký tự.</p>

<p><strong>Output:</strong></p>

<p>In ra kết quả các thông báo đã xử lý</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
Can cu Ke hoach giang day – hoc tap hoc ky 1 nam hoc 2021 – 2022 Can cu ket qua thi hoc ky 2 va hoc ky phu ky he nam hoc 2020 – 2021<br>
Hoc vien Cong nghe Buu chinh Vien thong to chuc khai giang truc tuyen</div>
</td>
<td>
<div>Can cu Ke hoach giang day – hoc tap hoc ky 1 nam hoc 2021 – 2022 Can cu ket qua thi hoc ky 2 va<br>
Hoc vien Cong nghe Buu chinh Vien thong to chuc khai giang truc tuyen</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT075 - SAO CHÉP DANH BẠ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Có một cuốn sổ tay ghi ghép tên liên lạc và số điện thoại của bạn bè, người thân.</p>

<p>Do quá trình ghi chép, thứ tự được ghi lại dựa vào ngày ghi chép nên chưa được sắp xếp theo họ tên.</p>

<p>Để thuận lợi trong quá trình lưu trữ và sử dụng, người ta đã chuyển toàn bộ thông tin từ sổ tay lên lưu trữ trên điện thoại.</p>

<p>Dữ liệu trên điện thoại khi hiển thị đã được sắp xếp theo tên liên lạc. Lưu ý, nếu tên trùng nhau thì sắp xếp theo họ đệm.</p>

<p>Cho thông tin danh sách liên lạc được ghi chép như mẫu từ tập tin SOTAY.txt, hãy đưa ra dữ liệu hiển thị trên điện thoại vào tập tin DIENTHOAI.txt</p>

<p>Input: Lịch sử ghi chép theo ngày, mỗi ngày có thể ghi chép nhiều thông tin liên lạc. Họ tên tối đa 100 ký tự, số điện thoại có 10 chữ số.</p>

<p>Ví dụ:</p>

<table>
<tbody>
<tr>
<td>
<div>SOTAY.txt</div>
</td>
<td>
<div>DIENTHOAI.txt</div>
</td>
</tr>
<tr>
<td>
<div>Ngay 15/11/2021</div>

<div>Nguyen Van A</div>

<div>0914141581</div>

<div>Nguyen Van B</div>

<div>0921241515</div>

<div>Ngay 16/11/2021</div>

<div>Tran Van C</div>

<div>0935141141</div>
</td>
<td>
<div>Nguyen Van A: 0914141581 15/11/2021</div>

<div>Nguyen Van B: 0921241515 15/11/2021</div>

<div>Tran Van C: 0935141141 16/11/2021</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT076 - DANH SÁCH PHIM

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Trên hệ thống phim của một website có các thông tin bộ phim bao gồm Mã phim, Tên phim, Ngày khởi chiếu, Số tập phim, Thể loại. Mã phim được đánh số tự động từ P001, P002 và tự động tăng dần. Thể loại phim bao gồm thông tin Mã thể loại và Tên thể loại. Mã thể loại được đanh số tự động tăng dần từ TL001, TL002</p>

<p>Cho danh sách các phim trên hệ thống, hãy thực hiện sắp xếp danh sách các bộ phim theo thứ tự ưu tiên ngày khởi chiếu tăng dần, tên phim sắp xếp theo thứ tự từ điển, số tập phim giảm dần.</p>

<p>Input:</p>

<p>Dòng đầu tiên cho 2 số N, M lần lượt là số lượng thể loại và số lượng bộ phim.</p>

<p>N dòng tiếp theo là thông tin tên thể loại. Mã thể loại tự động sinh theo thứ tự nhập vào</p>

<p>M dòng còn lại mỗi dòng là thông tin phim bao gồm Mã thể loại, ngày khởi chiếu (dd/mm/yyyy) tên phim và số tập phim (số nguyên tối đa 10000).</p>

<p>Output:</p>

<p>Danh sách phim đã sắp xếp như mẫu, mỗi phim trên một dòng</p>

<p>Ví dụ:</p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2 3</div>

<div>Hai huoc</div>

<div>Tinh cam</div>

<div>TL001</div>

<div>25/11/2021</div>

<div>Phim so 1</div>

<div>10</div>

<div>TL001</div>

<div>04/12/2021</div>

<div>Phim so 2</div>

<div>15</div>

<div>TL002</div>

<div>25/11/2021</div>

<div>Phim so 3</div>

<div>5</div>
</td>
<td>
<div>P001 Hai huoc 25/11/2021 Phim so 1 10<br>
P003 Tinh cam 25/11/2021 Phim so 3 5<br>
P002 Hai huoc 04/12/2021 Phim so 2 15</div>
</td>
</tr>
</tbody>
</table>

<div>
<div>
<div id="_com_1">&nbsp;</div>
</div>
</div>

---

## PYKT077 - LỊCH THI HỌC KỲ

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Hệ thống quản lý lịch thi học kỳ cho nhiều Môn học, mỗi môn học có các (Có thông tin Mã môn học, tên môn học) Lịch thi học kỳ bao gồm nhiều thông tin gồm: Mã ca thi, Mã môn học, Ngày thi, Giờ thi, Nhóm thi. Mã ca thi được đánh số từ T001, T002 và tự động tăng dần.</p>

<p>Cho danh sách các ca thi, mỗi môn học có nhiều ca thi, hãy thực hiện sắp xếp danh sách các ca thi theo thứ tự ưu tiên như sau ngày tăng dần, giờ tăng dần, mã môn học tăng dần.</p>

<p>Input:</p>

<p>Dòng đầu tiên cho 2 số N, M lần lượt là số môn học và số ca thi.</p>

<p>N * 2 dòng tiếp theo là thông tin mã môn học và tên môn học.</p>

<p>M dòng còn lại mỗi dòng là thông tin lịch thi bao gồm Mã môn học, ngày thi (dd/mm/yyyy) giờ thi (hh:mm) và nhóm thi (dạng xâu ký có 2 ký tự bất kỳ).</p>

<p>Output:</p>

<p>Lịch thi đã sắp xếp như mẫu, mỗi lịch thi trên một dòng</p>

<p>Ví dụ:</p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2 10</div>

<div>INT1155</div>

<div>Tin hoc co so 2</div>

<div>INT1339</div>

<div>Ngon ngu lap trinh C++</div>

<div>INT1155 25/11/2021 08:00 01</div>

<div>INT1155 04/12/2021 08:00 02</div>

<div>INT1155 04/12/2021 13:30 03</div>

<div>INT1155 25/11/2021 13:30 04</div>

<div>INT1155 25/11/2021 15:00 05</div>

<div>INT1339 25/11/2021 08:00 01</div>

<div>INT1339 25/11/2021 08:00 02</div>

<div>INT1339 04/12/2021 13:30 03</div>

<div>INT1339 04/12/2021 13:30 04</div>

<div>INT1339 04/12/2021 15:00 05</div>
</td>
<td>
<div>T001 INT1155 Tin hoc co so 2 25/11/2021 08:00 01</div>

<div>T006 INT1339 Ngon ngu lap trinh C++ 25/11/2021 08:00 01</div>

<div>T007 INT1339 Ngon ngu lap trinh C++ 25/11/2021 08:00 02</div>

<div>T004 INT1155 Tin hoc co so 2 25/11/2021 13:30 04</div>

<div>T005 INT1155 Tin hoc co so 2 25/11/2021 15:00 05</div>

<div>T002 INT1155 Tin hoc co so 2 04/12/2021 08:00 02</div>

<div>T003 INT1155 Tin hoc co so 2 04/12/2021 13:30 03</div>

<div>T008 INT1339 Ngon ngu lap trinh C++ 04/12/2021 13:30 03</div>

<div>T009 INT1339 Ngon ngu lap trinh C++ 04/12/2021 13:30 04</div>

<div>T010 INT1339 Ngon ngu lap trinh C++ 04/12/2021 15:00 05</div>
</td>
</tr>
</tbody>
</table>

<div>
<div>
<div id="_com_1">&nbsp;</div>
</div>
</div>

---

## PYKT078 - SẮP XẾP DÃY SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số nguyên x1 , x2 , … ,x&nbsp; và số nguyên m</p>

<p>- Tìm giá trị lớn nhất của dãy số.</p>

<p>- Chèn m vào trước vị trí đầu tiên có giá trị bằng giá trị lớn nhất.</p>

<p>- Sắp xếp lại dãy số sau chèn sao cho phần tử âm về đầu dãy, phần tử dương và bằng 0 về cuối dãy sao cho trật tự các phần tử không thay đổi.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên cho T là số lượng bộ test.</p>

<p>Mỗi bộ test bao gồm hai dòng, dòng 1 cho số n &lt; 1000 là số lượng phần tử và số m sao cho&nbsp; -10<sup>9</sup> &lt; m &lt; 10<sup>9</sup>.</p>

<p>Dòng thứ 2 của bộ test bao gồm m số nguyên -10<sup>9</sup> &lt; Xi &lt; 10<sup>9</sup> </p>

<p><strong>Output:</strong></p>

<p>In ra kết quả theo từng dòng</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>5 3</div>

<div>-1 2 3 4 -1</div>
</td>
<td>
<div>-1 -1 2 3 3 4</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT079 - ĐIỀN SỐ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho mảng A[] gồm n số nguyên dương. Gọi L, R là max và min các phần tử của A[]. Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8. </p>

<p><strong>Input: </strong></p>

<ul>
<li>Dòng đầu tiên đưa vào số lượng bộ test T.</li>
<li>Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i].</li>
<li>T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, A[i] ≤10<sup>3</sup>.</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng. </li>
</ul>

<p>&nbsp;&nbsp; <strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
5<br>
4 5 3 8 6<br>
3<br>
2 1 3</div>
</td>
<td>
<div>1<br>
0<br>
&nbsp;</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT080 - THỐNG KÊ DỊCH TỄ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Trước diễn biến phức tạp của dịch bệnh, thành phố đang có chủ chương thống kê dịch tễ các trường hợp liên quan đến bệnh nhân mắc COVID-19.</p>

<p>Thông tin về bệnh nhân được biểu diễn trên ma trận. Bạn hãy thực hiện thống kê nhanh các trường hợp có nguy cơ lây nhiễm. Nguyên tắc tính là đếm các trường hợp xung quanh bệnh nhân đã tiếp xúc (8 ô xung quanh).</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là 2 số M, N là các số nguyên &lt;= 100, cho biết kích thước của ma trận.</p>

<p>Tiếp theo là ma trận M x N, các số nguyên A[i][j] có giá trị &lt; 10. Vị trí của mỗi bệnh nhân được đánh số -1. Các ô mang giá trị &gt;= 0 thể hiện số trường hợp có nguy cơ lây nhiễm (không tính các bệnh nhân).</p>

<p><strong>Output:</strong></p>

<p>Tổng số các ca có nguy cơ lây nhiễm trên toàn thành phố.</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>4 4<br>
1 1 0 1<br>
2 -1 4 5<br>
0 0 0 0<br>
1 0 2 1</div>
</td>
<td>
<div>&nbsp;8</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT081 - ĐỊA CHỈ IP

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Địa chỉ IP (IP là viết tắt của từ tiếng Anh: Internet Protocol - giao thức Internet) là một địa chỉ đơn nhất mà những thiết bị điện tử hiện nay đang sử dụng để nhận diện và liên lạc với nhau trên mạng máy tính bằng cách sử dụng giao thức Internet.</p>

<p>Bất kỳ thiết bị mạng nào bao gồm bộ định tuyến, bộ chuyển mạch mạng, máy vi tính, máy chủ hạ tầng (như NTP, DNS, DHCP, SNMP, v.v.), máy in, máy fax qua Internet, và vài loại điện thoại—tham gia vào mạng đều có địa chỉ riêng, và địa chỉ này là đơn nhất trong phạm vi của một mạng cụ thể. Vài địa chỉ IP có giá trị đơn nhất trong phạm vi Internet toàn cầu, trong khi một số khác chỉ cần phải đơn nhất trong phạm vi một công ty.</p>

<p>Ipv4 viết tắt cho Internet Protocol Version 4, dịch ra có nghĩa là giao thức Internet phiên bản thứ 4. Ipv4 đã được bộ quốc phòng Hoa Kỳ chuẩn hóa trong bản MIL-STD-1777. Giao thức Internet IP đã trải qua nhiều phiên bản khác nhau và phiên bản Ipv4 là phiên bản đầu tiên được sử dụng rộng rãi trên toàn thế giới và hiện vẫn còn đang là nòng cốt của Internet trên toàn thế giới.</p>

<p>Để hiểu địa chỉ Ipv4 là gì có thể lấy ví dụ như sau: Giả sử ta có 1 dải số như sau: 172.16.254.1. Dải số này có thể được dùng để đặt tên cho 1 địa chỉ Ipv4 nào đó. Có thể thấy địa chỉ Ipv4 có tổng cộng 4 số và mỗi số phải nằm trong giới hạn từ 0-255.</p>

<p>Cho một danh sách các chuỗi ký tự, hãy kiểm tra xem chuỗi ký tự này có phải địa chỉ IP hợp lệ hay không.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên cho số T là số bộ test</p>

<p>T dòng tiếp theo mỗi dòng là một chuỗi bất kỳ có độ dài &lt; 1000</p>

<p><strong>Output:</strong></p>

<p>In ra kết quả theo từng dòng</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>192.168.1.1</div>

<div>256.255.255.255</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT082 - TÍNH ĐIỂM THI IELTS

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Thang điểm IELTS được tính từ 1.0 – 9.0 IELTS (Overall điểm thi IELTS được tính trung bình cộng điểm 4 kỹ năng Reading, Listening, Speaking và Writing).</p>

<p>4 kỹ năng của IELTS cũng tính từ 1.0-9.0 để sau đó tính điểm thi IELTS Overall.</p>

<p>Cả 2 phần thi nghe (Listening) và đọc (Reading) đều có 40 câu hỏi thí sinh cần trả lời. Với một câu trả lời đúng sẽ được 1 điểm, tối đa là 40 điểm và quy đổi sang thang điểm 1.0 – 9.0 dựa trên tổng số câu trả lời đúng.</p>

<p>Dưới đây là bảng điểm quy đổi sẽ giúp cho các bạn hiểu hơn về cách chuyển đổi điểm cho từng phần thi Reading và Listening.</p>

<table>
<tbody>
<tr>
<td colspan="2">
<div>Listening/Reading</div>
</td>
</tr>
<tr>
<td>
<div>Correct answers</div>
</td>
<td>
<div>Band score</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;39 - 40</div>
</td>
<td>
<div>&nbsp;9.0</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;37- 38</div>
</td>
<td>
<div>&nbsp;8.5</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;35 - 36</div>
</td>
<td>
<div>&nbsp;8.0</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;33 - 34</div>
</td>
<td>
<div>&nbsp;7.5</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;30 - 32</div>
</td>
<td>
<div>&nbsp;7.0</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;27 - 29</div>
</td>
<td>
<div>&nbsp;6.5</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;23 - 26</div>
</td>
<td>
<div>&nbsp;6.0</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;20 - 22</div>
</td>
<td>
<div>&nbsp;5.5</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;16 - 19</div>
</td>
<td>
<div>&nbsp;5.0</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;13 - 15</div>
</td>
<td>
<div>&nbsp;4.5</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;10 - 12</div>
</td>
<td>
<div>&nbsp;4.0</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;7- 9</div>
</td>
<td>
<div>&nbsp;3.5</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;5 - 6</div>
</td>
<td>
<div>&nbsp;3.0</div>
</td>
</tr>
<tr>
<td>
<div>&nbsp;3 - 4</div>
</td>
<td>
<div>&nbsp;2.5</div>
</td>
</tr>
</tbody>
</table>

<p>Thang điểm IELTS trên bảng kết quả của thí sinh sẽ thể hiện điểm của từng kỹ năng thi cùng với điểm overall. Phần điểm tổng sẽ được tính dựa trên điểm trung bình cộng của 4 kỹ năng.</p>

<p>Điểm tổng của 4 kỹ năng sẽ được làm tròn số theo quy ước chung như sau: Nếu điểm trung bình cộng của 4 kỹ năng có số lẻ là .25, thì sẽ được làm tròn lên thành .5, còn nếu là .75 sẽ được làm tròn thành 1.0.</p>

<p>Một trung tâm tổ chức thi thử Tiếng Anh cho các học viên. Hãy giúp trung tâm tính điểm overall dựa trên kết quả bài làm của thí sinh nhé.</p>

<p>Input:</p>

<p>Dòng đầu cho số T là số lượng thí sinh</p>

<p>T dòng tiếp theo mỗi dòng cho 4 số là số câu đúng lần lượt của kỹ năng Reading, Listening, điểm kỹ năng speaking, và điểm kỹ năng writing.</p>

<p>Output:</p>

<p>In ra kết quả theo từng dòng.</p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>15 25 5.0 5.5</div>

<div>22 32 6.0 6.0</div>
</td>
<td>
<div>5.5</div>

<div>6.0</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT083 - THU PHÍ XE Ô TÔ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Mới đây, Sở Giao thông Vận tải TP Hà Nội đã thông tin chính thức về Đề án "Thu phí phương tiện cơ giới đường bộ đi vào một số khu vực nhằm giảm ùn tắc giao thông" để trình UBND thành phố Hà Nội.</p>

<p>Theo Sở GTVT, phí giảm ùn tắc giao thông là một loại phí mà người điều khiển phương tiện giao thông cơ giới đường bộ (ô tô) phải trả khi đi vào khu vực có nguy cơ ùn tắc giao thông. Nhằm giảm lưu lượng xe ô tô đi vào góp phần giảm ùn tắc giao thông.</p>

<p>Dữ liệu xe ra vào thành phố được lưu trữ đầy đủ trên hệ thống. Thông tin về phương tiện bao gồm.</p>

<p>Loại xe, biển số, số ghế ngồi.</p>

<p>Mức giá áp dụng cho các phương tiện được thực hiện theo bảng giá sau:</p>

<table>
<tbody>
<tr>
<td>
<div>Loại xe</div>
</td>
<td>
<div>Số ghế</div>
</td>
<td>
<div>Đơn giá</div>
</td>
</tr>
<tr>
<td>
<div>Xe_con</div>
</td>
<td>
<div>5</div>
</td>
<td>
<div>10000</div>
</td>
</tr>
<tr>
<td>
<div>Xe_con</div>
</td>
<td>
<div>7</div>
</td>
<td>
<div>15000</div>
</td>
</tr>
<tr>
<td>
<div>Xe_tai</div>
</td>
<td>
<div>2</div>
</td>
<td>
<div>20000</div>
</td>
</tr>
<tr>
<td>
<div>Xe_khach</div>
</td>
<td>
<div>29</div>
</td>
<td>
<div>50000</div>
</td>
</tr>
<tr>
<td>
<div>Xe_khach</div>
</td>
<td>
<div>45</div>
</td>
<td>
<div>70000</div>
</td>
</tr>
</tbody>
</table>

<p>Chiều di chuyển có hai hướng là Vào và Ra thành phố (IN và OUT). Khi xe đi vào thành phố thì phải trả phí, xe đi ra khỏi thành phố sẽ không phải trả phí.</p>

<p>Để thống kê lượng phương tiện ra vào thành phố thuận lợi cho quá trình vận hành và khai thác. Bạn hãy viết chương trình thực hiện thống kê theo ngày tổng số tiền thu được.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên cho số N là tổng số bản ghi.</p>

<p>N dòng tiếp theo mỗi dòng ghi lại thông tin về lượt di chuyển của xe lần lượt là biển số, loại xe, số ghế ngồi, hướng di chuyển, ngày di chuyển. </p>

<p><strong>Output:</strong></p>

<p>In ra kết quả thống kê theo ngày, thứ tự ngày theo thứ tự xuất hiện trong input.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>5</div>

<div>30F-123.15 Xe_con 5 OUT 06/11/2021 </div>

<div>30F-123.15 Xe_con 5 IN 06/11/2021 </div>

<div>30H-123.15 Xe_con 7 IN 06/11/2021 </div>

<div>29H-222.68 Xe_tai 2 IN 07/11/2021 </div>

<div>30G-511.15 Xe_con 5 IN 07/11/2021 </div>
</td>
<td>
<div>06/11/2021: 25000</div>

<div>07/11/2021: 30000</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT084 - CÂU HỎI THEO CHỦ ĐỀ - 1

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho danh &nbsp;sách chủ đề và bộ câu hỏi đi kèm theo chủ đề đó trong một bộ đề bài Tiếng Anh.</p>

<p>Mỗi bộ câu hỏi theo chủ đề sẽ cách nhau một dòng trống. Mỗi câu hỏi được viết trên một dòng.</p>

<p>Ghi ra thống kê số lượng câu hỏi theo từng chủ đề. Thứ tự của chủ đề ở kết quả được giữ nguyên với thứ tự xuất hiện trong dữ liệu vào.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu cho tổng số dòng dữ liệu</p>

<p>Các dòng tiếp theo là danh sách các chủ đề, câu hỏi.</p>

<p><strong>Output:</strong></p>

<p>In ra kết quả theo yêu cầu</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>9</div>

<div>Home/accommodation</div>

<div>What kind of housing/accommodation do you live in?</div>

<div>Who do you live with?</div>

<div>How long have you lived there?</div>

<div>&nbsp;</div>

<div>Study</div>

<div>Describe your education</div>

<div>What is your area of specialization?</div>

<div>Why did you choose to study that major?</div>
</td>
<td>
<div>Home/accommodation: 3</div>

<div>Study: 3</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT085 - CÂU HỎI THEO CHỦ ĐỀ - 2

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho danh &nbsp;sách chủ đề và bộ câu hỏi đi kèm theo chủ đề đó trong một bộ đề bài Tiếng Anh.</p>

<p>Mỗi bộ câu hỏi theo chủ đề sẽ cách nhau một dòng trống. Mỗi câu hỏi được viết trên một dòng.</p>

<p>Ghi ra thống kê số lượng câu hỏi theo từng chủ đề. Thứ tự của chủ đề ở kết quả được giữ nguyên với thứ tự xuất hiện trong dữ liệu vào.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu cho tổng số dòng dữ liệu</p>

<p>Các dòng tiếp theo là danh sách các chủ đề, câu hỏi.</p>

<p><strong>Output:</strong></p>

<p>In ra kết quả theo yêu cầu</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>9</div>

<div>Home/accommodation</div>

<div>What kind of housing/accommodation do you live in?</div>

<div>Who do you live with?</div>

<div>How long have you lived there?</div>

<div>&nbsp;</div>

<div>Study</div>

<div>Describe your education</div>

<div>What is your area of specialization?</div>

<div>Why did you choose to study that major?</div>
</td>
<td>
<div>Home/accommodation: 3</div>

<div>Study: 3</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT086 - CHUYỂN ĐỔI NHỊ PHÂN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho xâu nhị phân X[] có độ dài n. Nhiệm vụ của bạn là hãy đổi xâu nhị phân thành một số ở hệ cơ số b, trong đó b chỉ là một trong các số 2, 4, 8, 16. Ví dụ xâu X =”10010100010010101” và b = 8 ta có kết quả là 224225 là số ở hệ cơ số 8.</p>

<p><strong>Input - file văn bản DATA.in:</strong></p>

<ul>
<li>Dòng đầu tiên đưa vào T là số lượng bộ test.</li>
<li>Những dòng tiếp theo, mỗi dòng đưa vào T test. Mỗi test là gồm hai dòng: dòng đầu tiên đưa vào b là cơ số của hệ đếm; dòng tiếp theo đưa vào xâu nhị phân có độ dài n.</li>
<li>T, n, X[] thỏa mãn ràng buộc : 1≤T≤10; 1≤ n≤10<sup>5</sup>; X[i] =0, 1;</li>
</ul>

<p><strong>Output:</strong></p>

<ul>
<li>Đưa ra kết quả mỗi test theo từng dòng.</li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>DATA.in</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2<br>
8<br>
10010100010010101</div>

<div>2<br>
10010100010010101</div>
</td>
<td>
<div>1121127</div>

<div>10010100010010101</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT087 - SỐ ĐẶC BIỆT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Với mỗi số nguyên dương N, số M được coi là số đặc biệt của N nếu M được tạo ra bằng tổng các lũy thừa không âm khác nhau của N. Ví dụ N = 4 thì M = 17 là số đặc biệt vì 17 = 4<sup>0</sup> + 4<sup>2</sup>.</p>

<p>Viết chương trình nhập số N và số K. Sau đó in ra số đặc biệt thứ K của N nếu sắp xếp các số đặc biệt của N theo thứ tự tăng dần. </p>

<p>Kết quả có thể rất lớn, hãy in ra theo modulo 10<sup>9</sup> + 7. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên chứa một số nguyên duy nhất t (1 ≤ t ≤ 10<sup>4</sup>) - số lượng bộ test. </p>

<p>Dòng tiếp theo chứa hai số nguyên N và K (2 ≤ N ≤ 10<sup>9</sup>; 1 ≤ k ≤ 10<sup>9</sup>).</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, ghi ra số đặc biệt thứ K của N theo modulo 10<sup>9</sup> + 7</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>3 4</div>

<div>2 12</div>

<div>105 564</div>
</td>
<td>
<div>9</div>

<div>12</div>

<div>3595374</div>
</td>
</tr>
</tbody>
</table>

<p><strong>Giải thích: </strong>Với N<strong><em> </em></strong>= 3 dãy số đặc biệt là [1, 3, 4, 9…]</p>



---

## PYKT088 - SỐ CÓ 9 ƯỚC SỐ

- <small>Chủ đề con: BIẾN VÀ KIỂU DỮ LIỆU ĐƠN GIẢN</small>
- <small>Độ khó: 1</small>

<p>Cho số nguyên dương N. Hãy đếm các số nguyên dương không lớn hơn N và có đúng 9 ước số. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi số N (1 ≤ N ≤ 10<sup>9</sup>). </p>

<p><strong>Output</strong></p>

<p>Ghi ra số lượng các số có 9 chữ số</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>888</div>
</td>
<td>
<div>8</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT089 - SẮP XẾP CHẴN LẺ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 1</small>

<p>Cho dãy số A[] có n phần tử. Hãy sắp xếp các số chẵn trong dãy theo thứ tự tăng dần và các số lẻ theo thứ tự giảm dần. </p>

<p>In ra dãy kết quả đã sắp xếp trong đó vị trí số chẵn và vị trí số lẻ không thay đổi so với dãy ban đầu. </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số n (1 &lt; n ≤ 1000)</p>

<p>Các dòng tiếp theo ghi đủ n số của dãy A[], các số đều nguyên dương và không quá 1000. </p>

<p><strong>Output</strong></p>

<p>Ghi ra dãy kết quả đã sắp xếp trong đó các vị trí của số chẵn và số lẻ không thay đổi. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Ouput</strong></div>
</td>
</tr>
<tr>
<td>
<div>10</div>

<div>1 2 3 4 5 6 7 7 9 6</div>
</td>
<td>
<div>9 2 7 4 7 6 5 3 1 6 </div>
</td>
</tr>
</tbody>
</table>



---

## PYKT090 - DANH SÁCH EMAIL

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho danh sách các email trong file CONTACT.in, hãy loại bỏ các&nbsp;email trùng nhau và sắp xếp các email còn lại theo thứ tự từ điển.</p>

<p>Chú ý: địa chỉ email thì không phân biệt chữ hoa, chữ thường. Kết quả in ra cần đưa tất cả về dạng chữ thường.</p>

<p><strong>Input - file văn bản CONTACT.in</strong></p>

<p>Gồm không quá 300 dòng, mỗi dòng ghi một địa chỉ email.</p>

<p>Độ dài mỗi email không quá 100 ký tự.</p>

<p><em>Chú ý: Dữ liệu vào không có số dòng nên cần đọc đến hết file.</em></p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách các email đã loại bỏ trùng nhau và sắp xếp theo thứ tự từ điển.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>CONTACT.in</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>nguyenmanhson@gmail.com</div>

<div>sonnm@ptit.edu.vn</div>

<div>NGUYENMANHSON@gmail.com</div>

<div>SonNM@ptit.edu.vn</div>

<div>NguyenManhSon@GMAIL.com</div>
</td>
<td>
<div>nguyenmanhson@gmail.com</div>

<div>sonnm@ptit.edu.vn</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT091 - TÌM TỪ THUẬN NGHỊCH DÀI NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 2</small>

<p>Cho dữ liệu vào dạng file văn bản. </p>

<p>Hãy tìm ra từ thỏa mãn tính chất&nbsp;<strong><em>thuận nghịch và có độ dài&nbsp;lớn nhất&nbsp;</em></strong>trong file đó. Đếm xem từ đó&nbsp;<strong><em>xuất hiện bao nhiêu lần</em></strong>. </p>

<p>Nếu có nhiều từ cùng có độ dài lớn nhất thì in ra tất cả các từ đó theo thứ tự xuất hiện trong file ban đầu.<br>
&nbsp;</p>

<p><strong>Input: </strong>File văn bản <strong>VANBAN.in</strong>&nbsp;Không quá 1000 từ.<br>
&nbsp;</p>

<p><strong>Output</strong>:</p>

<p>Ghi ra trên màn hình một dòng từ thuận nghịch có độ dài lớn nhất và số lần xuất hiện của nó. Nếu có nhiều từ cùng có độ dài lớn nhất thì các từ được liệt kê theo thứ tự xuất&nbsp;hiện ban đầu.<br>
&nbsp;</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>VANBAN.in</strong></div>
</td>
<td>
<div><strong>KẾT QUA</strong></div>
</td>
</tr>
<tr>
<td>
<div>AAA BAABA HDHDH ACBSD SRGTDH DDDDS<br>
DUAHD AAA AD DA HDHDH AAA AAA AAA AAA<br>
DDDAS HDHDH HDH AAA AAA AAA AAA AAA<br>
AAA AAA AAA<br>
DHKFKH DHDHDD HDHDHD DDDHHH HHHDDD<br>
TDTD</div>
</td>
<td>
<div>HDHDH 3</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT092 - ĐIỂM TUYỂN SINH

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Theo quy định mới, điểm tuyển sinh vào trường đại học XYZ sau khi tính tổng sẽ được cộng ưu tiên, cụ thể:</p>

<ul>
<li>Thí sinh khu vực 1 ưu tiên 1.5 điểm</li>
<li>Thí sinh khu vực 2 ưu tiên 1 điểm</li>
<li>Thí sinh khu vực 3 không ưu tiên</li>
<li>Thí sinh dân tộc Kinh không ưu tiên</li>
<li>Thí sinh các dân tộc khác ưu tiên 1.5 điểm</li>
</ul>

<p>Hãy tính tổng điểm đã ưu tiên và xác định tình trạng trúng tuyển. Biết điểm chuẩn của trường năm nay là 20.5 điểm.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số thí sinh.</p>

<p>Mỗi thí sinh ghi trên 4 dòng gồm:</p>

<ul>
<li>Họ tên: có thể chưa chuẩn hóa</li>
<li>Điểm thi: giá trị số thực không quá 30</li>
<li>Dân tộc</li>
<li>Khu vực</li>
</ul>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách đã sắp xếp theo tổng điểm (đã tính ưu tiên) giảm dần, nếu tổng điểm bằng nhau thì sắp xếp theo mã thí sinh tăng dần. Các thông tin cần liệt kê gồm:</p>

<ul>
<li>Mã thí sinh (tính theo thứ tự nhập từ TS01)</li>
<li>Họ tên đã chuẩn hóa</li>
<li>Tổng điểm với đúng 1 chữ số phần thập phân</li>
<li>Trạng thái: Do hoặc Truot</li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>Nguyen&nbsp; hong ngat</div>

<div>22</div>

<div>Kinh</div>

<div>1</div>

<div>&nbsp; Chu thi MINh</div>

<div>14</div>

<div>Dao</div>

<div>3</div>
</td>
<td>
<div>TS01 Nguyen Hong Ngat 23.5 Do</div>

<div>TS02 Chu Thi Minh 15.5 Truot</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT093 - TÍNH ĐIỂM TRUNG BÌNH

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Nhóm sinh viên PTIT cùng nhau đăng ký 3 môn học trong Học kỳ hè năm 2021 theo đúng thứ tự:</p>

<ul>
<li>Môn 1: Lập trình hướng đối tượng: 3 tín chỉ</li>
<li>Môn 2: Ngôn ngữ lập trình C++: 3 tín chỉ</li>
<li>Môn 3: Tin học cơ sở 2: 2 tín chỉ</li>
</ul>

<p>Người ta muốn xếp hạng thứ tự các sinh viên trong danh sách theo điểm trung bình giảm dần. Biết rằng điểm trung bình tính đến 2 số phần thập phân và nếu điểm bằng nhau thì thứ hạng cũng bằng nhau.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số sinh viên (không quá 20).</p>

<p>Mỗi sinh viên ghi trên 4 dòng gồm:</p>

<ul>
<li>Họ tên: có thể chưa được chuẩn hóa</li>
<li>Điểm môn 1</li>
<li>Điểm môn 2</li>
<li>Điểm môn 3</li>
</ul>

<p>Các giá trị điểm là số nguyên và đảm bảo trong phạm vi từ 0 đến 10.</p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách sinh viên đã tính điểm và sắp xếp theo xếp hạng từ cao nhất đến thấp nhất, gồm các thông tin:</p>

<ul>
<li>Mã sinh viên (tự động tăng theo thứ tự nhập, tính từ SV01)</li>
<li>Họ tên đã chuẩn hóa</li>
<li>Điểm trung bình với đúng 2 số phần thập phân</li>
<li>Xếp hạng</li>
</ul>

<p>Chú ý: 2 sinh viên có điểm trung bình bằng nhau thì xếp hạng bằng nhau, và nếu có 2 sinh viên hạng là X thì sinh viên tiếp theo trong danh sách có hạng X+2.</p>

<p>Trong trường hợp xếp hạng bằng nhau thì cần sắp xếp theo mã sinh viên tăng dần.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>&nbsp;ha Thi kieu&nbsp;&nbsp;&nbsp;&nbsp; anh</div>

<div>7</div>

<div>6</div>

<div>7</div>

<div>Pham&nbsp;&nbsp;&nbsp; THI&nbsp; HAO</div>

<div>6</div>

<div>7</div>

<div>6</div>
</td>
<td>
<div>SV01 Ha Thi Kieu Anh 6.63 1</div>

<div>SV02 Pham Thi Hao 6.38 2</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT094 - TÍNH LƯƠNG

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Công ty XYZ mỗi năm đều cập nhật hồ sơ và gán lại mã cho nhân viên (có đúng 5 ký tự) theo quy tắc sau:</p>

<ul>
<li>Ký tự đầu tiên là phân loại nhân viên, có 4 nhóm&nbsp;là A, B, C, D</li>
<li>Hai chữ số tiếp theo mô tả số năm công tác</li>
<li>Hai ký tự cuối là mã phòng ban.</li>
</ul>

<p>Dựa trên loại nhân viên và số năm công tác, hệ số nhân để tính lương được cho trong bảng sau:</p>

<p>Mỗi nhân viên theo hợp đồng sẽ có một giá trị lương cơ bản có thể rất khác nhau. Lương tháng được tính bằng tích của lương cơ bản với số ngày công và hệ số nhân.</p>

<p>Cho trước danh sách phòng ban, gồm mã phòng và tên phòng. Cho trước các thông tin nhân viên gồm mã, tên, lương cơ bản (tính theo ngày – đơn vị nghìn VNĐ) và số ngày công. Hãy tính toán và in ra bảng lương nhân viên trong tháng.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số phòng ban, mỗi phòng ban viết trên một dòng gồm mã phòng và tên phòng.</p>

<p>Tiếp theo là một dòng ghi số nhân viên, mỗi nhân viên ghi trên 4 dòng gồm mã, tên, lương cơ bản (tính theo ngày), số ngày công.</p>

<p><strong>Output</strong></p>

<p>Lập bảng lương của nhân viên theo đúng thứ tự nhập. Mỗi nhân viên cần ghi ra các thông tin sau đây trên một dòng:</p>

<ul>
<li>Mã nhân viên</li>
<li>Tên nhân viên</li>
<li>Phòng ban</li>
<li>Lương tháng</li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>HC Hanh chinh</div>

<div>KH Ke hoach Dau tu</div>

<div>2</div>

<div>C06HC</div>

<div>Tran Binh Minh</div>

<div>65</div>

<div>25</div>

<div>D03KH</div>

<div>Le Hoa Binh</div>

<div>59</div>

<div>24</div>
</td>
<td>
<div>C06HC Tran Binh Minh Hanh chinh 16250000</div>

<div>D03KH Le Hoa Binh Ke hoach Dau tu 11328000</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT095 - TÍNH TIỀN ĐIỆN

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Các hộ gia đình trong thành phố X được chia thành 3 loại A, B, C với định mức sử dụng điện như sau:</p>

<ul>
<li>Loại A: Định mức 100 kWh</li>
<li>Loại B: Định mức 500 kWh</li>
<li>Loại C: Định mức 200 kWh</li>
</ul>

<p>Hãy tính toán số tiền phải thanh toán theo quy tắc:</p>

<p><strong>Tính tiền trong định mức:</strong></p>

<p>Nếu số điện (Số cuối - Số đầu) nhỏ hơn định mức thì bằng số điện * 450&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </p>

<p>Nếu số điện lớn hơn hoặc bằng định mức thì bằng định mức *450&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</p>

<p><strong>Tiền vượt định mức&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</strong></p>

<p>Nếu số điện lớn hơn định mức thì bằng (số điện - định mức) *1000&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </p>

<p>Ngược lại thì bằng 0</p>

<p><strong>Thuế VAT</strong>&nbsp;= 5% số tiền vượt định mức. </p>

<p><em>Chú ý: tiền thuế VAT cũng là số nguyên dương&nbsp;nên có thể lấy số tiền vượt định mức chia phần nguyên cho 20.</em></p>

<p><strong>Số tiền phải nộp = Tiền trong định mức + Tiền vượt định mức + Thuế VAT</strong></p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số khách hàng (không quá 50).</p>

<p>Mỗi khách hàng ghi trên 2 dòng:</p>

<ul>
<li>Họ tên: có thể chưa chuẩn hóa</li>
<li>Loại hộ gia đình, chỉ số đầu, chỉ số cuối. Mỗi thông tin cách nhau một khoảng trống.</li>
</ul>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách đã sắp xếp theo tổng số tiền phải trả giảm dần gồm các thông tin:</p>

<ul>
<li>Mã khách hàng: tính từ KH01 theo thứ tự nhập</li>
<li>Họ tên đã chuẩn hóa</li>
<li>Tiền trong định mức</li>
<li>Tiền vượt định mức</li>
<li>Thuế VAT</li>
<li>Tổng số tiền phải nộp.</li>
</ul>

<p>Dữ liệu đảm bảo không có hai hộ gia đình nào có cùng số tiền nộp bằng nhau.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>&nbsp;nGuyEn Hong Ngat</div>

<div>C 200 278</div>

<div>&nbsp;Chu thi &nbsp;&nbsp;&nbsp;minh</div>

<div>A 120 160</div>
</td>
<td>
<div>KH01 Nguyen Hong Ngat 35100 0 0 35100</div>

<div>KH02 Chu Thi Minh 18000 0 0 18000</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT096 - DANH SÁCH THI LẬP TRÌNH

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Mỗi team thi lập trình ICPC có 3 sinh viên đến từ cùng một trường đại học. </p>

<p>Thông tin về một team gồm: </p>

<ul>
<li>Mã team (tự động tăng, tính từ Team01)</li>
<li>Tên team: không quá 50 ký tự</li>
<li>Tên trường: không quá 150 ký tự</li>
</ul>

<p>Thông tin mỗi thí sinh gồm: </p>

<ul>
<li>Mã thí sinh (tự động tăng, tính từ C001)</li>
<li>Họ và tên: không quá 50 ký tự.</li>
<li>Mã team</li>
</ul>

<p>Hãy nhập và in ra danh sách thí sinh thi lập trình được sắp xếp theo họ tên (thứ tự từ điển). </p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số team. Mỗi team ghi trên 2 dòng gồm tên team và tên trường.</p>

<p>Tiếp theo là một dòng ghi số thí sinh. Mỗi thí sinh ghi trên 2 dòng gồm họ tên và mã team. </p>

<p><strong>Output</strong></p>

<p>Ghi ra danh sách đã sắp xếp theo họ tên thí sinh (thứ tự từ điển) gồm các thông tin: </p>

<ul>
<li>Mã thí sinh</li>
<li>Họ và tên thí sinh</li>
<li>Tên team</li>
<li>Tên trường</li>
</ul>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>BAV_MIS</div>

<div>Banking Academy of Vietnam</div>

<div>FTU Knights1</div>

<div>Foreign Trade University</div>

<div>6</div>

<div>Le Trung Toan</div>

<div>Team01</div>

<div>Nguyen Trinh Quoc Long</div>

<div>Team01</div>

<div>Giang Minh Tung</div>

<div>Team01</div>

<div>Nguyen Hang Giang</div>

<div>Team02</div>

<div>Nguyen Thanh Nhan</div>

<div>Team02</div>

<div>Nguyen Viet Duc</div>

<div>Team02</div>
</td>
<td>
<div>C003 Giang Minh Tung BAV_MIS Banking Academy of Vietnam</div>

<div>C001 Le Trung Toan BAV_MIS Banking Academy of Vietnam</div>

<div>C004 Nguyen Hang Giang FTU Knights1 Foreign Trade University</div>

<div>C005 Nguyen Thanh Nhan FTU Knights1 Foreign Trade University</div>

<div>C002 Nguyen Trinh Quoc Long BAV_MIS Banking Academy of Vietnam</div>

<div>C006 Nguyen Viet Duc FTU Knights1 Foreign Trade University</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT097 - CHUẨN HÓA CÂU

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Một câu trong văn bản được hiểu là dãy ký tự (có cả khoảng trống) cho đến khi gặp dấu ngắt câu hoặc xuống dòng (tức là đôi khi người ta quên viết dấu ngắt câu nhưng cứ xuống dòng là sang một câu mới). Các dấu ngắt câu trong bài toán này bao gồm: dấu chấm (.), dấu chấm cảm (!), dấu chấm hỏi (?).</p>

<p>Hãy viết chương trình chuẩn hóa các câu trong dữ liệu vào với các yêu cầu sau:</p>

<ul>
<li>Ký tự đầu mỗi câu viết hoa, các ký tự khác viết thường.</li>
<li>Các từ cách nhau đúng một khoảng trống.</li>
<li>Tự động điền thêm dấu chấm (.) nếu xuống dòng mà chưa có dấu ngắt câu.</li>
<li>Dấu ngắt câu phải viết sát ký tự cuối cùng của câu (không tính khoảng trống)</li>
</ul>

<p><strong>Input</strong></p>

<p>Một văn bản không quá 100 dòng.</p>

<p><strong>Output</strong></p>

<p>Ghi ra các câu đã chuẩn hóa, mỗi câu 1 dòng.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
</tr>
<tr>
<td>
<div>Chuong trinh Dao Tao CLC nganh CNTT duoc Thiet &nbsp;&nbsp;&nbsp;&nbsp;Ke theo chuan quoc te.</div>

<div>co 03 chuyen nganh la: Cong &nbsp;nghe phan mem, Tri tue nhan tao va An toan thong tin</div>

<div>muc tieu cua chuong trinh la trang bi cho sinh vien cac ky nang nghe nghiep</div>

<div>moi &nbsp;&nbsp;&nbsp;CAC BAN danG ky &nbsp;&nbsp;&nbsp;&nbsp;thaM giA !</div>
</td>
</tr>
<tr>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>Chuong trinh dao tao clc nganh cntt duoc thiet ke theo chuan quoc te.</div>

<div>Co 03 chuyen nganh la: cong &nbsp;nghe phan mem, tri tue nhan tao va an toan thong tin.</div>

<div>Muc tieu cua chuong trinh la trang bi cho sinh vien cac ky nang nghe nghiep.</div>

<div>Moi cac ban dang ky tham gia!</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT098 - LOẠI BỎ SỐ NGUYÊN

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 2</small>

<p>Cho file dữ liệu dạng văn bản DATA.in có thể chứa cả số và ký tự.</p>

<p>Hãy loại bỏ các số nguyên int, sắp xếp các nội dung còn lại trong file theo thứ tự từ điển và in ra trên một dòng.</p>

<p>Chú ý: file dữ liệu có rất nhiều dòng với rất nhiều số và ký tự xen kẽ nhau.</p>

<p><strong>Input</strong></p>

<p>File văn bản DATA.in có không quá 1000 dòng. Dữ liệu đảm bảo số lượng các từ trong dãy kết quả nhỏ hơn&nbsp;10000.</p>

<p><strong>Output</strong></p>

<p>Ghi ra các nội dung không thỏa mãn kiểu int trên một dòng, sắp xếp theo thứ tự từ điển, mỗi từ cách nhau một khoảng trống.&nbsp;</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>DATA.in</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>12 3 4 5 6 7</div>

<div>Aaa 1 1 Bbb XXX yyy 5 5</div>

<div>999999999999999999999999</div>

<div>9</div>
</td>
<td>999999999999999999999999 Aaa Bbb XXX yyy</td>
</tr>
</tbody>
</table>



---

## PYKT099 - HIỆU CỦA HAI TẬP TỪ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho hai file văn bản&nbsp;DATA1.in và DATA2.in.</p>

<p>Một từ được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống, dấu tab hay dấu xuống dòng. Tạm thời chưa xét đến các dấu câu trong bải toán này.</p>

<p>Hãy viết chương trình liệt kê&nbsp; tập hợp các từ có mặt trong file DATA1.in nhưng không có trong file DATA2.in và ngược lại.</p>

<p>Các từ được chuyển hết về dạng chữ thường trước khi so sánh. Kết quả cần liệt kê theo thứ tự từ điển.</p>

<p><strong>Input</strong></p>

<p>Hai file văn bản DATA1.in và DATA2.in, có không quá 200 dòng.</p>

<p><strong>Output</strong></p>

<p>Dòng 1 ghi các từ khác nhau có mặt trong file DATA1.in nhưng không có trong file DATA2.in.</p>

<p>Dòng 2&nbsp;ghi các từ khác nhau có mặt trong file DATA2.in nhưng không có trong file DATA1.in.</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>DATA1.in</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>lap trinh huong doi tuong</div>

<div>ngon ngu lap trinh C++</div>
</td>
<td rowspan="3">c++ doi ngon ngu tuong<br>
ban co phan thanh</td>
</tr>
<tr>
<td>
<div><strong>DATA2.in</strong></div>
</td>
</tr>
<tr>
<td>
<div>lap trinh co ban</div>

<div>lap trinh huong thanh phan</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT12005 - PHÂN HOẠCH DÂN CƯ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Thành phố X mới xây dựng xong 2 khu đô thị mới và bắt đầu kế hoạch di chuyển dân cư. Có tổng cộng N người đăng kí chuyển đến khu đô thị mới, trong khi sức chứa của khu đô thị 1 và 2 chỉ là lần lượt C và D. </p>

<p>Chỉ số A[i] thể hiện mức độ giàu có của người thứ i. Ban quản lý dự án muốn sự giàu có ở 2 khu đô thị này là lớn nhất có thể. Chỉ số đánh giá được tính bằng tổng trung bình chỉ số giàu có của cư dân ở 2 khu độ thị mới (trung bình của khu đô thị 1 + trung bình khu đô thị 2).</p>

<p>Các bạn hãy tính xem khi sắp xếp tối ưu, chỉ số đánh giá này có giá trị lớn nhất bằng bao nhiêu?</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10).</p>

<p>Mỗi test bắt đầu bằng số nguyên N, C và D (1 ≤ N, C, D ≤ 100 000, C + D ≤ N).</p>

<p>Dòng tiếp theo gồm N số nguyên A[i] (1≤ A[i] ≤ 100 000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra đáp án trên một dòng, độ chính xác là 6 chữ số sau dấu phảy.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>2 1 1</div>

<div>1 5</div>

<div>4 2 1</div>

<div>1 4 2 3</div>

<div>&nbsp;</div>
</td>
<td>
<div>6.000000</div>

<div>6.500000</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 2: Phương án tối ưu là chọn 2 người số 3, 4 tới khu đô thị 1, và người số 2 tới khu đô thị còn lại. Ta có (a[3]+a[4])/2 + a[2] = (3+2)/2 + 4 = 6.5.</p>

---

## PYKT12006 - KHUYẾN MẠI

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Một cửa hàng thời trang đang thực hiện chương trình khuyến mại giảm giá. Ban đầu, giá của sản phẩm i là a[i], khi đến tuần giảm giá, giá của chúng giảm xuống còn b[i]. Tuy nhiên, chủ cửa hàng rất khôn, nhằm đánh lừa khách hàng, mỗi số sản phẩm giá tăng lên chứ không hề giảm xuống.</p>

<p>Nhận biết được quy luật này, Tí mặc dù cần phải mua tổng cộng N sản phẩm, nhưng cậu quyết định mua ít nhất K sản phẩm trước đợt khuyến mại, và số&nbsp;sản phẩm còn lại sẽ mua trong đợt khuyến mại.</p>

<p>Giả sử rằng Tí chọn tối ưu được các sản phẩm ban đầu, các bạn hãy tính xem số tiền ít nhất Tí cần bỏ ra để mua đủ N sản phẩm là bao nhiêu?</p>

<p><strong>Input:</strong></p>

<p>Mỗi test bắt đầu bằng số nguyên N và K (1 ≤ N, K ≤ 100 000).</p>

<p>Dòng thứ hai gồm N số nguyên a[i], giá sản phẩm thứ i mà trước đợt giảm giá.</p>

<p>Dòng cuối gồm N số nguyên b[i], là giá của sản phẩm sau khi giảm giá.</p>

<p>(1 ≤ a[i], b[i] ≤ 10^4).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra một số nguyên là đáp án của bài toán.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>3 1</div>

<div>5 4 6</div>

<div>3 1 5</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>10</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>5 4</div>

<div>3 4 7 10 3</div>

<div>4 5 5 12 5</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>25</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: Tí mua sản phẩm 3 trước khi giảm giá, và sản phẩm 1, 2 trong thời gian khuyến mại.</p>

<p>Giải thích test 2: Tí mua sản phẩm 1, 2, 4, 5 trước, tới đợt khuyến mại thì mua sản phẩm 3.</p>

---

## PYKT12007 - TRAINING HỆ THỐNG A.I

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Một hệ thống nhận diện khuôn mặt gồm có N module. Mỗi module có khả năng hoạt động chính xác bằng P[i]. Xác suất hoạt động chính xác của hệ thống được xác định bằng tích của tất cả các module.</p>

<p>Để tăng độ chính xác của hệ thống, bạn phải thực hiện train dữ liệu cho mỗi module. Tuy nhiên, việc này mất rất nhiều thời gian và bạn chỉ có tổng cộng U đơn vị thời gian. Train một model trong X đơn vị thời gian, độ chính xác của module này tăng lên thêm X (tối đa là bằng 1).</p>

<p>Bạn hãy xác định xem sau khi training, độ chính xác lớn nhất mà hệ thống đạt được là bao nhiêu?</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (1 ≤ T ≤ 100).</p>

<p>Mỗi test gồm số nguyên dương N (1 ≤ N ≤ 50).</p>

<p>Dòng tiếp theo là số thực U.</p>

<p>Dòng cuối gồm N số thực P[i] (0 ≤ P[i] ≤ 1).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra trên một dòng đáp án tìm được với độ chính xác 10^-6.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4 </div>

<div>1.4000 </div>

<div>0.5000 0.7000 0.8000 0.6000 </div>

<div>2 </div>

<div>1.0000 </div>

<div>0.0000 0.0000</div>
</td>
<td>
<div>1.000000 </div>

<div>0.250000</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT12008 - MUA QUÀ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Tí và Tèo được cô giáo cử đi mua quà để thưởng cho các thành viên trong lớp. Lớp học có tất cả M bạn học sinh, vì vậy hai bạn phải mua M món quà.</p>

<p>Tại cửa hàng quà lưu niệm có tất cả N món quà, món thứ i có giá bán bằng c[i]. Tuy nhiên, có A món quà mà Tí thích, và B món quà mà Tèo thích. Hai bạn tranh nhau một hồi, cuối cùng họ quyết định chọn một danh sách quà sao cho có ít nhất K món đồ mà cả 2 bạn cùng thích.</p>

<p>Các bạn hãy xác định xem số tiền ít nhất cần phải chi trả để Tí và Tèo có thể mua được đủ số quà và thỏa mãn điều kiện của hai bạn hay không?</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là N, M, K (1 ≤ N ≤ 100 000, 1 ≤ M, K ≤ N).</p>

<p>Dòng tiếp theo gồm N số nguyên lần lượt là giá bán c[i] của món quà thứ i (1 ≤ c[i] ≤ 10^9).</p>

<p>Dòng tiếp gồm số nguyên A, theo sau A số nguyên x[i], lần lượt là số thứ tự các món quà mà Tí thích.</p>

<p>Dòng tiếp gồm số nguyên B, theo sau B số nguyên y[i], lần lượt là số thứ tự các món quà mà Tèo thích. (1 ≤ x[i], y[i] ≤ N).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra một số nguyên là đáp án tìm được. Nếu không có phương án nào thỏa mãn, in ra -1.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
<td>
<div>Test 2</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>4 3 2</div>

<div>3 2 2 1</div>

<div>2</div>

<div>1 2</div>

<div>2</div>

<div>1 3</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>7</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>4 3 2</div>

<div>3 2 2 1</div>

<div>2</div>

<div>1 2</div>

<div>3</div>

<div>4 1 3</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>6</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>4 2 2</div>

<div>3 2 2 1</div>

<div>2</div>

<div>1 2</div>

<div>3</div>

<div>4 1 3</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>-1</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: Mua quà 1, 2 và 3.</p>

---

## PYKT12009 - DÃY SỐ YẾU NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho dãy số A[] gồm có N phần tử. Tổng tuyệt đối của một dãy số là giá trị tuyệt đối của tổng tất cả các phần tử (tính tổng xong mới lấy giá trị tuyệt đối).</p>

<p>Độ yếu của dãy số A[] được tính bằng giá trị lớn nhất trong số các tổng tuyệt đối của tất cả các dãy con liên tiếp của A.</p>

<p>Bạn hãy xác định số thực X sao cho dãy số A[1]-X, A[2]-X, …, A[N]-X có độ yếu là nhỏ nhất.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên gồm số nguyên N (1 ≤ N ≤ 100 000).</p>

<p>Dòng tiếp theo gồm N số nguyên A[i] (-10 000 ≤ A[i] ≤ 10 000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra số độ yếu của dãy A[1]-X, A[2]-X, …, A[N] - X.</p>

<p>Kết quả ghi ra với 6 chữ số phần thập phân.&nbsp;</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
<td>
<div>Test 3</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>3</div>

<div>1 2 3</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>1.000000</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>4</div>

<div>1 2 3 4</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>2.000000</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>10</div>

<div>1 10 2 9 3 8 4 7 5 6</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>4.500000</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1:</p>

<p>Với X = 1, dãy số mới thu được là -1, 0, 1. Dãy số này có độ yếu bằng 1.</p>

<p>Giải thích test 2:</p>

<p>Với X = 2.5, dãy số mới là -1.5 -0.5 0.5 1.5. Độ yếu của dãy số bằng 2 (|-1.5-0.5| = |0.5+1.5| = 2).</p>

---

## PYKT12010 - MÁI NHÀ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho dãy số A[] gồm có N phần tử. Bạn được phép tăng, giảm một phần tử mỗi lần 1 đơn vị. Nhiệm vụ của bạn là hãy sử dụng ít bước nhất có thể để chuyển dãy số đã cho về dạng dãy số ‘mái nhà’, với các tính chất sau&nbsp;:</p>

<ul>
<li>Một phần tử lớn nhất là đỉnh (giả sử là phần tử thứ i)</li>
<li>Các phần tử bên trái và bên phải giảm dần đi 1 đơn vị, tức là với mọi j, A[j] = A[i] - |i-j|</li>
<li>Tất cả các phần tử A[j] đều phải lớn hơn 0.</li>
</ul>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số nguyên N (N ≤ 5000).</p>

<p>Dòng tiếp theo gồm N phần tử của dãy số (1 ≤ A[i] ≤ 5000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra số bước ít nhất để có thể hoàn thành bài toán trên.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>5</div>

<div>4 5 6 2 2</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>3</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>6</div>

<div>4 5 6 5 4 3</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>0</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: Chuyển dãy số về 4 5 4 3 2</p>

---

## PYKT12011 - XÁC SUẤT CHỌN BIT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho chuỗi nhị phân S có chiều dài bằng N và số nguyên K. Chọn ngẫu nhiên 2 số nguyên i, j trong khoảng từ 1 tới N.</p>

<p>Xác suất để S[i], S[j] đều là bit 1 và |i-j| ≤ K là bao nhiêu?</p>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 100 000).</p>

<p>Mỗi test bắt đầu bởi 2 số nguyên N và K.</p>

<p>Dòng tiếp theo gồm xâu S chứa các kí tự 0 và 1.</p>

<p>Chú ý: Tổng giá trị của N trong tất cả các test ≤ 100 000.</p>

<p><strong>Output</strong></p>

<p>In ra xác suất tìm được dưới dạng phân số tối giản dạng X/Y. Nếu xác suất bằng 0, in ra 0/1.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4 3</div>

<div>1011</div>

<div>4 1</div>

<div>1000</div>
</td>
<td>
<div>9/16</div>

<div>1/16</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT12012 - VẪN LÀ XÁC SUẤT CHỌN BIT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Chọn ngẫu nhiên một số X trong đoạn [A, B], sau đó chọn ngẫu nhiên một bit của X. Xác suất để bit chọn được là bit 1 bằng bao nhiêu?</p>

<p><strong>Input</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 200).</p>

<p>Mỗi test gồm 2 số nguyên A và B (1 ≤ A ≤ B ≤ 10^10).</p>

<p><strong>Output</strong></p>

<p>In ra đáp án tìm được với độ chính xác 5 chữ số sau dấu phảy.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>2 4</div>

<div>3 5</div>

<div>20 40</div>
</td>
<td>
<div>0.61111</div>

<div>0.66667</div>

<div>0.55556</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1:</p>

<p>(10) (11) (100)</p>

<p>Xác suất để chọn được bit 1 là&nbsp;: 1/3 x (1/2 + 1 + 1/3) = 11/18.</p>

---

## PYKT12019 - PHẦN TỬ CHỐT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho dãy số A[] gồm có N phần tử. Phần tử A[i] được gọi là phần tử Pivot (hay phần tử chốt) nếu như nó phân hoạch dãy số thành 2 phần:</p>

<ul>
<li>Các phần tử bên trái có giá trị nhỏ hơn hoặc bằng A[i],</li>
<li>Các phần tử bên phải có giá trị lớn hơn A[i].</li>
</ul>

<p>Với dãy số A[] = {2, 1, 3, 4, 6, 5, 7}, có 3 phần tử chốt là 3, 4, 7. Với phần tử 3, ta có phân hoạch {2, 1}, 3 và {4, 6, 5, 7} thỏa mãn các tính chất nêu trên. Với phần tử 7, tập hợp các phần tử bên phải là một tập rỗng nên cũng thõa mãn yêu cầu.</p>

<p>Việc xác định được phần tử chốt đóng vai trò quan trọng trong thuật toán Quicksort. Các bạn hãy xác định xem dãy số đã cho có bao nhiêu phần tử chốt?</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test (T ≤ 10).</p>

<p>Dòng test bắt đầu bởi số nguyên N (1 ≤ N ≤ 100 000) là số lượng phần tử của dãy số.</p>

<p>Dòng tiếp theo gồm N phần tử A[i] (0 ≤ A[i] ≤ 10<sup>9</sup>).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra đáp án là số lượng phần tử chốt tìm được.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>3</div>

<div>1 1 1</div>

<div>3</div>

<div>1 2 3</div>

<div>7</div>

<div>2 1 3 4 6 5 7</div>

<div>&nbsp;</div>
</td>
<td>
<div>1</div>

<div>3</div>

<div>3</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT12022 - PHÉP TOÁN OR

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Phép toán trên thao tác bit OR lấy 2 dãy bit có độ dài bằng nhau và thực hiện phép toán lý luận bao hàm OR trên mỗi cặp bit tương ứng. Kết quả ở mỗi vị trí sẽ là 0 nếu cả 2 bit là 0, ngược lại kết quả là 1. Trong C, C++, Java toán tử thao tác bit OR được biểu diễn bằng kí hiệu "|" (vạch đứng )</p>

<p>Ví dụ : 10|17 = 01010|10001=11011=27</p>

<p>Cho một mảng a gồm n phần tử. Một dãy con liên tiếp của a được định nghĩa là một dãy a[l], a[l+]),a[l+2],...,a[r] với 1 ≤ l ≤ r ≤ n</p>

<p>Ta định nghĩa phép toán OR của 1 dãy con liên tiếp của mảng a là việc thực hiện phép toán thao tác bit OR của toàn bộ các phần tử trong dãy con đó. </p>

<p>OR(l,r) = a[l] | a[l+1] | a[l+2]|...|a[r]</p>

<p>Nhiệm vụ của bạn là tính giá trị OR của toàn bộ các dãy con của một mảng a cho trước và đếm xem có bao nhiêu giá trị khác nhau.</p>

<p><strong>Input: </strong></p>

<p>Dòng thứ 1 gồm 1 số n (1 ≤ n ≤ 1e5): số phần tử của mảng a</p>

<p>Dòng thứ 2 gồm n số a[1], a[2], ..., a[n] ( 0 ≤ a[i] ≤ 1e9)</p>

<p><strong>Output: </strong></p>

<p>Với mỗi testcase, in ra kết quả trên 1 dòng.</p>

<p><strong>Ví dụ :</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>1 2 3</div>
</td>
<td>
<div>3</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test: </p>

<p>Ta có tất cả 6 dãy con: (các số trong ngoặc là vị trí đầu và cuối )</p>

<ol>
<li>(1,1) -&gt; 1</li>
<li>(1,2) -&gt; 1|2 = 2</li>
<li>(1,3) -&gt; 1|2|3 = 3</li>
<li>(2,2) -&gt; 2</li>
<li>(2,3) -&gt; 2|3=3</li>
<li>(3,3) -&gt; 3</li>
</ol>

<p>Có 3 giá trị khác nhau là 1, 2, 3-&gt; kết quả là 3. </p>

---

## PYKT12026 - 2X-Y

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Mảng a ban đầu có n số nguyên. Bạn có thể thực hiện thao tác sau nhiều lần:</p>

<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - Chọn số 2 số x và y bất kỳ trong mảng và thêm 2x – y vào mảng. </p>

<p>Với 1 số nguyên k, hãy kiểm tra xem bạn có thể tạo ra được số k hay không.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên chứa số bộ test t (t ≤ 20).</p>

<p>Mỗi test có định dạng như sau: </p>

<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - Dòng đầu tiên chứa 2 số nguyên n và k (2 ≤ n ≤ 10<sup>5</sup>, -10<sup>9</sup> ≤ k ≤ 10<sup>9</sup>)</p>

<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - Dòng tiếp theo chứa n số nguyên ban đầu (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)</p>

<p><strong>Output:</strong></p>

<p>Với mỗi test, in ra “YES” nếu có thể và “NO” trong trường hợp còn lại.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6</div>

<div>2 1</div>

<div>1 2</div>

<div>3 0</div>

<div>2 3 7</div>

<div>2 -1</div>

<div>31415926 27182818</div>

<div>2 1000000000000000000</div>

<div>1 1000000000000000000</div>

<div>2 -1000000000000000000</div>

<div>-1000000000000000000 123</div>

<div>6 80</div>

<div>-5 -20 13 -14 -2 -11</div>
</td>
<td>
<div>YES</div>

<div>YES</div>

<div>NO</div>

<div>YES</div>

<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT12027 - ĐẾM CẶP NGHỊCH THẾ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho một dãy số a<sub>1 </sub>... a<sub>n</sub>. Một nghịch thế là một cặp số u, v sao cho u &lt; v và a<sub>u</sub> &gt; a<sub>v</sub>. Nhiệm vụ của bạn là đếm số nghịch thế.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên chứa 2 số nguyên n (2 ≤ n ≤ 10<sup>5</sup>)</p>

<p>Dòng tiếp theo chứa n số nguyên của mảng a (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)</p>

<p><strong>Output:</strong></p>

<p>In ra một số nguyên duy nhất là số cặp nghịch thế tìm được.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>3 1 2</div>
</td>
<td>
<div>2</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13006 - TÌM CHỮ SỐ

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<p>Hãy tìm 3 chữ số đầu tiên trước dấu phẩy của số (3+sqrt(5))^n.</p>

<p>Ví dụ: </p>

<p>Với n = 5, (3+sqrt(5))^5 = 3935.73982… Đáp số là 935.</p>

<p>Với n = 2, (3+sqrt(5))^2 = 27.4164079… Đáp số là 027.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 100).</p>

<p>Mỗi test gồm một số nguyên n (n ≤ 2 000 000 000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra STT và đáp án tìm được. In ra đủ 3 chữ số như test ví dụ (n = 2, in ra 027). </p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>5</div>

<div>2</div>
</td>
<td>
<div>Case #1: 935</div>

<div>Case #2: 027</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13007 - TỔNG CHUỖI MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Phép cộng hai ma trận có cùng kích thước&nbsp;<img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAC0AAAAiCAIAAABELscYAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAATxJREFUWEftVlsSwiAMVI/V3ie9Dr0MHqbeBTfhoRHS6YcfnU7y4cAA2WWTrdxTSrcTxOMEHJiC89CFcD1cjz1ren94f3h/HP/zuoZfXus8r6/u1s9lXp7HtZCdKW2RJgymsGEcZIxJxMMkL5QlzPvYAnbIyRaRrAMKqOSeiIHwBopESMP5KASiKGSQnBCS386bob+pAMlkbQIJEejBwefbvSTzrRCVpToeaiKK4jQFm4RSSwEVMTMPRv6oqy6llwwiRZWfChl11EC1Lk3admeFfIhGKY3osStdrnjuiFyEOhE9lPT23rEYqlVzgSpQd6ADatowD91cam9dgo+UKSqC5Zcxla7gLAeaC7/s206sLyMWT4uP+gC9AT/254iIBsq43N6c+s6eOUFc47v+PyFdD38X+rvwuJ/O4pc32787oZIAvCoAAAAASUVORK5CYII="> ,&nbsp;ma trận tổng&nbsp;<img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAE0AAAAiCAIAAACVycNoAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAeZJREFUWEftVzFygzAQhLwFXGT8AvECTxpXbtNBSZp0LvMAKJMnpEqFXmC/wOPC4i/KSQIh2QEUkGfA6CoYxN7t7eoEPqXUW0A8LYAjo+h4PpbQTk+n5xw74Hw7R9Xaa3Z6Oj3n2IFF+rbEeRL5dURRgsv7aYcTSJRgewk4oBZRlEt8+F8RQTIEOeOCNHdxIZ/avhDZIJ0BMFtrtLCIVUiSKbe1b3ESvh0B7HMT8A4HLzuEnkN73daQyvz1e8fKOF1sOybebqpUQbptMgieZf7x5aHsvV7CiKaHQyo42w7Gcr1PV7Zx8Q+QULQpLyfPW68ECeYbXe8+J1WWa6sSZcL5rQHZuAsZTu/iekcZ+FbDI+BagJevMZ68cAOgvgYYPQeWFTnjtGb787r9wFFpOPDkC4waa0SkT0vZ0Q6eQyzDTNmwuCZV8/yHnEOKUEe6ZniT/hrpqdO8Ue/P7wQ4iToONphQXZq1Ti8YP3yky+BjwVJoM4dhkvOxGUJiDmkak+I+Nr51KT/fLOmpowsOGjaft5QUMJzqQEjfwuN3pcRXgKWY/Ux7fSu+CJQABpk6hSj1gYUl69wNpsyj8LyHT5gRGebAcwQ9+eoi/1dsNG6iGE7PiQozsCyn58DGTfQ1p+dEhRlY1i8iR4Do+MnfKQAAAABJRU5ErkJggg=="> &nbsp;có kích thước&nbsp;<img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAC0AAAAiCAIAAABELscYAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAATxJREFUWEftVlsSwiAMVI/V3ie9Dr0MHqbeBTfhoRHS6YcfnU7y4cAA2WWTrdxTSrcTxOMEHJiC89CFcD1cjz1ren94f3h/HP/zuoZfXus8r6/u1s9lXp7HtZCdKW2RJgymsGEcZIxJxMMkL5QlzPvYAnbIyRaRrAMKqOSeiIHwBopESMP5KASiKGSQnBCS386bob+pAMlkbQIJEejBwefbvSTzrRCVpToeaiKK4jQFm4RSSwEVMTMPRv6oqy6llwwiRZWfChl11EC1Lk3admeFfIhGKY3osStdrnjuiFyEOhE9lPT23rEYqlVzgSpQd6ADatowD91cam9dgo+UKSqC5Zcxla7gLAeaC7/s206sLyMWT4uP+gC9AT/254iIBsq43N6c+s6eOUFc47v+PyFdD38X+rvwuJ/O4pc32787oZIAvCoAAAAASUVORK5CYII="> , phần tử đứng ở hàng thứ <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAYAAAAiCAIAAADzkz8/AAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAH9JREFUKFNj/P//PwMqYELjA7nDROjORGtGxvTtIP8BvQ0G29IYGNK2gViMRIfE9nRGELCeeAcSUmCDbk+wgpkEDFE0s4FccBDeuXWFwUpLFRbAUG1WE27DnANSdfvaMQYdNRWYIqAQTBvQ/XDXb0sD2sdglbYNopd41w/G2AYAbeBeZ4KbbToAAAAASUVORK5CYII="> , cột thứ <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAcAAAAiCAIAAAAcUVQBAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAJlJREFUKFNj/P//PwMGYMIUAoqMFNHt6YyM1hPvoPr4zq0rDFZh3ipAUUaSw+zORGtGEEjfDg1YoAlgsC2NgcFqwm0IBzl8oVaBlCMpTdsG0whVC3aVliosuiCid7auOsagowZyKgTArULoh9qGph8Sxxj6QSbcnmDFwICsH5huboOcjyYISk1WadugXoI59z/pYYaeBClPfQBhOoU8XflH6AAAAABJRU5ErkJggg=="> &nbsp;xác định bởi:</p>

<p>Phép nhân&nbsp;hai ma trận chỉ thực hiện được khi số cột của ma trận bên trái bằng số dòng của ma trận bên phải. Nếu ma trận&nbsp;<img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAsAAAAiCAIAAAAGbbSPAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAALhJREFUOE9j/P//PwNewIRfGig7qgI1iAYuPLanMzIypm+HOgfTHXcmtsxCdiu6ijsT41eFTUhjYLhy6w5EHaoKkLxOTb4aTjO2dxfo1Mz0ZFDVskKoQTJje7rXlQmlnlC5Y9duQ1gsMMVA+Vlp2/6rYKY5YDoFgtsTkMyFKLKacBssBbYF6MCCY0AD4GAb0DMwAFQBlQe6EAbu3EK2a1sa2HyrtG0QQ///hxsAsYdxNL+gxA010joAbfpXbmJBqbcAAAAASUVORK5CYII="> &nbsp;có kích thước&nbsp;<em> </em><img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADEAAAAiCAIAAAB5vKZ+AAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAATxJREFUWEftVlsSgzAI1B5L70OvEy8TD6N3SXnEKCbp8Gmn8KUDYZddUjumlIaHxethfIiOc7KZ4jq5TjYFbFW+T66TTQFble/Tv+q0L/O87NX063t+rzZNmlUpbREmTE1hw+fAz/gS8Y+VJHIK3+vYAlbwyRIRegcUUO49AQHpGCIAtqTeEAJAZGIIBBiM1ceQTldaiNqdoAtUkRqkMfUq8zLKcAxAqcYw19GECoQ+IaWiAtIic51wIhZnUg2rU00Di1o3Fztea6CWd6VhSSoWJkrZPtbpq6SyFYdZPQdYJ5W0nTs1UGsuJtZrm8sroIZz4p1eTHXuSOF9VJfroNS7d21a1VKQZriMt2rkVAtzYZ9/J/g+1oFUG1zpzrdIaSDBpatxbz3Snj8s/BtsM8R1cp1sCtiqfJ9+V6cPr7ebQdErtcUAAAAASUVORK5CYII="> và ma trận&nbsp;<img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAwAAAAiCAIAAADksa/2AAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAALlJREFUOE/tlLERwyAMReXM4qTIZQJtkM5T0GYV6kyRimzgCXwpjHdRJJABpXGXc2F1Ek98IQEdEcGWnbYAWT+gXbYAeMBiwf0OEdEHXVwhxdwaj16y1LUDdsNdN+wfA1PTvJhb8H49Aa/nIrrME8Dt0qeAykaPgD5mL7IYu0VbIWFaY0ATJEkhOVzZiFJKdRWyDOtZKp3OFCmB+Blr1bnwlFc7FFJ9jRrL5bY1huh8WzZRd7y7P38YXxz50d+F8BoaAAAAAElFTkSuQmCC"> &nbsp;có kích thước&nbsp;<img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACgAAAAiCAIAAACiBwxcAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAUFJREFUWEftV9sRwiAQRGtRPxwrSPo528FmsAMrcPyQ9IJ3gAiES3wM+iF8ZcKxe7ssZLIwxohfjOUvSImzEX/N+WZ1s7qaAy1c1azNgZvVM1YPh74/DKOi477fH1/cJWO0gg4XdVKHZ9GBwg91YWiJtbY0DAX5m/vUFLJQAAhDeCAlgCJ2AueY/bTnRmiO1RSRQ7lw3dH6IISIU1G5dMcHkmdN/HioeGhyxCkVofKCPaSFmOlvhGwFOk2WOPX2CV6/01bxdIsIFpkXEVnihGrW6CRfznMmiRlypNcpTgJybwq3sYTHpbrMHVe751CHxFmI/eZR1sdDY/DHE3RsisxkNEaQ0mDDGEH6VJcP7advp9JS864ermfRbdflG60msb6cxG6zYq7ST+3k19tLiT3pi/bv9OLH7e3ymuGabOr/iG/3C9UgTf0JZQAAAABJRU5ErkJggg=="> , thì&nbsp;ma trận tích&nbsp;<img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAE0AAAAiCAIAAACVycNoAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAZ1JREFUWEftV2uagyAMrHssuQ9ex14GD0Pv4oaANLy7K+6HC/yqRSeZzJDotO/7o4P11QFHRXHw/F9CDz2HnneswPDtHVVL5zz0HHresQJd+va1PRc2HYuxZXtdp922QKBlqxcAAZ3F2NPiw/eKXnKdISYX8n3Fhd2t/UNHg3A1gQWnkHIllw8Tx71F055Xzbn+QnCVRjJEIrzgc6Y0igTdVtcmguaJ1b2OllcoxQHSIVlEKhlJKf/AHgAihOGNPAMxswoay6UOVrFcEA2DK5zszZSqLJH08CS4FuCtuoon5V3fox4i5GvIfRJW0+NZizv95V194EiOHfD8S9PSE/QJT9sfiy7xXOuTOnj+oPH93reRJwv5m3RRz3yKvq89olGexwmqa+JAv9KRc1LVBk6OoSg4ab72fB6FleKa3hu6FOdbbrD4uxmqLrrm4GCbuQJzyZ7gWXX9upMT2gniE2Ds8fhfdEpDEXi4oXAimuo3ArKAwepSmMCb9V692kXq8j2+XTlOZzb0PF3CpgCGnk3JcTqZoefpEjYF0Iue346Ve8GQMV5RAAAAAElFTkSuQmCC"> &nbsp;có kích thước&nbsp;<img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAC0AAAAiCAIAAABELscYAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAWxJREFUWEftVtFxgzAMhczS9CPXCWAfZR1nGbNBJuj1o7CLK8nGWMFy+eA4Lmd9mZMtPT/pCbfOueYEdjkBBoJQcchCVD4qHyVp1v6o/VH7Y/vP6z30Mj36/jGtbj3c+/uwnQve6dxoocNFZ0ZcG17jh8WHiXcEF36vbTS4g09Gs6AdEIlC7A4oEb6BLACGoXhgDIBlMBgc0Di+HtenTqFgJhV1NlHcjnyQ0fl4L47cBKDsmtdZTphRPA1GByHYWsL5GxMjHgd9L+yKS0mXAiSw8lIhpY5JGZdMjGOBtQK1CUYoDfNRpg4TJzCSvIxDUC9B/V8V0aq+QL71MiajpbwTDtlcYu/sQh0JUcw5NL3koYiWZqXFfaTb2CwzN6KCrGnW0doQXgYf6TMLhKqC3RyGgTgZ9KL2356OUo0PnOvT73fT3a75OXsgjvHn2Xx9fijzfk/ii7F4VKoTpqVZdgI7sC7F21Yc9b1eapA/QdxDBhRaPqwAAAAASUVORK5CYII="> , phần tử đứng ở hàng thứ <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAYAAAAiCAIAAADzkz8/AAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAH9JREFUKFNj/P//PwMqYELjA7nDROjORGtGxvTtIP8BvQ0G29IYGNK2gViMRIfE9nRGELCeeAcSUmCDbk+wgpkEDFE0s4FccBDeuXWFwUpLFRbAUG1WE27DnANSdfvaMQYdNRWYIqAQTBvQ/XDXb0sD2sdglbYNopd41w/G2AYAbeBeZ4KbbToAAAAASUVORK5CYII="> , cột thứ <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAcAAAAiCAIAAAAcUVQBAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAJlJREFUKFNj/P//PwMGYMIUAoqMFNHt6YyM1hPvoPr4zq0rDFZh3ipAUUaSw+zORGtGEEjfDg1YoAlgsC2NgcFqwm0IBzl8oVaBlCMpTdsG0whVC3aVliosuiCid7auOsagowZyKgTArULoh9qGph8Sxxj6QSbcnmDFwICsH5huboOcjyYISk1WadugXoI59z/pYYaeBClPfQBhOoU8XflH6AAAAABJRU5ErkJggg=="> &nbsp;xác định bởi:</p>

<p><em>,1</em><em>1,</em><em>,2</em><em>2,</em><em>+..+</em><img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAP0AAAAkCAIAAADNZqtMAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAABNFJREFUeF7tWz164jAQVXIWSMGXE5gTQJqttk1nSmi2S5kuDS6h2zZVmuAThBPk2wJ8F1Yj2yALjSwGYYg9bvYjHo3mvXka/Vh7t9vtBD/MQMcYuO8YXobLDAADrHvWQRcZYN13MeuMmXXPGugiA6z7LmadMbPuWQNdZIB138WsM2bWPWugiwyw7ruYdcbMumcNdJEB1n0Xs86YW6n7LBnewTNJ25Lg9iEiZyYMFa3UfW/6tZ1HIhr0yezeWMP2ISITHIaKVupecrr9t45+P/XI7LoaQsVpfiq5AKKAQAK6qs9ZACpaqvv0YykeHy4j+/q8XMKifYjILIWgYq/7LE0m+aoYFsZJRo7qjIZZWoYwnCRpMiQX1WzzLeJfo9If3dEZYFTT9iGiMRKMB+A0RHJz3ctZqj9+Fy9b+b9Q5Mo4GtBXCOW2oxxCxr9DdESpGL4fVxDD7kXMxjNBXp/DRCg+Jm/iz9dut4rXy9drDOT2ISKKPmBmiyXs+cnNlS5ENFeCu9ZjxKC2peSIVrGkJ14VWJTr/a8AAMFhvb8fgMgPiBdjuKugPMhYwiRXFLKvz6MXfKqRqU0ARw7JGDTgiz6GFCIVHv7YvN8mIgIQLKWeroLyUKRC45uaXKl7l8bkO7tk0PHtSYfBphG+JSR7JNtVfFR7DdlXiLfZV0LxKYE+NopVIz/GQD5GtF3NJRx4olif7DBEmL0vIi8gfqUMdUXhwdGlK7k+kZZxiryWkWurT1/1NtUYQMv1FRqSHs9BKMd60v60nxZR+/rwDAsfuVAQyVBzucvRWUlJ9eceEWrvi8gHiKcvzBWFB1eXCBWeUR7M7kXv4VGI701+gAP77vIUJZ1g3zzVG3yHevruR4shSyabgYxInkLKYCYpxGWNpDeaLhbTp4HZG2z3SzzSw3gpB8FiJARmr7UPiIuCaLTYLaZw9trrD/R1FYYIsz8fkSLicJpm/DwlvxQe1KneMEmLQyD9NA6jwtEEYQOGgCqwanqN4vw8JX+goJS7w+qIwt+cPPLyBttihpcB5B1X53q0v6M6A47myHpB9ePck3rh8iuTVER5kNoSqQbRkb1/ppyLE9uciSfXta/N1eWb2e1KSlCtjtTkV1kNIlS4miBsyPU9+lTp183QZT9R9XXN8Ej8NHjw77b3w3VqnzZ0OCKoQictO532TkQhgBTgqK7sPGjevCpRtaA5y3VRUFy6dxXZMw9I6oRuvMeRnMq3094hxhMDrjXHEAUVvTlz1EbVvIGVh0vJXsuv456C/Bwsb3ZlaZrCdy1tuZd9vq8bvQSARgL3cOQUWmxOfNadVfur4bIjkuG8Dv7CZkQy7vHN3GJ/NUQ+5B/b2HmAz475N0vtvbsDexOcDdf9nEG0nj2/bfqQB+1yI8i+4auO1kjUbmu8XIvlrO9z59huf0DSKC4Loix5nq3XgEU+/ZncnbsfzP5KiOrCtb+3ZRY2r0VdlRt8TYN4F3gTjA2fqU1uEw/HycYJqk/7cDaVSM52ewu42oeIlpawPOQxOPLrWt8fAVCHsbAxv+qVBhqvrlbtw9U+ROdk3cLGnfRHm6G4FTPwcxlo6f37n5sQjrwRBlj3jdDMndwYA6z7G0sIh9MIA6z7RmjmTm6MAdb9jSWEw2mEgf+JDmo1A6n1KwAAAABJRU5ErkJggg=="> </p>

<p>Phép nhân ma trận có các tính chất sau:</p>

<ul>
<li>Tính chất kết hợp: <em>×(</em><img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAMgAAAAiCAIAAACV5QEtAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAA5dJREFUeF7tmstx4zAMhpWtJduE3Ueue1OOaSAd5CKXsNcUoFSQKuRevHxI4psAFWJEzsKXjGMJBH98BEBKT4/HY+APK1BbgV+1DbI9VkAqwGAxByQKMFgksrJRBosZIFGAwSKRlY0yWMwAiQIMFomsbJTBYgZIFGCwSGRloy5Y96/b6/V6u5+ry/12vb7evk724lwNuh/9yTzSEfH8/fmyfL89NzAr4cyfz5e/bTjTgB79uSDAUp95HIZx3r618HeZLo151IIqqw/LPI2Xy7S04JII1GWcZteXQXsGB1GCVzXOyqDzEUK5ZNPBruKyDy508WSpF6/quq3RCqBC6PnzWSV1k3A5LmmwwAhK8CqDpUc1rC5TiC7o1yGp9GQ2ltQ3qlxNoVtSFFjPQ3LtNwG6uclJgSU9yqVVieMk4568SF0R5uV5FLkgORtfoYgbWbIODerhrNc/UU2h0C1TWxB6buWpPFgY3WwHdrDSAKgSOgP0KZpddyFc/d9jqSNv48CgkVt+tozTd5PolllpGD1N41MYLJxulncSrHwxEBcr6ORV2ZVtj71AVHn2FlEIhfmA7tqDFnQ8axVLbcfAJEeiW0ZWR6qUnm5ZW+eACBZWN0MWBJa4chse0YtoF8ds1dy2NbprMw10tH8GwZLEFw5K1U85uYtIt3TC8tcBvB+h0M2Any+F9jyQTa6eILievcqayrRw4ts3tYhBcfm8Qmmk0i0TA1cp5EyRwUJac8parnmPFAMAmNUDlbHyiSHaEATWUTDjB0WZ27g6XgrpdEtPAKens2YodDMVJn3cEEwCyh4O17o8JXeEUePhpj+7KTS5agMSGDTSTG6NUIUs5QBpz7ymbilBkHqaaZYEq0A3rxRGDrLCtaHOmXLnDdFdYZwt17o4dYuXT4irSIrOs+XcoIeFi3YRdLS6pbbmSD0d9iNb+GQiwOpm+bGevLtoibZOddZWA6i2Bep/0ccIgrox/EHaiTirj0Ltxj18IrDW62w9LRp02zOsU9NzqXzkTqxb6igbqae1IywIVpFu3nGDtU+rvH6LFrvfAFAdWx53qoU7oSx+po+2b3vG0h1LE482RUKNprAzNWto7FbRknXQVBjrtZn+3sz4Xz1u6gUnHYTgNSd+g7RDOp/fvpf34eP8VzJ3qK4fw7v78hxnrA7B6sFlzlg9RKlDHxmsDoPWg8sMVg9R6tBHBqvDoPXgMoPVQ5Q69PEfQv5RAWDS5XoAAAAASUVORK5CYII="> ;</li>
<li>Tính chất phân phối:</li>
</ul>

<p><img id="_x0000_i1025" src="data:image/png;base64,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"> ;</p>

<p>Cần chú ý rằng phép nhân ma trận không giao hoán.</p>

<p>Ví dụ,</p>

<p><em>; </em><img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAS0AAAAxCAIAAAAA4mjtAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAB8tJREFUeF7tnT1a4zAQhs2eJaHgyQmSE5BttqKli0vSbJeSjiYpSUdLRbPxCcgJeCiI75KVZMexpJEtWWMpP+MOkKWZV/PZ+hmLm/1+n9BFBIhAVAK/orZOjRMBIsAJkA4pDohAfAKkw/h9QBYQAdIhxQARiE+AdBi/D8gCIkA6pBggAvEJkA7j9wFZQARIhxQDRCA+AdJh/D4gC4hAPB3mq3SVlR2QZ+nkprgmaZbjdEuerdLJZCXVlqWp/AucpgLXUkfHm4Y89TLpctFVWFSGuBgLgFVIH2KuIfxYXlv4a7eZjcfLXdnwZpYk5U+75ZgBmW18TeINCORaVayF8WxzaNq3nfD3y+j2e7OnHW27XHQVEJUh+wMqRh7QVUSLH6o4NIVf0rG3fG7jlh31IaR3/FGY7SfEzbJQmtzO0WLT7318CnSvYnqbp85WtVV4xugqFroPbV67YmQtHN8yexHgtZ9BhuF1qJihWinUU7PalUGtvDlozjScjGaj+3Nx6BpU2PcDWotw6AURen6Yr57X4+Xfe3n6MrodSL/Yfu+85jdtN9//XY7Xz2c2U4TRtbmK/fezRFebFULhh81Iqi//975NZounWoQDDAPrMHuZb2Wbdt/bXjHAlQ+eFrPt/OWwToRigZibl2tNPUhcR4ditXMlfaA7GMHX68rVjUkfC2rhGearxzmbZr3KLx6dYVgdZh/rZPZHsml4VyyohL7u/8yS9QeiELOX6ffdm5jyj9bIEmdwAHShkR3aQ0dXObL7WI8WfA3tQhhm6XA+2nwqKuTuqgyD6pDH0vhuqMfP14+8VwEWQg47/gDAFOL96/5VDD4GfTxajOiQqVhVh42uapQzvL8Uhuzd/pxsdoAIub8Kw5A6FLH08FueCg5+P4yT2nww//lKEnW+aBUdjoVEw5hCrAZX/94TbQbsaJxaHETnWWf323tDV5rERviP7yN1MNfd3uLOoAzz1WT69fBWPFVY22mqDL0UhpAOs5TNctT7fCmw3WZYYYVBzyuxfc+H01t9HadT46I99U1bq2lwO2r8e0ujBkpZ+vi9+KzPyjsZL9/U8nBq89TZgrYKPdFV9gAMWQDfDKdzXgQpn+Mg7tYHfJvX9hhZGLPnSBUFOX8EqJfCUNsXKLbSPbfwoN2Ghg2J3bLcdk/Gs2p7v/uOBc8SqM062Q/ghqSyc+nUHkyJNey39WmwwYjO0lN71ywr9EF33E43R5rYVsfZvTo017QfZum1LcZi616+9LiQGKr7h3y/f7lE28KrW463MWjLo6WcvrFjWzFISfyySNRhzxWEx4m8sYUblbaeGsp1R1dXoRZpLETKXCfeAK7Hpx1+8rhUvE8XT7f2b2D7ksEmfvYmdSwJUhIj6u18KDYuhnM2JMa7LgddxQSONLaxljwLhEM2rnvDHN2fOENJh2x7ZbRg6zvNC358BN9wKZnVeNGIXpMYoWtX6+wYpjR4+qy/O+AZ4rWjO04MDZE2eHotMbLFfnlBr9ZRl4FRCr+aDrN0+nVc5zOntCgRp45csNco0OXnV6EtJbCV60Z3VKFlpJl66gIxVjpk8bWWM1384vVs72Z7WHu2iwXbT5Sa+rURXV2FFGkqxlKHPHcxSdbTYrw5nLNcM+OKv8+ooGEbIbxwxZTB5XKhBNZ7vehqE0P7SDP1TWeMpxt+QodijaG+sAotvFZQOo4K4NmYiwx6KWufMuBGCXNcevbo6sszDpGGOS49cYZMh2V81YZi+U8fIc9Xf/r+kMLJbp5irmfQiYetnsUQihLowXmjU1XYe6SdIcNfLP9DjEI/quMoeHIqG6Ru54+4Xw1gJWE4aa2hsMNKNvsOIBQl+D3ql/qDRewoqNbcFL1JYigzUcLPc0PX6fbGz1V3G5ZUg7l121ahYWNX/pjayb8eC4dCV0ArI8aY3HRW6Cw+Abbz2qF7LSqUGQb9Ht+YDYV6OohIaDGeTyP1ii77vjLTHPoQLBoGXcPBKu2ZUaeKTs6jA/IOLb2278LybBeRW8UUCR65pDzKguqwOKpDJYF9OsjeqsKTS3OyScLrG13zwSoHC88NXZsQ7by2lyE/96LhfBpRkcowrA7NZzeVpqFmSTeN5dBPdHHopo5FG0zuxxtDEmk/jXWE4nibhe0IqbOyUdBjS7MjtA7FKxGeBVowcqNurhA/i9jNsm6lA6ITIypo8NLQf92cCnxXa8+jfElycGonTmjUcv4BI4LrsOhfSInBdNjaF4Fjw765YOjKXoJOf0X+DMLeeaSSjb0v/ogyKCs/jGMrXkyH0nm5oAERdCiGoMAngYF0CLaN1McBqiF0/pBNIYAegWKdRnxaW2nb0HYcHRajHuXBg04BqFA6R9y/Q+PU0De6IlTUI88vAl19yUYLv74Oei+XT8v3D/xhajQd6iEcQodxhNN7q4jolFHTZoYySuudgGcDqF7zyrQs0RaMIc+Jak7rwDsdpGwHvUL0tBSsCvE8tTlYBcvq06mnB6/X08P/Syo+DlBOC9V993yQYNyOfDpIMf20OJ8Gw/bIdSB7KkZQynX570N0r4tl0gNHdZ0GDJkb9tvTeTCRJUTgOgmczrj0OvmT10SAEyAdUhwQgfgESIfx+4AsIAKkQ4oBIhCfAOkwfh+QBUSAdEgxQATiEyAdxu8DsoAI/AfsPSgXfutPTAAAAABJRU5ErkJggg=="> ; ...</p>

<p><strong><em>Yêu cầu:</em></strong> Cho ma trận <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAsAAAAiCAIAAAAGbbSPAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAALhJREFUOE9j/P//PwNewIRfGig7qgI1iAYuPLanMzIypm+HOgfTHXcmtsxCdiu6ijsT41eFTUhjYLhy6w5EHaoKkLxOTb4aTjO2dxfo1Mz0ZFDVskKoQTJje7rXlQmlnlC5Y9duQ1gsMMVA+Vlp2/6rYKY5YDoFgtsTkMyFKLKacBssBbYF6MCCY0AD4GAb0DMwAFQBlQe6EAbu3EK2a1sa2HyrtG0QQ///hxsAsYdxNL+gxA010joAbfpXbmJBqbcAAAAASUVORK5CYII="> &nbsp;kích thước <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACkAAAAiCAIAAABNxWdiAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAQJJREFUWEftlssRhSAMRfGVpf3EdrAZLAZ74SWAOkEjfmZ0k6wcCfeESxCbEIL5KH4fcQmr7PfNV8/V87cc0F57y+mVo56f8nwaum6YNqlj3/XjKQGWFIJ30OKr1vrl2bTg8GLfCW8xN6Yu4aB8Mw9VlI0DQCWSBGsBHBVA+hI8D2c8qkvgUFU2qUaSWJZDbL600oCEBCuDmSuCcmJzGgnLy86q0ZxKiRXlyOYmn0DnXY/rPqzyUDmyGa3qOGu3ZL7QmBVlYrN+mSvFLd2TlPp8H3+sjOyirfNGUvdvw+NR2A7QWRILXQdK5Ub/z69/Ex/O0HvsoYE3pqvnN0x7OOVLz/9FAwOUBKD0DQAAAABJRU5ErkJggg=="> &nbsp;và số nguyên dương <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAoAAAAiCAIAAADpr9+xAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAALNJREFUOE/tksEVwiAMhoOzWA99ThBH8O4IYR167RQ9wQadwJOwCwKSQnm1OkBzgbzv5c9PiPDew/c47bCADrw5n7/G4oabiCFNqxG+JIUmBFSW03xW4jM+7uemmrGZRrheWso/5l5PwL6Ltc7IZEQaFzLuvDS2CpHYxAdrAiDtrVZEpCt/CYcCttSYjzjRUJxE1jziLL26lXdXrrseYZxMdJ8HWKSX4UFxLo4931rVH5v6Bs/CuJ9Yel8vAAAAAElFTkSuQmCC"> , hãy tính <em>+..+</em><img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAI8AAAAjCAIAAAAi385RAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAw1JREFUaEPtWLGWojAUxf0WmILjF8AXaDXVtttBic10ltvZQOl0tlbbDHyBfIHHQvIv7EtEQImQkAThkDRzRs17N/fm3bxkkee5ocdEGPg1EZwaJmZAqzWlfaDV0mpNiYEpYdW1pdWaEgNTwqprS6s1JQamhHVGtYWSyHcXeLh+hMYuEoowVvcR6HzUSnbri32Ap5ssXn5vdsnI5TKDQ+gYyw+zjnM+aq32+T7Aazct2xm5VARedkm9z5VhJD7xA1xl81GrFAj9HI3wC2gY90DXs2NbgNGyPceLD2SngTXgEXvP2B0njIsvlfwhGT11KV7Ej/HSlSxIKGgDbQY+CECzOK6hvatV6FUuJAvVkonBsKpVAOdigx6/W6o+uV4DY41GQVuWjxNmZYJHJyQ+SYYZfIJc56ua3glFf46/8X5QlIAaH7qsv/Zhj1eIojF1hTS0yb9vUlqhkx5/kIGSBCtRqoW/vvnkbYBtGs8tiSSjx+iW2+BDUrhGGGp8+HCTphuLtPDWBhY3kkFHC+zj0jGDrQeg3Z2xIs1hUWW4Fsuay8AH4d/X/l5U7qv11ou3aRNQ4yTyQ8o2m2P1k+oI5otfz82Zq8OdGaJxsVHUFvRJqXHfeQvLOhrb7ERMgzrM4NSG80T6F/pI/PW56sjSSyZ5i6uOLxcuL9qqJawqgpROe4FwHfnVj/HZeS9ZkoVev71rlzH+czW1SMBJAxdybrQ3J8TT6rC65OLCVFFDmcZCBoOf3HL0jP8mJ+yBljhho6OAa3Rri9HLCck5X6+l5h1PyGZUxxcCR2uF+NnAapFDq2ze4fHTXUN/KPm6X3BZOwvRVeb6Vccn7z9+/XWx+Qn7evqiBft4esZwHC+MqxtZzxPqYVoG11K8FGgz74Gptz96rm4nFIvP5ITNpxGGxxg68v5oq7cMGaqoidGtlry8cnPJjZbnC1goewHrX76XgRm+wb+XcKHsWi0h+gaerNUamHChdFotIfoGnqzVGphwoXRaLSH6Bp6s1RqYcKF0Wi0h+gaerNUamHChdP8BXo7vCRHPlO0AAAAASUVORK5CYII="> .</p>

<p><strong>Input:</strong></p>

<ul>
<li>Dòng đầu chứa hai số nguyên n và k (1 ≤ n ≤ 20, 1 ≤ k ≤ 10^9).</li>
<li>Dòng tiếp theo, mỗi dòng chứa n số nguyên biểu diễn ma trận A.</li>
</ul>

<p><strong>Output:</strong></p>

<p>In ra n dòng, mỗi dòng <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAoAAAAiCAIAAADpr9+xAAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAAKdJREFUOE/tUrENAjEMtJkFKBATJBPQMYV/ndAyAhUNyQY/AaIg2eWI35F40AMtxbuIbJ/t+KxjAPTZFl+wCs3w5H3++ywldZ6Z/aEQNZ99l4xJFAkZOTiSEERixhCQxCoUkD5AlFrpap2aws03eJRotdZs3aNpryiGq+VbT7Lf2TLlfiW3WVmgcDofn4lyOfW0XS8rB93+fbT9RE75ADzrfEqqP5T6AFU0hC/IoN6yAAAAAElFTkSuQmCC"> &nbsp;số mô tả ma trận <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAwAAAAiCAIAAADksa/2AAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAALlJREFUOE/tlLERwyAMReXM4qTIZQJtkM5T0GYV6kyRimzgCXwpjHdRJJABpXGXc2F1Ek98IQEdEcGWnbYAWT+gXbYAeMBiwf0OEdEHXVwhxdwaj16y1LUDdsNdN+wfA1PTvJhb8H49Aa/nIrrME8Dt0qeAykaPgD5mL7IYu0VbIWFaY0ATJEkhOVzZiFJKdRWyDOtZKp3OFCmB+Blr1bnwlFc7FFJ9jRrL5bY1huh8WzZRd7y7P38YXxz50d+F8BoaAAAAAElFTkSuQmCC"> , vì giá trị mỗi phần tử của ma trận <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAwAAAAiCAIAAADksa/2AAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAALlJREFUOE/tlLERwyAMReXM4qTIZQJtkM5T0GYV6kyRimzgCXwpjHdRJJABpXGXc2F1Ek98IQEdEcGWnbYAWT+gXbYAeMBiwf0OEdEHXVwhxdwaj16y1LUDdsNdN+wfA1PTvJhb8H49Aa/nIrrME8Dt0qeAykaPgD5mL7IYu0VbIWFaY0ATJEkhOVzZiFJKdRWyDOtZKp3OFCmB+Blr1bnwlFc7FFJ9jRrL5bY1huh8WzZRd7y7P38YXxz50d+F8BoaAAAAAElFTkSuQmCC"> &nbsp;có thể rất lớn, do đó chỉ cần đưa ra chữ số cuối cùng của từng phần tử của ma trận <img id="_x0000_i1025" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAwAAAAiCAIAAADksa/2AAAAAXNSR0IArs4c6QAAAAlwSFlzAAAOxAAADsQBlSsOGwAAALlJREFUOE/tlLERwyAMReXM4qTIZQJtkM5T0GYV6kyRimzgCXwpjHdRJJABpXGXc2F1Ek98IQEdEcGWnbYAWT+gXbYAeMBiwf0OEdEHXVwhxdwaj16y1LUDdsNdN+wfA1PTvJhb8H49Aa/nIrrME8Dt0qeAykaPgD5mL7IYu0VbIWFaY0ATJEkhOVzZiFJKdRWyDOtZKp3OFCmB+Blr1bnwlFc7FFJ9jRrL5bY1huh8WzZRd7y7P38YXxz50d+F8BoaAAAAAElFTkSuQmCC"> .</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2 3</div>

<div>0 1 </div>

<div>1 1</div>

<div>&nbsp;</div>
</td>
<td>
<div>2 4</div>

<div>4 6</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13008 - GIẢI HỆ PHƯƠNG TRÌNH TUYẾN TÍNH

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Giải hệ phương trình Ax = B trong đó ma trận A có kích thước n x n, x và B là các vector cột có n phần tử:</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10).</p>

<p>Mỗi test bắt đầu bởi số nguyên N (2 ≤ N ≤ 20).</p>

<p>N dòng tiếp theo, mỗi dòng gồm N phần tử mô tả ma trận A.</p>

<p>Dòng cuối gồm N số nguyên, mô tả vector B. </p>

<p>Các hệ số có giá trị tuyệt đối không vượt quá 1000.</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra đáp án tìm được trên một dòng, in ra 3 chữ số sau dấu phảy. Nếu hệ vô nghiệm hoặc có vô số nghiệm, in ra -1.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>3</div>

<div>1 2 5</div>

<div>4 5 6</div>

<div>7 8 9</div>

<div>10 11 12</div>

<div>2</div>

<div>1 1</div>

<div>2 2</div>

<div>2 4</div>

<div>2 </div>

<div>1 2</div>

<div>1 2</div>

<div>3 4</div>

<div>&nbsp;</div>
</td>
<td>
<div>-9.333 9.667 0.000</div>

<div>-1</div>

<div>-1</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT13009 - TÍNH TỔNG 1

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho 2 số nguyên n và K. Hãy tính giá trị biểu thức </p>

<p>&nbsp; theo modulo 10<sup>9</sup>+7.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 20).</p>

<p>Mỗi test gồm 2 số nguyên dương n và K (n ≤ 10<sup>9</sup>, K ≤ 50).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test, in ra đáp án tìm được theo modulo 10<sup>9</sup> + 7.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>1 1</div>

<div>4 2</div>

<div>10 3</div>
</td>
<td>
<div>1</div>

<div>30</div>

<div>3025</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13010 - TÍNH TỔNG 2

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Cho 2 số nguyên n và K. Hãy tính giá trị biểu thức </p>

<p>theo modulo 10<sup>9</sup>+7.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10).</p>

<p>Mỗi test gồm 2 số nguyên n và K (0 ≤ K ≤ 1000, 1 ≤ n ≤ 10<sup>16</sup>).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra đáp án tìm được trên 1 dòng. </p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>5 3</div>

<div>6 2</div>

<div>3 1</div>
</td>
<td>
<div>225</div>

<div>91</div>

<div>6</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13011 - QUÂN MÃ

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 4</small>

<p>Cho bàn cờ có kích thước M x N. Hãy đếm xem có bao nhiêu cách đặt các con mã lên bàn cờ mà không có xung đột nào xảy ra (tính cả trường hợp không đặt quân nào lên bàn cờ).</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 20).</p>

<p>Mỗi test gồm 2 số nguyên M và N (1 ≤ M ≤ 4, 1 ≤ N ≤ 10<sup>9</sup>).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test, in ra đáp án tìm được theo modulo 10<sup>9</sup>+7.</p>

<p><strong>Ví dụ&nbsp;:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>1 2</div>

<div>2 2</div>

<div>2 3</div>

<div>4 10</div>

<div>&nbsp;</div>
</td>
<td>
<div>4</div>

<div>16</div>

<div>36</div>

<div>18702843</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: Với x là vị trí quân mã, ta có:</p>

<p>oo, ox, xo, xx</p>

<p>Giải thích test 2:</p>

<p>Đặt K = 0 quân mã à 1 cách</p>

<p>Đăt K = 1 quân mã à 4 cách</p>

<p>Đăt K = 2 quân mã à 6 cách</p>

<p>Đặt K = 3 quân mã à 4 cách</p>

<p>Đặt K = 4 quân mã à 1 cách</p>

---

## PYKT13012 - TỔNG FIBONACCI

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Cho một dãy số a[] có n phần tử, và m truy vấn.</p>

<p>Có 2 loại try vấn.</p>

<p><strong>Truy vấn loại 1: 1 L R X</strong><strong> </strong></p>

<p>tăng tất cả các số trong khoảng L...R thêm X đơn vị.</p>

<p><strong>Truy vấn loại 2: 2 L R</strong><strong> . </strong></p>

<p>Giả sử f(x) là giá trị của số fibonaci thứ x, tính tổng </p>

<p><strong>f[a[L]] + f[a[L+1] + ... + f[a[R]] </strong></p>

<p>( vì giá trị rất lớn nên phải chia dữ cho 10<sup>9</sup> + 7 )</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu 2 số n và m. (1 &lt;= n, m &lt;= 100000) </p>

<p>Dòng 2 chứa n số của dãy a[].</p>

<p>m dòng sau mỗi dòng chứa một truy vấn của loại 1 hoặc loại 2.</p>

<p>Thời gian&nbsp; cho mỗi test là 1.5s&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </p>

<p><strong>Output:</strong></p>

<p>Mỗi truy vấn của loại 2 in 1 dòng chứa kết quả đã&nbsp; được mod cho 1e9+7.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3&nbsp;3</div>

<div>4&nbsp;3&nbsp;4</div>

<div>1&nbsp;2&nbsp;2&nbsp;1</div>

<div>2&nbsp;3&nbsp;3</div>

<div>2&nbsp;1&nbsp;3</div>
</td>
<td>
<div>3</div>

<div>9</div>

<div>&nbsp;</div>

<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div>4&nbsp;3</div>

<div>2&nbsp;4&nbsp;1&nbsp;4</div>

<div>2&nbsp;2&nbsp;3</div>

<div>1&nbsp;3&nbsp;3&nbsp;5</div>

<div>2&nbsp;1&nbsp;3</div>
</td>
<td>
<div>4</div>

<div>12</div>

<div>&nbsp;</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13013 - TÍNH TỔNG TRÊN MA TRẬN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Cho một ma trận N x M (N hàng, M cột). Ban đầu, các phần tử của ma trận được gán giá trị như sau:</p>

<p>1 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 &nbsp;&nbsp;&nbsp;&nbsp;… M</p>

<p>M+1 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;M+2 &nbsp;&nbsp;&nbsp;… M+N</p>

<p>………………………………………………………….</p>

<p>(N-1)M+1 (N-1)M+2 … NM</p>

<p>Có K loại truy vấn, mỗi truy vấn có dạng:</p>

<ul>
<li>“R X Y”: Nhân hàng X của ma trận với Y</li>
<li>“S X Y”: Nhân cột X của ma trận với Y</li>
</ul>

<p>Nhiệm vụ của bạn là hãy tính tổng các phần tử của ma trận sau K truy vấn trên.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên chứa 3 số nguyên N, M, K (1 ≤ N, M ≤ 10<sup>6</sup>, K ≤ 1000).</p>

<p>K dòng tiếp theo, mỗi dòng chứa một truy vấn (0 ≤ Y ≤ 10<sup>9</sup>).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra đáp án của bài toán theo modulo 10<sup>9</sup> + 7.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>3 1 1</div>

<div>S 1 4</div>

<div>&nbsp;</div>

<div>&nbsp;</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>24</div>
</td>
<td>
<div>Input:</div>

<div>3 4 4</div>

<div>R 2 4</div>

<div>S 4 2</div>

<div>R 3 3</div>

<div>R 2 0</div>

<div>Output:</div>

<div>176</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 2: 1+2+3+8+27+30+33+72 = 176</p>

<p>1 &nbsp;&nbsp;2 &nbsp;&nbsp;3 &nbsp;&nbsp;8</p>

<p>0 &nbsp;&nbsp;0&nbsp; &nbsp;0&nbsp; &nbsp;0</p>

<p>27 30 33 72</p>

---

## PYKT13014 - SỐ LỚN NHẤT VÀ NHỎ NHẤT

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho N số nguyên dương A[]. Mỗi lần, bạn chọn một tổ hợp gồm K số, như vậy, có tất cả C(K, N) cách chọn. </p>

<p>Bài toán đặt ra là hãy tính tổng của sự chênh lệch giữa số lớn nhất và nhỏ nhất trong tổ hợp được chọn của tất cả C(K, N) lần.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số nguyên N và K (1 ≤ N ≤ 10<sup>5</sup>, 1 ≤ K ≤ N). </p>

<p>Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10<sup>9</sup>).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra đáp án tìm được theo modulo 10<sup>9</sup>+7.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>4 2</div>

<div>10 20 30 40</div>
</td>
<td>
<div>100</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test: Có tất cả 6 khả năng: (10, 20), (20, 30), (30, 40), (10, 30), (20, 40), (10, 40).</p>

<p>Tổng cộng bằng 10+10+10+20+20+30 = 100.</p>

---

## PYKT13015 - TÍNH LŨY THỪA

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho các số nguyên a, b, c, d và M.</p>

<p>Hãy tính giá trị biểu thức </p>

<p>&nbsp;theo modulo M.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T ≤ 10000).</p>

<p>Mỗi test gồm 5 số nguyên a, b, c, d, M (0 ≤ a, b, c, d ≤ 10<sup>9</sup>, 1 ≤ M ≤ 10<sup>7</sup>).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra đáp án tìm được trên 1 dòng. </p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>3 1 2 2 1000</div>

<div>2 1 2 2 14</div>
</td>
<td>
<div>81</div>

<div>2</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: 3<sup>4</sup> = 81.</p>

---

## PYKT13016 - SỐ MŨ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Tìm số nguyên x nhỏ nhất sao cho a<sup>x</sup> = b modulo M.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (1 ≤ T ≤ 10).</p>

<p>Mỗi test gồm 3 số nguyên a, b, M (2 ≤ M ≤ 10<sup>10</sup>, 1 ≤ a, b, ≤ M). </p>

<p>Input đảm bảo gcd(a, M) = 1.</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test in ra số nguyên x nhỏ nhất tìm được. Nếu không có đáp án, in ra -1.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output:</strong></div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>3 2 5</div>

<div>2 5 11</div>

<div>3 2 100</div>

<div>53849 260761 306148</div>

<div>&nbsp;</div>
</td>
<td>
<div>3</div>

<div>4</div>

<div>-1</div>

<div>7452</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: 3<sup>3</sup> = 2 (mod 5)</p>

<p>Giải thích test 2: 2<sup>4</sup> = 5 (mod 11)</p>

---

## PYKT13017 - BỘ BA SỐ PYTAGO (bản khó)

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>3 số a, b, c được gọi là một bộ số Pytago nếu như a<sup>2</sup> + b<sup>2</sup> = c<sup>2</sup>. </p>

<p>Cho số nguyên N, nhiệm vụ của bạn là hãy đếm bộ số (a, b, c) thỏa mãn 1 ≤a, b, c≤ N-1, a ≤b và a<sup>2</sup> + b<sup>2</sup> = c<sup>2</sup> (mod N).</p>

<p><strong>Input:</strong></p>

<p>Một số nguyên dương N (2 ≤ N ≤ 500 000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra một số nguyên là số bộ 3 số tìm được.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>7</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>18</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>15</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>64</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13025 - ĐOÀN QUÂN TỐC HÀNH

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Tình hình chiến sự ở vùng biển Z đang trở nên cực kì cam go. Nhà vua quyết định gửi thêm quân chi viên tới chiến trường.&nbsp; Trong tay nhà vua đang có quyền triệu tập k đội quân từ khắp mọi miền đất nước. Để tập trung binh lực tốt nhất, nhà vua đã triệu tập cả k đội quân đến kinh thành rồi sau đó mới di chuyển đến chiến trường. Do số lượng đoàn quân khá lớn, nhà vua quyết định để 1 đại tướng đi thuê xe để chở quân lính. Vì tình đoàn kết, tất cả các chiến sĩ từ k quân đoàn tuyên bố: Nếu di chuyển, họ muốn được di chuyển cùng tất cả các đồng đội của mình trên một xe và trên xe đó không được có tới 3 quân đoàn khác nhau vì như vậy rất dễ xảy ra xô xát. Đến đây , tướng quân rất đau đầu trong việc chọn lựa loại xe đưa các đội quân đi vì nhà vua muốn chi phí di chuyển là ít nhất. Chi phí di chuyển sẽ bằng số lượng xe thuê nhân với sức chứa của loại xe.&nbsp; Hãy giúp tướng quân tính toán ra chi phí nhỏ nhất để thuê xe mà thỏa mãn yêu cầu của tất cả quân lính nhé</p>

<p><strong>Input: </strong></p>

<p>Dòng đầu tiên gồm số n và k (1 ≤ n ≤ 5.10<sup>5</sup>, 1 ≤ k ≤ 10000). Với n là số lượng quân lính, k là số lượng các quân đoàn. Giả sử các quân đoàn đánh số từ 1 đến k.</p>

<p>Dòng thứ 2 gồm n số nguyên a[i] (1 ≤ a[i] ≤ k) trong đó a[i] là số hiệu quân đoàn của người lính thứ i. </p>

<p><strong>Output: </strong></p>

<p>Ghi ra chi phí nhỏ nhất. </p>

<p><strong>Ví dụ : </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>6 3</div>

<div>3 1 2 3 2 3</div>
</td>
<td>
<div>6</div>
</td>
</tr>
</tbody>
</table>

<p><em>Giải thích: </em></p>

<p>Có 6 người lính đến từ 3 đội quân khác nhau. </p>

<p>Đội quân 1 có 1 người</p>

<p>Đội 2 có 2 người</p>

<p>Đội 3 có 3 người</p>

<p>Cách tốt nhất là thuê 2 xe có sức chứa 3 người. Khi đó đội quân 1 và 2 sẽ lên cùng 1 xe, đội quân 3 lên 1 xe. Tổng chi phí thuê xe sẽ là 3 x 2 = 6. </p>

---

## PYKT13026 - GHÉP HÌNH

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Chuyện kể rằng ở một hiệu sách nọ, có 1 ông chủ đã già nên trí nhớ kém. Một hôm anh shipper đến để kiểm kê lại sách trước khi đem giao. Xui cho anh shipper là ông chủ trí nhớ lẩm cẩm, lại không nhớ hóa đơn mua sách để đâu và đã quên béng mất số lượng sách cần phải giao. Thật may là ông còn 1 vài chi tiết ông còn nhớ. Ở cửa hàng của mình, ông có các miếng bìa cát tông, khi có sách về, ông sẽ "tái chế " chúng để đựng sách. Với mỗi miếng bìa các tông hình chữ nhật có chiều dài 2 cạnh là a và b, ông sẽ cắt 4 góc của miếng bìa các tông sau đó dựng lên để thành 1 hình hộp chữ nhật. Xem hình dưới để biết thêm chi tiết :</p>

<p>Dễ dàng thấy được rằng với mỗi cách cắt 4 góc ta sẽ được 1 hình hộp chữ nhật với thể tích khác nhau (đương nhiên vẫn phải đảm bảo chiều dài các cạnh &gt; 0). Ông chủ nhớ được rằng, với 3 loại hộp có thể tích lớn nhất, khi ông xếp tất cả số sách phải ship vào loại lớn nhất thì sẽ bị dư ra x cuốn sách, nếu xếp vào loại lớn thứ 2 thì sẽ dư ra y cuốn sách, xếp vào loại lớn thứ 3 thì sẽ dư ra z cuốn sách. (Ta coi mỗi cuốn sách là 1 hình lập phương 1x1x1) Ông cũng nhớ là số sách nằm trong khoảng từ l đến r (tính cả l và r). Lần này anh shipper thật sự bất lực và cầu cứu bạn, là một lập trình viên đại tài, bạn có thể giúp&nbsp; anh ấy tìm ra được số sách cần phải ship không ? </p>

<p><strong>Input: </strong><br>
Dòng đầu thi số bộ test (không quá 10).</p>

<p>Mỗi test ghi trên một dòng 7 số lần lượt là : a,b,x,y,z,l,r </p>

<p>Trong đó : a,b là kích thước của bìa các tông ( 7 ≤ a ≤ b ≤ 100)</p>

<p>x,y,z lần lượt là số sách bị dư ra khi xếp&nbsp; tất cả sách vào 3 loại hộp có thể tích lớn nhất</p>

<p>l,r là khoảng mà số sách cần tìm nằm ở trong</p>

<p><strong>Output:</strong></p>

<p>Một số nguyên duy nhất là kết quả bài toán. Nếu có nhiều đáp án thỏa mãn, hãy đưa ra đáp án nhỏ nhất. </p>

<p>Note: Thể tích của hình hộp chữ nhật là : a * b * h với a,b là chiều dài 2 cạnh đáy và h là chiều cao</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>16 21 407 409 17 20000 30000</div>
</td>
<td>
<div>22457</div>
</td>
</tr>
</tbody>
</table>

<p><em>Giải thích test: </em><br>
Bìa các tông có kích thước là 16 x 21, 3 thể tích lớn nhất có thể đạt được khi cắt 4 góc của bìa các tông lần lượt là:&nbsp; 450, 416, 408.</p>

<p>Khi xếp 22457 cuốn sách vào loại hộp có thể tích 450 ta sẽ xếp được 49 cuốn sách mỗi hộp và còn dư 409 cuốn sách. </p>

<p>Tương tự với 2 loại còn lại. </p>



---

## PYKT13038 - HÌNH TRÒN - 1

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 4</small>

<p>Cho <em>N</em> điểm trên mặt phẳng Oxy. Nhiệm vụ của bạn là xác định xem có tồn tại một đường tròn ngoại tiếp của 3 đỉnh và thỏa mãn có đúng K điểm nằm trong đường tròn (không tính các điểm nằm trên đường tròn).</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (không quá 10).</p>

<p>Mỗi test gồm số nguyên <em>N (3≤N≤100)</em>, là số lượng điểm trên mặt phẳng. Dòng tiếp theo là số nguyên <em>K (1≤K≤100)</em>.</p>

<p><em>N</em> dòng tiếp theo, dòng thứ <em>i</em> gồm 2 số nguyên <img src="file:///C:/Users/Dell/AppData/Local/Temp/msohtmlclip1/01/clip_image002.png">&nbsp;(trị tuyệt đối không quá 1000).</p>

<p><strong>Output:&nbsp; </strong></p>

<p>Với mỗi test, in ra “YES” nếu tìm được đường tròn chứa đúng K điểm. In ra “NO” trong trường hợp ngược lại.</p>

<p><strong>Ví dụ:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>4 </div>

<div>1</div>

<div>0 0</div>

<div>5 0</div>

<div>0 5</div>

<div>1 1</div>

<div>5</div>

<div>2</div>

<div>5 5</div>

<div>5 -5</div>

<div>-5 5</div>

<div>-5 -5</div>

<div>0 0</div>
</td>
<td>
<div>YES</div>

<div>NO</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13039 - HÌNH TRÒN - 2

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Bắt đầu từ một hình tròn lớn nội tiếp tam giác vuông (hình 1) người ta thử vẽ thêm các hình tròn nhỏ hơn tiếp xúc với cạnh huyền, cạnh góc vuông của tam giác và tiếp xúc với đường tròn lớn ban đầu (hình 2). </p>

<p>Hình 1: Hình tròn nội tiếp tam giác vuông</p>

<p>Hình 2: Vẽ thêm hình tròn thứ 2 tiếp xúc hình tròn thứ nhất và hai cạnh của tam giác</p>

<p>Tiếp tục theo cách như vậy người ta có thể vẽ vô hạn hình tròn nhỏ hơn nữa. Khi số lượng hình tròn đã rất lớn (tiến đến vô hạn), người ta muốn tính xem diện tích được bao phủ bởi các hình tròn bằng bao nhiêu phần diện tích của tam giác vuông. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một dòng ghi hai cạnh góc vuông của tam giác vuông (là hai số nguyên dương khác nhau, không quá 10<sup>5</sup>). </p>

<p><strong>Output</strong></p>

<p>Ghi ra tỉ lệ diện tích của tất cả các hình tròn trên diện tích tam giác (tính chính xác đến 4 số sau dấu phẩy). </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input 1</strong></div>
</td>
<td>
<div><strong>Output 1</strong></div>
</td>
</tr>
<tr>
<td>
<div>3 4</div>
</td>
<td>
<div>0.7171</div>
</td>
</tr>
<tr>
<td>
<div><strong>Input 2</strong></div>
</td>
<td>
<div><strong>Output 2</strong></div>
</td>
</tr>
<tr>
<td>
<div>12 16</div>
</td>
<td>
<div>0.7171</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT13040 - HÌNH TRÒN - 3

- <small>Chủ đề con: ĐỐI TƯỢNG</small>
- <small>Độ khó: 3</small>

<p>Với 8 hình tròn có kích thước bằng nhau, người ta có thể xếp 8 hình tròn này vào một hình vuông theo cách như hình dưới đây. </p>

<p>Bài toán đặt ra là cho trước kích thước hình vuông, hãy tính <strong>độ dài bán kích lớn nhất có thể</strong> của 8 hình tròn bằng nhau có thể xếp vào hình vuông đó. </p>

<p><strong>Input</strong></p>

<p>Chỉ có một số thực với 4 số phần thập phân cho biết diện tích hình vuông ban đầu. </p>

<p><strong>Output</strong></p>

<p>Ghi ra độ dài bán kính lớn nhất có thể của hình tròn, tính chính xác đến 4 số sau dấu phẩy. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input 1</strong></div>
</td>
<td>
<div><strong>Output 1</strong></div>
</td>
</tr>
<tr>
<td>
<div>0.3438</div>
</td>
<td>
<div>0.1000</div>
</td>
</tr>
<tr>
<td>
<div><strong>Input 2</strong></div>
</td>
<td>
<div><strong>Output 2</strong></div>
</td>
</tr>
<tr>
<td>
<div>1.3753</div>
</td>
<td>
<div>0.2000</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT14003 - HEXAGRAM

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 4</small>

<p>Hexagram được định nghĩa là một ngôi sao 6 cánh đặc biệt. Mỗi giao điểm trong ngôi sao ghi một số nguyên dương sao cho tổng các số trong mỗi cạnh đều bằng nhau.</p>

<p>Ví dụ với dãy số: 3 17 15 18 11 22 12 23 21 7 9 13</p>

<p>Thì ta sẽ có 4 cách sắp xếp các số trên vào ngôi sao là:</p>

<p>Bài toán đặt ra là cho trước dãy 12 số nguyên. Hãy đếm số cách xếp các số đó vào ngôi sao sáu cạnh để được dạng Hexagram như mô tả trên.</p>

<p>Chú ý: Không xét các trường hợp là xoay của nhau hoặc lấy đối xứng.</p>

<p><strong>Input</strong></p>

<p>Dòng đầu ghi số bộ test. </p>

<p>Mỗi bộ test ghi trên một dòng 12 số nguyên dương, mỗi số cách nhau một khoảng trống. Các số đều được đảm bảo nhỏ hơn 1000000.</p>

<p><strong>Output</strong></p>

<p>Với mỗi bộ test, in ra màn hình số cách xếp các số trên để tạo thành HEXAGRAM như mô tả trên.&nbsp; </p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>3 17 15 18 11 22 12 23 21 7 9 13</div>

<div>1 2 3 4 5 6 7 8 9 10 11 13</div>
</td>
<td>
<div>4</div>

<div>0</div>
</td>
</tr>
</tbody>
</table>

---

## PYKT14004 - CÂN BẰNG

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Công viên PTIT thiết kế trò chơi đu quay có 4 góc. Mỗi góc ngồi được tối đa 3 người. Để chiếc đu quay này có thể vận hành an toàn thì cần sắp xếp sao cho tổng khối lượng của các góc chênh lệch ít nhất có thể. </p>

<p>Có đúng 12 người chơi. Hãy tính chênh lệch ít nhất có thể của nhóm “nặng nhất” và nhóm “nhẹ nhất”. </p>

<p><strong>Input</strong></p>

<p>Gồm 12 số (có thể viết trên một dòng hoặc nhiều dòng nhưng không có dòng trống) lần lượt là khối lượng của 12 người chơi (giá trị không quá 10<sup>6</sup>). </p>

<p><strong>Output</strong></p>

<p>In ra giá trị chênh lệch ít nhất</p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2 3 4</div>

<div>5 6 7 8 9 10 </div>

<div>11 12 13</div>
</td>
<td>
<div>1</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT14006 - PHÉP TOÁN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Có 2 nhà toán học đại tài là Greek và Macedonia họ hơn thua nhau từng li từng tí, một ngày Greek nghĩ ra bài toán khá là hay ho và này nọ đó là ông đưa ra 1 dãy số và chỉ từ phép cộng trừ để tạo ra 1 số M cho trước, ông yêu cầu Macedonia phải giải nhưng quá thông minh nên Macedonia đã giải rất nhanh và để làm khó Greek nên ông đã biến đổi bài toán của chính Greek ông cho 1 dãy n phần tử&nbsp;<em><strong>a1,a2,a3,…….an</strong></em>&nbsp;và 1 số M nhưng thay vì 2 phép toán<strong>&nbsp;+,-</strong>&nbsp;ông thêm 1 phép toán nữa thành&nbsp;<em><strong>+,</strong></em><em><strong> </strong></em><em><strong>-,</strong></em><em><strong> </strong></em><em><strong>*</strong></em>&nbsp;và bắt Greek phải tìm ra biểu thức phù hợp để tạo ra số M</p>

<p>Do không kịp suy nghĩ nên nhà toán học đã kêu gọi sự trợ giúp từ các lập trình viên. Bạn hãy tìm cách giúp ông ấy nhé !</p>

<h3><strong>Input</strong></h3>

<ul>
<li>Dòng đầu chứa số n (2 ≤ n ≤ 10) và số m( m ≤ 10^18)</li>
<li>Dòng thứ 2 là dãy số a1,a2,a3,…..an ( |ai| ≤ 15000 )</li>
</ul>

<h3><strong>Output</strong></h3>

<ul>
<li>Nếu có thể tìm phép toán phù hợp hãy in ra tất cả các phép toán thỏa mãn. Nếu có số âm phải để trong dấu ngoặc ( ) </li>
<li>Nếu không tìm thấy in ra IMPOSSIBLE</li>
</ul>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>5 20</div>

<div>1 2 3 4 5</div>
</td>
<td>
<div>1+2+3*4+5=20</div>

<div>1+2-3+4*5=20</div>

<div>1+2*3*4-5=20</div>
</td>
</tr>
</tbody>
</table>

<div>&nbsp;</div>



---

## PYKT14019 - ĐẦU BẾP

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Một hôm nọ, Tom khám phá ra một loại bánh mới nên mời n người bạn đến nhà để thử tay nghề của mình. Do chưa rành công thức lắm và muốn thử nghiệm nên Tom đã làm ra n chiếc bánh với tỉ lệ nguyên liệu khác nhau. Nhưng Tom biết chắc chắn rằng để chiếc bánh thứ i ngon hoàn hảo thì cần phải nướng ti phút. Tuy nhiên vì số lượng bánh lớn nên Tom đã quyết định sẽ cho hết cả n chiếc bánh vào trong lò nướng. Ở mỗi phút, Tom chỉ có thể đưa 1&nbsp; và chỉ 1 chiếc bánh ra khỏi lò nướng. Gỉa sử thời điểm lấy chiếc bánh thứ i ra là xi thì độ tệ của chiếc bánh sẽ bằng trị tuyệt đối của (ti - xi). Tom muốn tổng độ tệ của n chiếc bánh là ít nhất có thể. Và giờ Tom đang rất đau đầu với việc đó. Bạn có thể giúp Tom không ? </p>

<p><strong>Input: </strong></p>

<p>Dòng đầu tiên gồm 1 số t là số lượng bộ test t (1 ≤ t ≤ &nbsp;200)</p>

<p>Mỗi bộ test sẽ có dạng như sau: </p>

<p>Dòng đầu tiên gồm số n&nbsp; - số lượng bánh ( 1≤ &nbsp;n ≤ &nbsp;200)</p>

<p>Dòng thứ 2 gồm n số nguyên t1, t2,..., tn (1 ≤ &nbsp;ti ≤ &nbsp;n) là thời gian mà chiếc bánh thứ i cần nướng để đạt được độ ngon hoàn hảo. </p>

<p>Tổng của n ở tất cả các bộ test ≤ &nbsp;200. </p>

<p><strong>Output:</strong></p>

<p>Với mỗi bộ test, in ra kết quả bài toán ứng với bộ test đó trên 1 dòng. </p>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>6</div>

<div>4 2 4 4 5 2</div>

<div>7</div>

<div>7 7 7 7 7 7 7</div>

<div>&nbsp;</div>
</td>
<td>
<div>4</div>

<div>12</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích: </p>

<p>Ở test 1.&nbsp; Các chiếc bánh sẽ được lấy ra ở thời điểm như sau: </p>

<p>Phút 1: Lấy chiếc bánh thứ 2 (có ti = 2) ra. Độ tệ = abs(2 - 1) = 1</p>

<p>Phút 2: Lấy chiếc bánh thứ 6 (có ti = 2) ra. Độ tệ = abs(2-2) = 0</p>

<p>Phút 3: Lấy chiếc bánh thứ 1 (có ti = 4) ra. Độ tệ = abs(4 - 3) = 1</p>

<p>Phút 4: Lấy chiếc bánh thứ 4 (có ti = 4) ra. Độ tệ = abs(4 - 4) = 0</p>

<p>Phút 5: Lấy chiếc bánh thứ 3 (có ti = 4) ra. Độ tệ = abs(4-5) = 1</p>

<p>Phút 6: Lấy chiếc bánh thứ 5 (có ti = 5) ra.&nbsp; Độ tệ = abs(5 - 6) = 1</p>

<p>Như vậy, tổng độ tệ của n chiếc bánh = 4, và đây cũng là kết quả tốt nhất có thể có được (đương nhiên có nhiều hơn 1 cách lấy các chiếc bánh ra khỏi lò, thứ tự trên chỉ là 1 trong số đó). </p>



---

## PYKT14020 - ĐỘI QUÂN HOÀNG GIA

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Đội quân Hoàng Gia của đảo quốc PTIT đang chuẩn bị tiến hành duyệt binh mừng năm mới. Tất cả các người lính tham gia duyệt bình sẽ được xếp thành k hàng, mỗi hàng sẽ có số lượng các người lính bằng nhau. Tuy nhiên, nhà vua vì muốn đội hình diễu hành được đẹp nhất nên đã ra thêm 1 chỉ thị rằng, những người lính ở cùng 1 hàng không được cao hơn nhau quá 1 đơn vị. Là chỉ huy của quân đội, bạn có được báo cáo về số hàng nhà vua muốn xếp, dải chiều cao của quân lính cũng như số lượng người lính có chiều cao cùng chiều cao. Giờ đây bạn phải tính ra số lượng quân lính nhiều nhất có thể tham gia cuộc duyệt binh này. </p>

<p><strong>Input: </strong></p>

<p>Dòng đầu tiên là số bộ test t (1 ≤ &nbsp;t ≤ &nbsp;1000)</p>

<p>Mỗi bộ test sẽ có dạng như sau:</p>

<p>Dòng đầu tiên gồm 2 số n và k (1 ≤&nbsp; n ≤&nbsp; 3*10<sup>4</sup>, 1 ≤&nbsp; k ≤&nbsp; 10<sup>12</sup>) lần lượt là số mức chiều cao khác nhau của quân lính, số hàng mà nhà vua muốn xếp. </p>

<p>Dòng thứ 2 gồm n số nguyên c1, c2, ..., cn (0 ≤&nbsp; ci ≤&nbsp; 10<sup>12</sup>) với ci tương ứng với số lượng người lính có chiều cao i. </p>

<p><strong>Output:</strong></p>

<p>1 số nguyên duy nhất là kết quả bài toán. Mỗi bộ test kết quả in trên 1 dòng. </p>

<p><strong>Ví dụ: </strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>3 4</div>

<div>7 1 13</div>
</td>
<td>
<div>16</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích: </p>

<p>Ở bộ test 1: Ta có 3 mức chiều cao (ta tạm đánh số từ 1 -&gt; 3)</p>

<p>Có 7 người lính cao 1 đơn vị, 2 người lính cao 2 đơn vị, 13 người lính cao 3 đơn vị. </p>

<p>Cần xếp thành 4 hàng. </p>

<p>Có 1 cách xếp đó là 4 hàng mỗi hàng có 4 quân lính như sau: </p>

<p>Hàng 1 : 3 3 3 3 </p>

<p>Hàng 2: 1 2 1 1</p>

<p>Hàng 3 : 1 1 1 1</p>

<p>Hàng 4: 3 3 3 3</p>

<p>Vậy có thể có 16 người lính tham gia duyệt binh và đây cũng là số lượng nhiều nhất có thể. </p>

<p>(Chú ý, có thể có nhiều các xếp khác nhau cho ra được kết quả như vậy, đáp án ở giải thích chỉ là 1 trong số đó)</p>

---

## PYKT14023 - GIÁ TRỊ NHỊ PHÂN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho một dãy nhị phân có N phần tử. Ban đầu cả dãy có giá trị toàn 0. Mỗi bước với hai giá trị x và y (1 ≤ x ≤ y ≤ N), bạn sẽ thay đổi tất cả các bit từ vị trí x đến vị trí y (nếu đang là 1 thì thành 0 và ngược lại). </p>

<p>Hãy cho biết sau Q lần thực hiện các truy vấn với 2 cặp số x, y thì trạng thái cuối cùng của dãy nhị phân là gì. </p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu ghi hai số N và Q</li>
<li>Q dòng sau mỗi dòng ghi hai số x và y. </li>
</ul>

<p><strong>Output</strong></p>

<p>Ghi ra dãy kết quả. </p>

<p><strong>Ví dụ</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>3 2</div>

<div>1 2</div>

<div>1 3</div>
</td>
<td>
<div>0 0 1</div>
</td>
</tr>
</tbody>
</table>

<p><strong><em>Ràng buộc: </em></strong></p>

<p><em>50% test tương ứng với 1 </em><em>≤</em><em> N, Q </em><em>≤</em><em> 1000</em></p>

<p><em>50% test tương ứng với&nbsp; 1 </em><em>≤</em><em> N, Q </em><em>≤</em><em> 100000</em></p>

---

## PYKT14031 - TRÒ CHƠI TRÍ TUỆ

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Có N bạn sinh viên được chia thành 2 nhóm A và B và được xếp theo vòng tròn. Luật của trò chơi như sau: </p>

<ul>
<li>Giả sử người chơi đầu tiên là người thứ i. Thứ tự lượt chơi là i, i+1, …, N, 1, 2, …, i-1, … tiếp tục cho đến khi nào trò chơi kết thúc.</li>
<li>Ban đầu khởi tạo số C = 0. Mỗi lượt, người chơi chọn một số có giá trị trong đoạn [1, K] để cộng vào giá trị C. Nếu người đội nào làm cho giá trị C lớn hơn hoặc bằng M, đội đó sẽ bị xử thua.</li>
</ul>

<p>Biết rằng cả 2 đội đều có chiến thuật chơi tối ưu. Các bạn hãy xác định xem đội nào là đội chiến thắng với mỗi người chơi đầu tiên khác nhau.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên chứa 3 số nguyên N, M và K (1 ≤ N, M, K ≤ 5000).</p>

<p>Dòng tiếp theo gồm N kí tự, mô tả hai đội chơi. 0 là đội A, 1 là đôi B.</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra N kí tự. Kí tự thứ i cho biết đội chiến thắng nếu người chơi đầu tiên là người thứ i.</p>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>2 9 2<br>
0 1</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>0 1</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>10 100 10</div>

<div>0 0 0 1 1 1 1 0 1 1</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>1 1 1 1 1 1 1 1 1 1</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1: Người đi trước luôn là người chiến thắng.</p>



---

## PYKT14034 - DÃY BÍT NHỊ PHÂN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 4</small>

<p>Cho một dãy bit nhị phân gồm có N bit: b[0] b[1] … b[N-1]. Bạn được phép thực hiện K lát cắt.</p>

<p>Có tổng cộng N+1 vị trí có thể cắt: | b[0] | b[1] | … | b[N-1] |.</p>

<p>Xét các dãy bit con kẹp giữa hai lát cắt, hai phần thừa bên ngoài bỏ không tính, như vậy với K lát cắt sẽ tạo ra được K-1 dãy con. Một cách cắt được gọi là đẹp nếu như tập hợp các số này biểu diễn dưới cơ số 10 tạo thành một tập hợp đầy đủ từ 1 à M với M nào đó. </p>

<p>Ví dụ với dãy bit 101101001110 và cách cắt 10 | 11 | 010 | 01 | 1 | 10 là đẹp, vì dãy con thu được là 11, 010, 01, 1 tương ứng với 3, 2, 1, 1 trong cơ số 10.</p>

<p>Kí hiệu f(K) là số cách cắt đẹp với K lát cắt. </p>

<p>Bạn hãy tính giá trị &nbsp;&nbsp;<img id="Picture_x0020_4" src="data:image/png;base64,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"> &nbsp;&nbsp;theo modulo 10<sup>9</sup>+7.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số nguyên N (1 ≤ N ≤ 75).</p>

<p>Dòng tiếp theo gồm dãy bit b có N kí tự.</p>

<p><strong>Output:&nbsp; </strong></p>

<p>In ra một số nguyên là đáp án của bài toán.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Test 1</div>
</td>
<td>
<div>Test 2</div>
</td>
</tr>
<tr>
<td>
<div>Input:</div>

<div>4</div>

<div>1011</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>10</div>

<div>&nbsp;</div>
</td>
<td>
<div>Input:</div>

<div>2</div>

<div>10</div>

<div>&nbsp;</div>

<div>Output:</div>

<div>1</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1:</p>

<p>K = 2: | 1 | 011 , 1 | 01 | 1, 10 | 1 | 1, 101 | 1 |.</p>

<p>K = 3: | 1 | 01 | 1, | 10 | 1 | 1, 10 | 1 | 1 |, 1 | 01 | 1 |.</p>

<p>K = 4: | 10 | 1 | 1 |, | 1 | 01 | 1 |.</p>



---

## PYKT2041 - TAM GIÁC VUÔNG CÂN

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho vùng tọa độ Oxy bị giới hạn bởi gốc tọa độ (0, 0) và điểm trên cùng bên phải (X, Y). Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu tam giác vuông cân.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T &lt;= 100).</p>

<p>Mỗi test gồm hai số nguyên X và Y.</p>

<p><strong>Giới hạn:</strong></p>

<p>Subtask 1 (25%) 0 &lt;= X, Y &lt;= 20.</p>

<p>Subtask 2 (25%) 0 &lt;= X, Y &lt;= 100.</p>

<p>Subtask 3 (50%) 0 &lt;= X, Y &lt;= 1000.</p>

<p><strong>Output:&nbsp;</strong></p>

<p>Với mỗi test, in ra số tam giác vuông tìm được trên một dòng.</p>

<p><strong>Example</strong><strong>:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>0 5</div>

<div>1 2</div>

<div>1 1</div>
</td>
<td>
<div>0</div>

<div>10</div>

<div>4</div>
</td>
</tr>
</tbody>
</table>



---

## PYKT2042 - GHÉP CẶP

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho số nguyên dương N, đếm số cách chia các số từ 1 đến 2N thành N nhóm, mỗi nhóm gồm 2 số mà hiệu hai số trong một nhóm bằng hiệu hai số trong nhóm khác.</p>

<p>I<strong>Input:</strong></p>

<p>Dòng đầu tiên chứa số lượng bộ test T.</p>

<p>Mỗi test gồm 1 số nguyên dương N.</p>

<p><strong>Giới hạn:</strong></p>

<p>Subtask 1 (50%): T, N &lt;= 10000</p>

<p>Subtask 2 (50%): T &lt;= 10^5, N &lt;= 10^6.</p>

<p><strong>Output:</strong></p>

<p>Với mỗi test, hãy in ra đáp án tìm được trên một dòng.</p>

<p><strong>Example:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>1</div>

<div>2</div>
</td>
<td>
<div>1</div>

<div>2</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 2: Có 2 cách chia nhóm là:</p>

<p>(1, 2) và (3, 4)</p>

<p>(1, 3) và (2, 4)</p>

---

## PYKT2047 - THIẾT KẾ ĐẬP THỦY ĐIỆN

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 4</small>

<div>
<p>Trên thượng lưu sông High River, một con đập lớn đang được xây dựng. Do dòng sông chảy xiết, các kĩ sư thiết kế N bức tường chắn nước tại các vị trí L[i], có độ cao tương ứng bằng H[i]. Thiết diện mặt cắt của con đập được biểu diễn như hình vẽ. Mỗi bức tường có độ dày bằng 1 đơn vị.</p>

<p>Do tính phức tạp của con đập, một số bức tường vẫn đang được xây dựng tiếp theo ở phía dưới. Do đó, các kĩ sư cần có hệ thống cảnh báo để xác định giới hạn vùng an toàn cho công việc xây dựng ở phía sau.</p>

<p>Giả sử lưu lượng nước đổ về là K đơn vị thể tích. Các bạn giúp các kĩ sư hãy tính toán xem vị trí bức tường cuối cùng sẽ bị nước tràn qua?</p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu tiên&nbsp;là&nbsp;số lượng bộ test T (T &lt;= 20).</li>
<li>Mỗi test bắt đầu bởi&nbsp;số&nbsp;lượng bức tường N&nbsp;(N&nbsp;&lt;=&nbsp;10^5).</li>
<li>Dòng thứ hai gồm N số nguyên L[] mô tả vị trí của các bức tường (1 &lt;= L[i] &lt;= 10^9, L[i] &gt; L[i-1]+1).</li>
<li>Dòng thứ ba gồm N số nguyên H[] mô tả chiều cao của các bức tường (1 &lt;= H[i] &lt;= 10^5).</li>
<li>Tiếp theo là số lượng truy vấn Q (Q &lt;= 10^5).</li>
<li>Q dòng tiếp theo, mỗi dòng gồm một số nguyên K (1 &lt;= K &lt;= 10^15).</li>
</ul>

<p><strong>Output</strong></p>

<ul>
<li>Với mỗi truy vấn, hãy in ra đáp án trên một dòng. Nếu bức tường thứ nhất không bị vượt qua, in ra 0.</li>
</ul>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>4</div>

<div>1 3 5 8</div>

<div>2 5 3 1</div>

<div>3</div>

<div>17</div>

<div>3</div>

<div>13</div>

<div>&nbsp;</div>
</td>
<td>
<div>3</div>

<div>1</div>

<div>1</div>

<div>&nbsp;</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test:</p>

<table>
<tbody>
<tr>
<td>
<div><img alt="在这里插入图片描述" src="data:image/jpeg;base64,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"></div>
</td>
<td>
<div><img alt="在这里插入图片描述" src="data:image/jpeg;base64,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"></div>
</td>
<td>
<div><img alt="在这里插入图片描述" src="data:image/jpeg;base64,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ooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigDH+IHjbw78NfA2sfETxfqkNjpOg6bPqGq31zJtjtraGMySyscHCqiljweB3r86/2Ef+CnVl+178e/CPxP+K3/AAUH0bwXY+OmkPw5/Z90HRLU295CRmK31LXLqKYXerBJ4GlsbGaBoJAsbo5Egr70/aY+Dtv+0P8As8eOPgFe6zNp1v438JajoN1fW8as9vFeWslu8iq3DFVkJAyMkDkdR+eK/s7/ALa/xV/Y9+Cf/BNTxJ+xJfeEdU+HPiDwbbeKvi4fEmjyeH7Cw0C7tpTqujtFPJfTXl3HabUieytzG163nSIkZaQA/URGDIGBznvX8gv/AAdHf8pz/jZ/1z8Nf+o3pdf18WquluqyD5vTPTmv5B/+Do7/AJTn/Gz/AK5+Gv8A1G9LoA+AYP8AXp/vD+df3vfDdVPgHR8qP+QbB/6LWv4IYP8AXp/vD+df3vfDb/kQdH/7BsH/AKLWgDcAA6CiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigA69RSbEznYPypaKACv5A/+Do7/lOf8bP+ufhr/wBRvS6/r8r+QP8A4Ojv+U5/xs/65+Gv/Ub0ugD4Bg/16f7w/nX973w2/wCRB0f/ALBsH/ota/ghg/16f7w/nX973w2/5EHR/wDsGwf+i1oA3KKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAr+QP/g6O/wCU5/xs/wCufhr/ANRvS6/r8r+QP/g6O/5Tn/Gz/rn4a/8AUb0ugD4BiJEikf3hX9Zng3/gv7omjeCNNtJ/2YLhpINPgRt3jBIw7bFBABti3X0B/rX8mSsVYMOxzX7Q+GrLy7K2FlbxrI8Ue5lTBJwpK53DBx69j36UAfqDa/8ABwXoc67pP2TtSG3/AFjJ4whZVHHzf8e4Yjn+7x+NW3/4L56YEiEX7Kd+0kn3o/8AhLUGz0yTbCvzX0sCzuBA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"></div>
</td>
</tr>
</tbody>
</table>

</div>

---

## PYKT2048 - ỨNG DỤNG STACK TRONG PYTHON

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<div>
<p>Biểu thức ngoặc là xâu chỉ gồm các ký tự ‘(’ hoặc ‘)’. Biểu thức ngoặc đúng và bậc của biểu thức ngoặc được định nghĩa một cách đệ qui như sau:</p>

<ul>
<li>Biểu thức rỗng là biểu thức ngoặc đúng và có bậc bằng 0,</li>
<li>Nếu A là biểu thức ngoặc đúng có bậc bằng k thì (A) cũng là một biểu thức ngoặc đúng có bậc bằng k+1,</li>
<li>Nếu A và B là hai biểu thức ngoặc đúng và có bậc tương ứng là k_1 và k_2 thì AB cũng là một biểu thức ngoặc đúng có bậc bằng max(k_1,k_2).</li>
</ul>

<p>Ví dụ, ‘()(())’ là một biểu thức ngoặc đúng có bậc bằng 2 còn ‘(()(()))’ là một biểu thức ngoặc đúng và có bậc bằng 3.</p>

<p>Cho số nguyên K và xâu S là một xâu chỉ gồm các ký tự ‘(‘, ‘)’ và ‘?’, hãy đếm số cách cách thay các ký tự ‘?’ trong xâu S thành ký tự ‘(‘ hoặc ‘)’ để nhận được xâu T là biểu thức ngoặc đúng có bậc bằng K.</p>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu chứa số nguyên dương K.</li>
<li>Dòng thứ hai chứa xâu S chỉ gồm các ký tự ‘(‘, ‘)’ và ‘?’.</li>
</ul>

<p><strong>Giới hạn:</strong></p>

<p>Subtask 1 (50%) độ dài xâu S không vượt quá 20.</p>

<p>Subtask 2 (50%) độ dài xâu S không vượt quá 200.</p>

<p><strong>Output</strong></p>

<ul>
<li>Hãy in ra đáp án trên một dòng.</li>
</ul>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>????(?</div>
</td>
<td>
<div>1</div>
</td>
</tr>
<tr>
<td>
<div>1</div>

<div>((???(</div>
</td>
<td>
<div>0</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>((???()???(?</div>
</td>
<td>
<div>4</div>
</td>
</tr>
</tbody>
</table>

</div>

---

## PYKT2049 - BÌNH THÔNG NHAU

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<div>
<p>Có N thùng nước được đánh số từ 1 đến N, giữa 2 thùng bất kỳ đều có một ống nối có một van có thể khóa hoặc mở. Ở trạng thái ban đầu tất cả các van đều đóng.</p>

<p>Bạn được cho một số yêu cầu, trong đó mỗi yêu cầu có 2 dạng:</p>

<ul>
<li>Dạng X Y 1 có ý nghĩa là bạn cần mở van nối giữa 2 thùng X và Y.</li>
<li>Dạng X Y 2 có ý nghĩa là bạn cần cho biết với trạng thái các van đang mở / khóa như hiện tại thì 2 thùng X và Y có thuộc cùng một nhóm bình thông nhau hay không?</li>
</ul>

<p>Hai thùng được coi là thuộc cùng một nhóm bình thông nhau nếu nước từ bình nàycó thể chảy đến được bình kia qua một số ống có van đang mở.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng truy vấn Q (Q &lt;= 100 000).</p>

<p>Mỗi truy vấn gồm 3 số nguyên X, Y, Z (X, Y &lt;= 100 000).</p>

<p><strong>Output:&nbsp;</strong></p>

<p>Với mỗi truy vấn, in ra đáp án tìm được trên một dòng.</p>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>9</div>

<div>1 2 2</div>

<div>1 2 1</div>

<div>3 7 2</div>

<div>2 3 1</div>

<div>1 3 2</div>

<div>2 4 2</div>

<div>1 4 1</div>

<div>3 4 2</div>

<div>1 7 2</div>

<div>&nbsp;</div>
</td>
<td>
<div>0</div>

<div>0</div>

<div>1</div>

<div>0</div>

<div>1</div>

<div>0</div>
</td>
</tr>
</tbody>
</table>

</div>

---

## PYKT2052 - XỬ LÝ RỜI RẠC HÓA DỮ LIỆU

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<p>Cho ma trận A[][] kích thước N x M. Nhiệm vụ của bạn là hãy ánh xạ mỗi phần tử A[i][j] thành một phần tử B[i][j] để thu được ma trận B[][] mới thỏa mãn:</p>

<ol>
<li>B có số lượng phần tử riêng biệt ít nhất có thể</li>
<li>Với mỗi hàng i (1 &lt;= i &lt;= N),</li>
</ol>

<ul>
<li>nếu A[i][j] == A[i][k] thì B[i][j] = B[i][k];</li>
<li>nếu A[i][j] &lt; A[i][k] thì B[i][j] &lt; B[i][k].</li>
</ul>

<ol start="3">
<li>Với mỗi cột j (1 &lt;= j &lt;= M)</li>
</ol>

<ul>
<li>nếu A[i][j] == A[k][j] thì B[i][j] = B[k][j];</li>
<li>nếu A[i][j] &lt; A[k][j] thì B[i][j] &lt; B[k][j].</li>
</ul>

<p><strong>Input</strong></p>

<ul>
<li>Dòng đầu tiên chứa 2 số nguyên N và M (N x M &lt;= 10^6).</li>
<li>N dòng tiếp theo, mỗi dòng gồm M số nguyên mô tả ma trận A (0 &lt;= A[i][j] &lt;= 10^9)</li>
</ul>

<p><strong>Output</strong></p>

<ul>
<li>In ra đáp án là số lượng phần tử riêng biệt trong ma trận B tìm được.</li>
</ul>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2 3</div>

<div>8 11 16</div>

<div>16&nbsp;21&nbsp;5</div>

<div>&nbsp;</div>
</td>
<td>
<div>3</div>

<div>&nbsp;</div>
</td>
</tr>
<tr>
<td>
<div>2 3</div>

<div>8 11 16</div>

<div>16&nbsp;21&nbsp;16</div>

<div>&nbsp;</div>
</td>
<td>
<div>4</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 1:</p>

<p>1 2 3</p>

<p>3 2 1</p>

<p>Giải thích test 2:</p>

<p>1 2 3</p>

<p>3 4 3</p>

---

## PYKT2053 - PHÂN HOẠCH TẬP HỢP

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<p>Cho dãy số A[] có N phần tử. Bạn cần đếm số cách phân hoạch A thành 3 tập hợp con, sao cho tổng các phần tử trong mỗi tập hợp con là bằng nhau.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test (T ≤ 10).</p>

<p>Mỗi test bắt đầu bởi số nguyên N (N ≤ 15)</p>

<p>Dòng tiếp theo gồm N số nguyên dương A[i] (1 ≤ A[i] ≤ 10<sup>6</sup>).</p>

<p><strong>Output:&nbsp;</strong></p>

<p>Với mỗi test, in ra đáp án tìm được trên một dòng.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div><strong>Input:</strong></div>
</td>
<td>
<div><strong>Output</strong></div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>5</div>

<div>10 20 25 5 30</div>

<div>3</div>

<div>1 2 3</div>

<div>&nbsp;</div>
</td>
<td>
<div>6</div>

<div>0</div>
</td>
</tr>
</tbody>
</table>

<p><br>
Giải thích test 1:</p>

<p>11223</p>

<p>11332</p>

<p>22113</p>

<p>22331</p>

<p>33112</p>

<p>33221</p>

---

## PYKT2077 - SỐ ĐẶC BIỆT (bản khó)

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<div>
<p>Một số được gọi là đặc biệt nếu như tổng các chữ số của nó là một số nguyên tố. Cho số tự nhiên N, hãy đếm số cặp (x, y) nguyên dương thỏa mãn x, y là số đặc biệt và x + 2y = N.</p>

<p><strong>Input:</strong></p>

<p>Dữ liệu đầu vào chứa một số nguyên dương N (1&lt;= N &lt;= 10^15).</p>

<p><strong>Output:&nbsp;</strong></p>

<p>In ra số cặp (x, y) thỏa mãn yêu cầu của đề bài.</p>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>100</div>

<div>&nbsp;</div>
</td>
<td>
<div>7</div>
</td>
</tr>
</tbody>
</table>

</div>

---

## PYKT2078 - K BIT 0

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<div>
<p>Cho số nguyên N. Nhiệm vụ của bạn là hãy xác định xem các số trong phạm vi từ 0 tới N có bao nhiêu số mà biểu diễn nhị phân của nó có đúng K chữ số 0.</p>

<p>Ví dụ N = 20, K = 3, ta có</p>

<p>8 = 1000</p>

<p>17 = 10001</p>

<p>18 = 10010</p>

<p>20 = 10100</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T &lt;= 20).</p>

<p>Mỗi test gồm hai số nguyên N và K (0&lt;= N &lt; 2^31, 1 &lt;= K &lt;= 31).</p>

<p><strong>Output:&nbsp;</strong></p>

<p>Với mỗi test, in ra số lượng các số thỏa mãn có K bit 0.</p>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>2</div>

<div>20 3</div>

<div>8 1</div>

<div>&nbsp;</div>
</td>
<td>
<div>4</div>

<div>4</div>
</td>
</tr>
</tbody>
</table>

</div>

---

## PYKT2079 - SỐ LỘC PHÁT (bản khó)

- <small>Chủ đề con: TỪ ĐIỂN</small>
- <small>Độ khó: 3</small>

<p>Theo quan niệm Á Đông, số 6 và 8 đọc là lục, bát, do vậy người ta hay liên tưởng tới lộc phát, là phát tài phát lộc.</p>

<p>Nhiệm vụ của bạn là hãy xác định xem trong các số từ 1&nbsp;à&nbsp;N và chia hết cho 8, tức dãy số 8, 16, 24, 32, … , tổng số lần xuất hiện chữ số 6 và 8 là bao nhiêu?</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test T (T &lt;= 100 000).</p>

<p>Mỗi test gồm một số nguyên dương N (1 &lt;= N &lt;= 10^18)</p>

<p><strong>Output:&nbsp;</strong></p>

<p>Với mỗi test, in ra đáp án tìm được trên một dòng.</p>

<p><strong>Test ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>4</div>

<div>10</div>

<div>18</div>

<div>33</div>

<div>56</div>

<div>&nbsp;</div>
</td>
<td>
<div>1</div>

<div>2</div>

<div>2</div>

<div>4</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 4: Có 4 số thỏa mãn là 8, 16, 48, 56, tổng cộng có 4 chữ số thỏa mãn.</p>

---

## PYKT2080 - XÂU CON

- <small>Chủ đề con: DANH SÁCH</small>
- <small>Độ khó: 3</small>

<p>Cho 2 số nguyên dương N, M và xâu s. Hãy đếm số lượng các xâu t có độ dài bằng N và xâu s là xâu con của t.</p>

<p><strong>Input:</strong></p>

<p>Dòng đầu tiên là số lượng bộ test (T ≤ 20).</p>

<p>Mỗi bộ test bắt đầu bởi 2 số N và M (N, M ≤ 10^12).</p>

<p>Dòng tiếp theo là xâu s có độ dài không quá 50 kí tự, chỉ gồm các chữ cái thường.</p>

<p><strong>Output:&nbsp;</strong></p>

<p>Với mỗi test, in ra đáp án tìm được theo modulo M.</p>

<p><strong>Ví dụ:</strong></p>

<table>
<tbody>
<tr>
<td>
<div>Input:</div>
</td>
<td>
<div>Output</div>
</td>
</tr>
<tr>
<td>
<div>3</div>

<div>2 1000</div>

<div>ab</div>

<div>3 1000</div>

<div>ab</div>

<div>3 1000</div>

<div>aa</div>
</td>
<td>
<div>1</div>

<div>52</div>

<div>51</div>
</td>
</tr>
</tbody>
</table>

<p>Giải thích test 2:</p>

<p>Các xâu có dạng *ab hoặc ab*, mỗi loại có 26 cách.</p>

---

