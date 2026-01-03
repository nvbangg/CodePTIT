#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1005;

vector<vector<int>> dsKe;
vector<bool> visited;
int n, m, u;

// DFS tìm đường đi từ u
vector<int> dfs(int u)
{
    vector<int> path;
    stack<int> s;
    s.push(u);
    visited[u] = true;
    path.push_back(u);

    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        for (auto i : dsKe[x])
            if (!visited[i])
            {
                visited[i] = true;
                path.push_back(i);
                s.push(x);
                s.push(i);
                break;
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
    vector<int> path = dfs(u);
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