#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;
//* Tìm các thành phần liên thông bằng dfs
int n;
vector<vector<int>> mtKe(N, vector<int>(N, 0));
vector<bool> visited(N, false);
vector<int> duyet; // thứ tự đỉnh duyệt

void dfs(int i)
{
    visited[i] = true;
    duyet.push_back(i);
    for (int x = 1; x <= n; x++)
        if (mtKe[i][x] == 1 && !visited[x])
            dfs(x);
}

// Tìm các thành phần liên thông
void TPLT()
{
    vector<vector<int>> res;
    for (int i = 1; i <= n; i++)
        if (!visited[i])
        {
            duyet.clear();
            dfs(i);
            sort(duyet.begin(), duyet.end());
            res.push_back(duyet);
        }
    cout << res.size() << endl;
    for (auto x : res)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
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
    TPLT();
}