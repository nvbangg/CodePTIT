#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<pair<int, int>> res;
bool visited[1001];

void dfs(int s, vector<int> edge[])
{
    visited[s] = true;

    for (auto x : edge[s])
    {
        if (!visited[x])
        {
            res.push_back({s, x});
            dfs(x, edge);
        }
    }
}

void testCase()
{
    int v, e, u;
    cin >> v >> e >> u;

    memset(visited, false, sizeof visited);
    res.clear();

    vector<int> edge[1001];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    dfs(u, edge);

    if (res.size() == v - 1)
    {
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i].first << " " << res[i].second << endl;
        }
    }
    else
        cout << -1 << endl;
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