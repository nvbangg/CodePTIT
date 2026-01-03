#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, res;
vector<vector<int>> a;
vector<bool> cot, cheoPhu, cheo;

void Try(int i, int sum)
{
    for (int j = 1; j <= n; ++j)
    {
        if (!cot[j] && !cheoPhu[i + j - 1] && !cheo[i - j + n])
        {
            cot[j] = cheoPhu[i + j - 1] = cheo[i - j + n] = true;
            sum += a[i][j];
            if (i == n)
                res = max(res, sum);
            else
                Try(i + 1, sum);
            sum -= a[i][j];
            cot[j] = cheoPhu[i + j - 1] = cheo[i - j + n] = false;
        }
    }
}

void testCase()
{
    res = 0;
    n = 8;
    a.assign(n + 1, vector<int>(n + 1));
    cot.assign(n + 1, false);
    cheoPhu.assign(2 * n, false);
    cheo.assign(2 * n, false);

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    Try(1, 0);
    cout << res << endl;
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