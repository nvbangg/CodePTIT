#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int V, E, u, v, lthong;
vector<vector<int>> G;
vector<bool> vs;

void dfs(int s)
{
    stack<int> st;
    st.push(s);
    vs[s] = 1;
    while (!st.empty())
    {
        u = st.top();
        st.pop();
        for (int v : G[u])
        {
            if (!vs[v])
            {
                vs[v] = 1;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

void testCase()
{
    lthong = 0;
    cin >> V >> E;
    G.clear();
    G.resize(V + 10);
    vs.clear();
    vs.resize(V + 10, 0);
    while (E--)
    {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for (int i = 1; i <= V; ++i)
    {
        if (!vs[i])
        {
            dfs(i);
            lthong++;
        }
    }
    cout << lthong;
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