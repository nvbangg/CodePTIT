#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n, s;
vector<vector<int>> mtKe(N, vector<int>(N));
vector<bool> visited(N, false);
vector<pair<int, int>> cayKhung;

void dfs(int i)
{
    visited[i] = true;
    for (int j = 1; j <= n; j++)
        if (mtKe[i][j] == 1 && !visited[j])
        {
            cayKhung.push_back({min(i, j), max(i, j)});
            dfs(j);
        }
}

void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while (!q.empty())
    {
        i = q.front();
        q.pop();
        for (int j = 1; j <= n; j++)
            if (mtKe[i][j] == 1 && !visited[j])
            {
                visited[j] = true;
                cayKhung.push_back({min(i, j), max(i, j)});
                q.push(j);
            }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    cin >> t >> n >> s;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mtKe[i][j];
    if (t == 1)
        dfs(s);
    else
        bfs(s);
    if (cayKhung.size() == n - 1)
    {
        cout << cayKhung.size() << endl;
        for (auto [u, v] : cayKhung)
            cout << u << " " << v << endl;
    }
    else
        cout << "0" << endl;
}