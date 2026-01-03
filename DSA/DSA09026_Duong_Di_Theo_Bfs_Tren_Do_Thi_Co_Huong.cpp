#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int V, E, s, t, u, v;
vector<vector<int>> G;
vector<int> tr;
vector<bool> vs;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vs[s] = true;

    while (!q.empty())
    {
        u = q.front();
        q.pop();
        if (u == t)
            return;

        for (int v : G[u])
        {
            if (vs[v] == false)
            {
                q.push(v);
                vs[v] = true;
                tr[v] = u;
            }
        }
    }
}

void trace()
{
    if (vs[t] == false)
    {
        cout << -1;
        return;
    }
    stack<int> way;
    int last = t;
    while (last != -1)
    {
        way.push(last);
        last = tr[way.top()];
    }
    while (!way.empty())
    {
        cout << way.top() << " ";
        way.pop();
    }
}

void testCase()
{
    cin >> V >> E >> s >> t;
    G.clear();
    G.resize(V + 1);
    vs.clear();
    vs.resize(V + 1, 0);
    tr.clear();
    tr.resize(V + 1, -1);
    while (E--)
    {
        cin >> u >> v;
        G[u].push_back(v);
    }
    bfs(s);
    trace();
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