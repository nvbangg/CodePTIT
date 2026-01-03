#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n, u;
vector<vector<int>> mtKe(N, vector<int>(N));
vector<int> deg(N);
vector<bool> visited(N);

void dfs(int i)
{
    visited[i] = true;
    for (int j = 1; j <= n; j++)
        if (mtKe[i][j] == 1 && !visited[j])
            dfs(j);
}

bool lienThong()
{
    visited.assign(N, false);
    dfs(1);
    for (int i = 1; i <= n; i++)
        if (!visited[i])
            return false;
    return true;
}

// 1: Euler, 2: nửa Euler, 0: không phải
int checkEuler()
{
    if (!lienThong())
        return 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (deg[i] % 2 != 0)
            cnt++;
    if (cnt == 0)
        return 1;
    else if (cnt == 2)
        return 2;
    else
        return 0;
}

void chuTrinhEuler(int i)
{
    stack<int> st;
    vector<int> path;
    st.push(i);
    while (!st.empty())
    {
        i = st.top();
        bool found = false;
        for (int j = 1; j <= n; j++)
        {
            if (mtKe[i][j] == 1)
            {
                found = true;
                st.push(j);
                mtKe[i][j] = 0;
                mtKe[j][i] = 0; 
                break;
            }
        }
        if (!found)
        {
            path.push_back(st.top());
            st.pop();
        }
    }
    reverse(path.begin(), path.end());
    for (auto x : path)
        cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("CT.INP", "r", stdin);
    // freopen("CT.OUT", "w", stdout);
    cin >> t >> n;
    if (t == 2)
        cin >> u;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> mtKe[i][j];
            if (mtKe[i][j] == 1)
                deg[i]++;
        }
    if (t == 1)
        cout << checkEuler();
    else if (t == 2)
        chuTrinhEuler(u);
}