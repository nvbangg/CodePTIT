#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int f[101][101][101];

void testCase()
{
    int n, m, k, res = 0;
    cin >> n >> m >> k;
    string x, y, z;
    cin >> x >> y >> z;

    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            for (int l = 1; l <= k; ++l)
            {
                if (x[i - 1] == y[j - 1] && x[i - 1] == z[l - 1])
                    f[i][j][l] = f[i - 1][j - 1][l - 1] + 1;
                else
                    f[i][j][l] = max({f[i - 1][j][l], f[i][j - 1][l], f[i][j][l - 1]});
                res = max(res, f[i][j][l]);
            }
        }
    }
    cout << res;
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