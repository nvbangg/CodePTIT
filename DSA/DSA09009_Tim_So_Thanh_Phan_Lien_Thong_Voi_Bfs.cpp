#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int V, E;
bool visited[1001];

void dfs(int u, vector<int> edge[])
{
    visited[u] = true;

    for (auto x : edge[u])
    {
        if (!visited[x])
        {
            dfs(x, edge);
        }
    }
}

void testCase()
{
    cin >> V >> E;

    vector<int> edge[1001];
    memset(visited, false, sizeof visited);

    for (int i = 1; i <= E; i++)
    {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    int cnt = 0;

    for (int i = 1; i <= V; i++)
    {
        if (!visited[i])
        {
            dfs(i, edge);
            cnt++;
        }
    }

    cout << cnt << endl;
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
