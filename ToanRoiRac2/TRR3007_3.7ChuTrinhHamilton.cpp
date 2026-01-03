#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 105;

int n, u, cnt = 0;
vector<vector<int>> mtKe;
vector<set<int>> dsKe;
vector<int> path;
vector<bool> visited;

void Hamilton(int i)
{
    for (int j : dsKe[path[i - 1]])
    {
        if (!visited[j])
        {
            visited[j] = true;
            path[i] = j;
            // for(int x : path) cout << x << " ";
            // cout << endl;
            if (i == n)
            {
                if (dsKe[path[i]].count(u))
                {
                    cnt++;
                    for (int k = 1; k <= n; k++)
                        cout << path[k] << " ";
                    cout << u << endl;
                }
            }
            else if (i <= n)
                Hamilton(i + 1);
            visited[j] = false;
        }
    }
}

void init()
{
    cin >> n >> u;
    mtKe.assign(N, vector<int>(N, 0));
    dsKe.resize(N);
    visited.assign(N, false);
    path.resize(N);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mtKe[i][j];
            if (mtKe[i][j])
                dsKe[i].insert(j);
        }
    }
}

void testCase()
{
    init();
    path[1] = u;
    visited[u] = true;
    Hamilton(2);
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("CT.INP", "r", stdin);
    freopen("CT.OUT", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}