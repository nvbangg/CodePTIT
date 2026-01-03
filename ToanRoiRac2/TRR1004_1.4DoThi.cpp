#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n, m;
vector<vector<int>> mtKe(N, vector<int>(N, 0));
vector<int> deg(N, 0);

// Hàm nhập dsCanh sang mtKe
void nhapDsCanh()
{
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        deg[x]++;
        deg[y]++;
        mtKe[x][y] = 1;
        mtKe[y][x] = 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n >> m;
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