#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int V, E, u, v;
vector<vector<int>> G;

void testCase()
{
    cin >> V >> E;
    G.clear();
    G.resize(V + 1);
    while (E--)
    {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int odd_deg = 0;
    for (int i = 1; i <= V; ++i)
    {
        odd_deg += (G[i].size() % 2 == 1);
    }
    if (odd_deg == 0)
        cout << 2;
    else if (odd_deg == 2)
        cout << 1;
    else
        cout << 0;
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