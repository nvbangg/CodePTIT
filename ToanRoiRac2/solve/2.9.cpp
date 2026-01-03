#include <bits/stdc++.h>
using namespace std;

int t, n, m;
vector<int> dsKe[101];
bool visited[101];
vector<pair<int, int>> dsCanh, huong;

void dfs(int u)
{
    visited[u] = true;
    for (int v : dsKe[u])
    {
        if (!visited[v])
        {
            huong.push_back({u, v});
            dfs(v);
        }
    }
}

int demTPLT()
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

bool kiemTraDinhChieu()
{
    int soTPLTBanDau = demTPLT();
    for (auto e : dsCanh)
    {
        int u = e.first, v = e.second;
        dsKe[u].erase(remove(dsKe[u].begin(), dsKe[u].end(), v), dsKe[u].end());
        dsKe[v].erase(remove(dsKe[v].begin(), dsKe[v].end(), u), dsKe[v].end());
        int soTPLTMoi = demTPLT();
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
        if (soTPLTMoi > soTPLTBanDau)
            return false;
    }
    return true;
}

int main()
{
    cin >> t >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        dsKe[u].push_back(v);
        dsKe[v].push_back(u);
        dsCanh.push_back({u, v});
    }
    if (t == 1)
    {
        cout << (kiemTraDinhChieu() ? 1 : 0) << "\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
            visited[i] = false;
        dfs(1);
        cout << n << " " << m << "\n";
        for (auto e : huong)
        {
            cout << e.first << " " << e.second << "\n";
        }
        for (auto e : dsCanh)
        {
            if (!binary_search(huong.begin(), huong.end(), e))
            {
                cout << e.second << " " << e.first << "\n";
            }
        }
    }
    return 0;
}