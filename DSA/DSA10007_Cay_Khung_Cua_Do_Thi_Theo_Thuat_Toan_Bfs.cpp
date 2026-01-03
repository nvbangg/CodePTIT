#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool visited[1001];
vector<pair<int, int>> res;

void bfs(int s, vector<int> edges[])
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int current_node = q.front();
        q.pop();

        for (auto x : edges[current_node])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                res.push_back({current_node, x});
            }
        }
    }
}

void testCase()
{
    int n, m, u;
    cin >> n >> m >> u;

    res.clear();

    vector<int> edges[1001];
    memset(visited, false, sizeof visited);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    bfs(u, edges);
    if (res.size() == n - 1)
    {
        for (auto x : res)
        {
            cout << x.first << " " << x.second << endl;
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