#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    // Tạo mảng b[i] là giá trị lớn nhất từ vị trí i trở về sau
    b[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
        b[i] = max(b[i + 1], a[i]);

    int res = 0, j = 0;
    for (int i = 0; i < n; ++i)
    {
        while (j < n && b[j] >= a[i])
        {
            res = max(res, j - i);
            j++;
        }
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
