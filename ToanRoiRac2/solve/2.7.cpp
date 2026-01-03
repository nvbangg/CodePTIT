#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dsKe[101];
bool visited[101];
vector<pair<int, int>> canhCau, dsCanh;

void dfs(int u)
{
    visited[u] = true;
    for (int v : dsKe[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

int demTPLT(int uCam, int vCam)
{
    for (int i = 1; i <= n; i++)
        visited[i] = false;
    int soTPLT = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            soTPLT++;
        }
    }
    return soTPLT;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
        dsCanh.push_back({u, v});
    }
    int soTPLTBanDau = demTPLT(-1, -1);
    for (auto e : dsCanh)
    {
        int u = e.first, v = e.second;
        dsKe[u].erase(remove(dsKe[u].begin(), dsKe[u].end(), v), dsKe[u].end());
        dsKe[v].erase(remove(dsKe[v].begin(), dsKe[v].end(), u), dsKe[v].end());
        int soTPLTMoi = demTPLT(-1, -1);
        if (soTPLTMoi > soTPLTBanDau)
        {
            canhCau.push_back({u, v});
        }
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
    }
    cout << canhCau.size() << "\n";
    sort(canhCau.begin(), canhCau.end());
    for (auto e : canhCau)
    {
        cout << e.first << " " << e.second << "\n";
    }
    return 0;
}
