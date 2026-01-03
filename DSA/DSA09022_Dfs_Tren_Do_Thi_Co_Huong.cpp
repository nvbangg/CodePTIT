#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int V, E, u, v, start;
vector<vector<int>> G;
vector<bool> vs;

void dfs(int u)
{
    vs[u] = true;
    cout << u << " ";
    for (int v : G[u])
    {
        if (!vs[v])
        {
            dfs(v);
        }
    }
}

void testCase()
{
    cin >> V >> E >> start;
    G.clear();
    G.resize(V + 1);
    vs.clear();
    vs.resize(V + 1, false);
    for (int i = 1; i <= E; i++)
    {
        cin >> u >> v;
        G[u].push_back(v);
    }
    dfs(start);
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