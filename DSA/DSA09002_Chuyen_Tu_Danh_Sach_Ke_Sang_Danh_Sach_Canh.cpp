#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// Danh sách kề sang Danh sách cạnh
vector<pair<int, int>> toDsCanh(vector<vector<int>> &dsKe, int n)
{
    vector<pair<int, int>> dsCanh;
    for (int i = 0; i < n; i++)
        for (int x : dsKe[i])
            if (i < x - 1) // Xóa dòng này nếu CH
                dsCanh.push_back({i + 1, x});
    return dsCanh;
}
// Hàm nhập Danh sách kề theo dòng
vector<vector<int>> nhapDsKe(int n)
{
    vector<vector<int>> dsKe(n);
    cin.ignore();
    for (int i = 0; i < n; ++i)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        int x;
        while (ss >> x)
            dsKe[i].push_back(x);
    }
    return dsKe;
}
void testCase()
{
    int n;
    cin >> n;
    vector<vector<int>> dsKe = nhapDsKe(n);
    vector<pair<int, int>> dsCanh = toDsCanh(dsKe, n);
    for (auto x : dsCanh)
    {
        cout << x.first << " " << x.second << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}