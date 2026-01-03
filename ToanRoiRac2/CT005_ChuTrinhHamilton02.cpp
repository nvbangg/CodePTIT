#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 105;

int n, m, u;
vector<vector<int>> mtKe;
vector<vector<int>> res;
vector<int> path;
vector<bool> visited;

void Hamilton(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!visited[j] && mtKe[path[i - 1]][j])
        {
            visited[j] = true;
            path.push_back(j);
            // for(int x : path) cout << x << " ";
            // cout << endl;
            if (i == n + 1)
            {
                if (path[1] == path[i])
                    res.push_back(path);
            }
            else if (i <= n)
                Hamilton(i + 1);
            path.pop_back();
            visited[j] = false;
        }
    }
}

void init()
{
    cin >> n >> m >> u;
    mtKe.assign(N, vector<int>(N, 0));
    res.clear();
    path.clear();
    visited.assign(N, false);
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        mtKe[x][y] = 1;
        mtKe[y][x] = 1;
    }
    path.push_back(0);
    path.push_back(u);
}

void testCase()
{
    init();
    Hamilton(2);
    if (res.size() > 0)
    {
        cout << res.size() << endl;
        for (auto v : res)
        {
            for (int i = 1; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
    else
        cout << "0" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("CT.in", "r", stdin);
    // freopen("CT.out", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}