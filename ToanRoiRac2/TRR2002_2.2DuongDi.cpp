#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;
//* Tìm đường đi u -> v bằng bfs
int t, n, u, v;
vector<set<int>> dsKe(N);
vector<bool> visited(N, false);
vector<int> truoc(N, 0);

int soDuongDi2(int u, int v)
{
    int cnt = 0;
    for (auto x : dsKe[u])
        for (auto y : dsKe[x])
            if (y == v)
            {
                cnt++;
                break;
            }
    return cnt;
}

void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while (!q.empty())
    {
        i = q.front();
        q.pop();
        for (auto x : dsKe[i])
            if (!visited[x])
            {
                visited[x] = true;
                truoc[x] = i;
                q.push(x);
            }
    }
}

// Truy vết đường đi từ u -> v
vector<int> truyVet(int u, int v)
{
    bfs(u);
    vector<int> res;
    for (int x = v; x != 0; x = truoc[x])
        res.push_back(x);
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> t >> n >> u >> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
                dsKe[i].insert(j);
        }
    }
    if (t == 1)
        cout << soDuongDi2(u, v);
    else if (t == 2)
    {
        vector<int> path = truyVet(u, v);
        if (path.size() == 1)
            cout << 0;
        else
        {
            for (auto x : path)
                cout << x << " ";
        }
    }
}