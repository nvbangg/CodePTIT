#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;
//* DFS đường đi từ u -> v
int n, t, u, v;
vector<vector<int>> mtKe(N, vector<int>(N, 0));
vector<bool> visited(N, false);
vector<int> truoc(N, 0);

// Số đường đi độ dài 2 trong mtKe
int soDuongDi2(int u, int v)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (mtKe[u][i] && mtKe[i][v])
            cnt++;
    return cnt;
}

// DFS tìm đường đi từ u
void dfs(int u)
{
    stack<int> s;
    s.push(u);
    visited[u] = true;
    while (!s.empty())
    {
        u = s.top();
        s.pop();
        for (int i = 1; i <= n; i++)
            if (mtKe[u][i] == 1 && !visited[i])
            {
                visited[i] = true;
                truoc[i] = u;
                s.push(u);
                s.push(i);
                break;
            }
    }
}

// In đường đi từ u -> v
void inDuongDi()
{
    dfs(u);
    if (truoc[v] == 0)
        cout << 0 << endl;
    else
    {
        vector<int> path;
        for (int x = v; x != 0; x = truoc[x])
            path.push_back(x);
        reverse(path.begin(), path.end());
        for (auto x : path)
            cout << x << " ";
        cout << endl;
    }
}

void testCase()
{
    cin >> t >> n >> u >> v;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mtKe[i][j];
    if (t == 1)
        cout << soDuongDi2(u, v);
    else if (t == 2)
        inDuongDi();
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}