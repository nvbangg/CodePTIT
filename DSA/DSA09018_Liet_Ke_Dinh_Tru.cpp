#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int V, E, u, v, lien_thong;
vector<vector<int>> G;
vector<bool> Vs;

void bfs(int S)
{
    queue<int> q;
    q.push(S);
    Vs[S] = 1;

    while (!q.empty())
    {
        u = q.front();
        q.pop();

        for (int i = 0; i < G[u].size(); ++i)
        {
            v = G[u][i];
            if (!Vs[v])
            {
                q.push(v);
                Vs[v] = 1;
            }
        }
    }
}

bool check(int S)
{
    Vs.clear();
    Vs.resize(V + 1, 0);
    Vs[S] = 1;

    int cou = 0;
    for (int i = 1; i <= V; ++i)
    {
        if (!Vs[i])
        {
            bfs(i);
            cou++;
        }
    }
    return cou > lien_thong;
}

void testCase()
{
    lien_thong = 0;
    cin >> V >> E;
    G.clear();
    G.resize(V + 1);
    Vs.clear();
    Vs.resize(V + 1, 0);

    for (int i = 1; i <= E; ++i)
    {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 1; i <= V; ++i)
    {
        if (!Vs[i])
        {
            bfs(i);
            lien_thong++;
        }
    }

    for (int i = 1; i <= V; ++i)
    {
        if (check(i))
            cout << i << " ";
    }
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