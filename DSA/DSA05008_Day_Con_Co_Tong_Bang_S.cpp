#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, s;
    cin >> n >> s;
    int a[n], f[s + 1] = {};
    f[0] = 1;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        for (int j = s; j >= 1; --j)
        {
            if (j >= a[i] && f[j] == 0 && f[j - a[i]] == 1)
            {
                f[j] = 1;
            }
        }
    }
    cout << (f[s] == 1 ? "YES" : "NO");
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