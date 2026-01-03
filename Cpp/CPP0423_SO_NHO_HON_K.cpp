#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, k, s = 0, b = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= k)
            s++; // đếm số phần tử <= k
    }
    for (int i = 0; i < s; i++)
        if (a[i] > k)
            b++; // đếm số phần tử > k trong s phần tử đầu tiên
    int res = b;
    for (int i = 0, j = s; j < n; i++, j++)
    {
        if (a[i] > k)
            b--; // Nếu phần tử a[i] (rời khỏi cửa sổ) > k, giảm số lượng b
        if (a[j] > k)
            b++; // Nếu phần tử a[j] (thêm vào cửa sổ) > k, tăng số lượng b
        res = min(res, b); // số lượng phần tử lớn hơn k nhỏ nhất trong cửa sổ
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}