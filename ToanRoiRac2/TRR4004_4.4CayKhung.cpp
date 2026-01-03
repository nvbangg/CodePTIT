#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 105;
const int INF = 10000;
int n, s;
vector<vector<int>> mtKe(N, vector<int>(N));
vector<int> visited(N);
vector<tuple<int, int, int>> cayKhung;
int d = 0;
void Prim(int x)
{
    visited[x] = true;
    while (cayKhung.size() != n - 1)
    {
        int u, v, ts = 1e9;
        for (int i = 1; i <= n; i++)
        {
            if (visited[i])
            {
                for (int j = 1; j <= n; j++)
                {
                    if (mtKe[i][j] != 0 && mtKe[i][j] != INF && !visited[j])
                    {
                        if (ts > mtKe[i][j])
                        {
                            u = i, v=j, ts=mtKe[i][j];
                        }
                    }
                }
            }
        }
        d+=ts;
        visited[v]=true;
        cayKhung.push_back({min(u, v), max(u,v), ts});
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mtKe[i][j];
    Prim(s);
    cout << d << endl;
    for(auto [x, y, z] : cayKhung)
        cout << x << " " << y << " " << z << endl;
}