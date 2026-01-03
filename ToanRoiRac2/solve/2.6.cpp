#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1005;

vector<vector<int>> dsKe(N);
vector<bool> visited;
int n;
vector<int> dinhTru;

// DFS đệ quy tìm đường đi từ u
void dfs(int u)
{
    visited[u] = true;
    for (auto i : dsKe[u])
        if (!visited[i])
            dfs(i);
}

// Hàm kiểm tra tăng số thành phần liên thông
bool tangTP()
{
    for (int i = 1; i <= n; i++)
        if (!visited[i])
            return true;
    return false;
}

// Hàm kiểm tra đỉnh trụ
void timDinhTru(vector<int> &dinhTru)
{
    for (int i = 1; i <= n; i++)
    {
        visited.assign(n + 1, false);
        visited[i] = 1;           // bỏ qua đỉnh i
        int u = (i == 1) ? 2 : 1; // bắt đầu DFS từ đỉnh khác i
        dfs(u);
        if (tangTP())
            dinhTru.push_back(i);
    }
}

void testCase()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            dsKe[i].push_back(x);
        }
    }
    vector<int> dinhTru;
    timDinhTru(dinhTru);
    sort(dinhTru.begin(), dinhTru.end());

    cout << dinhTru.size() << endl;
    if (!dinhTru.empty())
    {
        for (auto x : dinhTru)
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("DT.INP", "r", stdin);
    // freopen("DT.OUT", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}