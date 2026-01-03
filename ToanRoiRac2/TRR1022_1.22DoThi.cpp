#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;
const int INF = 10000;

int t, n, m;
vector<vector<int>> mtKe(N, vector<int>(N, INF));
vector<int> degOut(N, 0);
vector<int> degIn(N, 0);

// Hàm nhập dsCanh CTS CH sang mtKe CTS CH
void nhapDsCanh()
{
    for (int i = 0; i < m; i++)
    {
        int x, y, ts;
        cin >> x >> y >> ts;
        degOut[x]++;
        degIn[y]++;
        mtKe[x][y] = ts;
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
            cout << degIn[i] << " " << degOut[i] << endl;
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