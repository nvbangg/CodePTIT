#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// Danh sách cạnh sang Danh sách kề
vector<vector<int>> toDsKe(vector<pair<int, int>> &dsCanh, int n)
{
    vector<vector<int>> dsKe(n);
    for (auto x : dsCanh)
    {
        int u = x.first - 1;
        int v = x.second - 1;
        dsKe[u].push_back(v + 1);
        dsKe[v].push_back(u + 1); // Xóa dòng này nếu CH
    }
    return dsKe;
}
void testCase()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> dsCanh(m);
    for (int i = 0; i < m; ++i)
        cin >> dsCanh[i].first >> dsCanh[i].second;

    vector<vector<int>> dsKe = toDsKe(dsCanh, n);
    for (int i = 0; i < n; ++i)
    {
        cout << i + 1 << ": ";
        for (auto x : dsKe[i])
            cout << x << " ";
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}