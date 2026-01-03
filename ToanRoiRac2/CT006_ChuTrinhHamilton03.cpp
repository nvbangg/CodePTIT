#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 105;

int n, u;
vector<vector<int>> mtKe;
vector<vector<int>> res;
vector<int> path;
vector<bool> visited;

int MIN = INT_MAX;
int sum = 0;

void Hamilton(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!visited[j] && mtKe[path[i - 1]][j] != 10000 && mtKe[path[i - 1]][j])
        {
            visited[j] = true;
            path.push_back(j);
            sum += mtKe[path[i - 1]][j];
            // for(int x : path) cout << x << " ";
            // cout << endl;

            if (i == n + 1)
            {
                if (path[1] == path[i])
                {
                    if (sum < MIN)
                    {
                        res.push_back(path);
                        MIN = sum;
                    }
                }
            }
            else if (i <= n)
                Hamilton(i + 1);
            sum -= mtKe[path[i - 1]][j];
            path.pop_back();
            visited[j] = false;
        }
    }
}

void init()
{
    cin >> n >> u;
    mtKe.assign(N, vector<int>(N, 0));
    res.clear();
    path.clear();
    visited.assign(N, false);
    MIN = INT_MAX;
    sum = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mtKe[i][j];

    path.push_back(0);
    path.push_back(u);
}

void testCase()
{
    init();
    Hamilton(2);

    if (res.size() > 0)
    {
        cout << MIN << endl;
        int l = res.size() - 1;
        for (int i = 1; i < res[l].size(); i++)
            cout << res[l][i] << " ";
    }
    else
        cout << "0" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("CT.INP", "r", stdin);
    // freopen("CT.OUT", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}