#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1005;

vector<vector<int>> dsKe;
vector<bool> visited;
int n, m, u;

// BFS tìm đường đi từ u
vector<int> bfs(int u)
{
    vector<int> path;
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        path.push_back(x);
        for (auto i : dsKe[x])
            if (!visited[i])
            {
                visited[i] = true;
                q.push(i);
            }
    }
    return path;
}
void testCase()
{
    cin >> n >> m >> u;
    visited.assign(n + 1, false);
    dsKe.assign(n + 1, vector<int>());
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        dsKe[x].push_back(y);
        dsKe[y].push_back(x);
    }
    vector<int> path = bfs(u);
    for (auto x : path)
        cout << x << " ";
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