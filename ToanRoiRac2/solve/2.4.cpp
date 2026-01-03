#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1005;

int mtKe[N][N];
vector<bool> visited;
int n;

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
        for (int i = 1; i <= n; i++)            // for (auto i : dsKe[x])
            if (mtKe[x][i] == 1 && !visited[i]) // if (!visited[i])
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
    cin >> n;
    visited.assign(n + 1, false);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mtKe[i][j];

    vector<vector<int>> cacTP;
    for (int i = 1; i <= n; i++)
        if (!visited[i])
            cacTP.push_back(dfs(i));

    cout << cacTP.size() << endl;
    for (int i = 0; i < cacTP.size(); i++)
    {
        sort(cacTP[i].begin(), cacTP[i].end());
        for (auto x : cacTP[i])
            cout << x << " ";
        cout << endl;
    }
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