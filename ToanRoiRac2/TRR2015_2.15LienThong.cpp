#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;
//* kiểm tra liên thông mạnh/yếu vô hướng
int n;
vector<vector<int>> mtKe(N, vector<int>(N));
vector<bool> visited(N);

void dfs(int i)
{
    visited[i] = true;
    for (int x = 1; x <= n; x++)
        if (mtKe[i][x] == 1 && !visited[x])
            dfs(x);
}
void dfsYeu(int i)
{
    visited[i] = true;
    for (int x = 1; x <= n; x++)
        if ((mtKe[i][x] || mtKe[x][i]) && !visited[x])
            dfsYeu(x);
}

bool LTYeu()
{
    visited.assign(N, false);
    dfsYeu(1);
    for (int i = 1; i <= n; i++)
        if (!visited[i])
            return false;
    return true;
}
bool LTManh()
{
    for (int i = 1; i <= n; i++)
    {
        visited.assign(N, false);
        dfs(i);
        for (int i = 1; i <= n; i++)
            if (!visited[i])
                return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mtKe[i][j];
    if (LTYeu())
    {
        if (LTManh())
            cout << 1;
        else
            cout << 2;
    }
    else
        cout << 0;
}