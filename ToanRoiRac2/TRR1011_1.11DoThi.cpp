#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;
const int INF = 10000;

int t, n, m;
vector<vector<int>> mtKe(N, vector<int>(N, INF));
vector<int> deg(N, 0);

// Hàm nhập dsCanh CTS sang mtKe CTS
void nhapDsCanh()
{
    for (int i = 1; i <= m; i++)
    {
        int x, y, ts;
        cin >> x >> y >> ts;
        deg[x]++;
        deg[y]++;
        mtKe[x][y] = ts;
        mtKe[y][x] = ts;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n >> m;
    for (int i = 1; i <= n; i++)
        mtKe[i][i] = 0;
    nhapDsCanh();
    if (t == 1)
    {
        for (int i = 1; i <= n; i++)
            cout << deg[i] << " ";
    }
    else if (t == 2)
    {
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << mtKe[i][j] << " ";
            cout << endl;
        }
    }
}