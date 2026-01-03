#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1005;

vector<vector<int>> dsKe(N, vector<int>());
vector<bool> visited;
vector<int> truoc;
int n, m;

// DFS tìm đường đi từ u
void dfs(int u)
{
    stack<int> s;
    s.push(u);
    visited[u] = true;

    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        for (auto i : dsKe[x])
        {
            if (!visited[i])
            {
                visited[i] = true;
                truoc[i] = x;
                s.push(x);
                s.push(i);
                break;
            }
            else if (truoc[x] != i) // Nếu có chu trình
            {
                truoc[i] = x;
                return;
            }
        }
    }
}
// In đường đi từ u -> v
void inDuongDi()
{
    dfs(1); // Hoặc bfs(u);
    if (truoc[1] == 0)
        cout << "NO" << endl;
    else
    {
        vector<int> path;
        path.push_back(1);
        for (int x = truoc[1]; x != 1; x = truoc[x])
            path.push_back(x);
        path.push_back(1);
        reverse(path.begin(), path.end());
        for (auto x : path)
            cout << x << " ";
        cout << endl;
    }
}
void testCase()
{
    cin >> n >> m;
    visited.assign(n + 1, false);
    truoc.assign(n + 1, 0);
    dsKe.assign(n, vector<int>());

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        dsKe[x].push_back(y);
        dsKe[y].push_back(x);
    }
    inDuongDi();
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
