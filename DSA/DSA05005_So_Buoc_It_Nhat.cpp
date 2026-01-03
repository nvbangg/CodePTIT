#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    int a[n], f[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        f[i] = 1;
        for (int j = 0; j < i; ++j)
        {
            if (a[i] >= a[j])
            {
                //! bài này yêu cầu là sort nên chỗ này lấy cả dấu =
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    cout << n - *max_element(f, f + n);
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}