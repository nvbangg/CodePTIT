#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dsKe[101], dsKeNguoc[101];
bool visited[101];
vector<int> thuTu;
vector<vector<int>> TPLTManh;

void dfs1(int u)
{
    visited[u] = true;
    for (int v : dsKe[u])
    {
        if (!visited[v])
        {
            dfs1(v);
        }
    }
    thuTu.push_back(u);
}

void dfs2(int u, vector<int> &tp)
{
    visited[u] = true;
    tp.push_back(u);
    for (int v : dsKeNguoc[u])
    {
        if (!visited[v])
        {
            dfs2(v, tp);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsKe[u].push_back(v);
        dsKeNguoc[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
        visited[i] = false;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
            dfs1(i);
    }
    reverse(thuTu.begin(), thuTu.end());
    for (int i = 1; i <= n; i++)
        visited[i] = false;
    for (int u : thuTu)
    {
        if (!visited[u])
        {
            vector<int> tp;
            dfs2(u, tp);
            sort(tp.begin(), tp.end());
            TPLTManh.push_back(tp);
        }
    }
    cout << TPLTManh.size() << "\n";
    for (auto tp : TPLTManh)
    {
        for (int x : tp)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}