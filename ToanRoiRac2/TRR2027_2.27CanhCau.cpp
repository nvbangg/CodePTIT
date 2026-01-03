#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int n;
vector<vector<int>> mtKe(N, vector<int>(N, 0));
vector<bool> visited(N, false);
vector<pair<int, int>> canhCau;
//* Tìm cạnh cầu bằng dfs
void dfs(int i)
{
    visited[i] = true;
    for (int x = 1; x <= n; x++)
        if (mtKe[i][x] && !visited[x])
            dfs(x);
}

// Số thành phần liên thông
int soTPLT()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (!visited[i])
        {
            cnt++;
            dfs(i);
        }
    return cnt;
}

void timCanhCau()
{
    int origin = soTPLT();
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++) // j=1 nếu có hướng
            if (mtKe[i][j])
            {
                mtKe[i][j] = mtKe[j][i] = 0;
                visited.assign(N, false);
                if (soTPLT() > origin)
                    canhCau.push_back({i, j});
                mtKe[i][j] = mtKe[j][i] = 1;
            }
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
    timCanhCau();
    cout << canhCau.size() << endl;
    for (auto [x, y] : canhCau)
        cout << x << " " << y << endl;
}