#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1005;

int t, n, m, u, v;
vector<vector<int>> dsKe;
vector<bool> visited;
vector<int> truoc;

// Số đường đi độ dài 2 trong dsKe
int soDuongDi2(int u, int v)
{
    int cnt = 0;
    for (auto i : dsKe[u])
        for (auto x : dsKe[i])
            if (x == v)
            {
                cnt++;
                break;
            }
    return cnt;
}
// BFS tìm đường đi từ u
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (auto i : dsKe[x])
            if (!visited[i])
            {
                visited[i] = true;
                truoc[i] = x;
                q.push(i);
            }
    }
}
// In đường đi từ u -> v
void inDuongDi()
{
    bfs(u); // Hoặc bfs(u);
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
    cin >> t >> n >> m >> u >> v;
    visited.assign(n + 1, false);
    truoc.assign(n + 1, 0);
    dsKe.assign(n + 1, vector<int>());
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        dsKe[a].push_back(b);
        dsKe[b].push_back(a);
    }

    if (t == 1)
        cout << soDuongDi2(u, v) << endl;
    else if (t == 2)
        inDuongDi();
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("DT.INP", "r", stdin);
    // freopen("DT.OUT", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}