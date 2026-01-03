#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int n;
vector<vector<int>> mtKe(N, vector<int>(N, 0));
vector<bool> visited(N, false);
vector<int> dinhTru;
//* Tìm đỉnh trụ bằng bfs
void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while (!q.empty())
    {
        i = q.front();
        q.pop();
        for (int x = 1; x <= n; x++)
            if (mtKe[i][x] == 1 && !visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
    }
}

// Số thành phần liên thông
int soTPLT()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (!visited[i])
        {
            cnt++;
            bfs(i);
        }
    return cnt;
}

// Hàm tìm đỉnh trụ
void timDinhTru()
{
    int origin = soTPLT();
    for (int i = 1; i <= n; i++)
    {
        visited.assign(N, false);
        visited[i] = true;
        if (soTPLT() > origin)
            dinhTru.push_back(i);
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
    timDinhTru();
    cout << dinhTru.size() << endl;
    for (auto x : dinhTru)
        cout << x << " ";
}