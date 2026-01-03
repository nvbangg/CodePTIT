#include <bits/stdc++.h>
using namespace std;

int n, m, u, v;
vector<int> dsKe[101];
bool visited[101];
vector<int> dinhThat;

void dfs(int s, int dinhCam, bool &datV)
{
    visited[s] = true;
    if (s == v)
        datV = true;
    for (int x : dsKe[s])
    {
        if (x != dinhCam && !visited[x])
        {
            dfs(x, dinhCam, datV);
        }
    }
}

bool coDuongDi(int dinhCam)
{
    for (int i = 1; i <= n; i++)
        visited[i] = false;
    bool datV = false;
    dfs(u, dinhCam, datV);
    return datV;
}

int main()
{
    cin >> n >> m >> u >> v;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        dsKe[a].push_back(b);
        dsKe[b].push_back(a);
    }
    bool coDuongDiBanDau = coDuongDi(-1);
    if (!coDuongDiBanDau)
    {
        cout << "0\n";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i != u && i != v && !coDuongDi(i))
        {
            dinhThat.push_back(i);
        }
    }
    cout << dinhThat.size() << "\n";
    if (!dinhThat.empty())
    {
        sort(dinhThat.begin(), dinhThat.end());
        for (int x : dinhThat)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}