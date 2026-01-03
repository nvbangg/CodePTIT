#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, m, ans;
int a[105][105];
bool vs[105][105];

void Try(int i, int j)
{
    if (i == n && j == m)
    {
        ans++;
        return;
    }
    if (i + 1 <= n && !vs[i + 1][j])
        Try(i + 1, j);
    if (j + 1 <= m && !vs[i][j + 1])
        Try(i, j + 1);
}

void testCase()
{
    ans = 0;
    cin >> n >> m;
    memset(vs, false, sizeof(vs));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }
    Try(1, 1);
    cout << ans;
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