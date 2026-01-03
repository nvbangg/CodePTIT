#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n, m;
vector<set<int>> dsKe(N);
vector<int> degOut(N, 0);
vector<int> degIn(N, 0);

// Hàm nhập dsCanh CH sang dsKe CH
void nhapDsCanh()
{
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        degOut[x]++;
        degIn[y]++;
        dsKe[x].insert(y);
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n >> m;
    nhapDsCanh();
    if (t == 1)
    {
        for (int i = 1; i <= n; i++)
            cout << degIn[i] << " " << degOut[i] << endl;
    }
    else if (t == 2)
    {
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << dsKe[i].size() << " ";
            for (auto x : dsKe[i])
                cout << x << " ";
            cout << endl;
        }
    }
}