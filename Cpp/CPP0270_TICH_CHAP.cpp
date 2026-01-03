#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, m;
    cin >> n >> m;
    int x[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> x[i][j];
    int h[3][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> h[i][j];
    long long res = 0;
    for (int i = 0; i <= n - 3; i++)
        for (int j = 0; j <= m - 3; j++)
        {
            for (int u = 0; u < 3; u++)
                for (int v = 0; v < 3; v++)
                    res += x[i + u][j + v] * h[u][v];
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