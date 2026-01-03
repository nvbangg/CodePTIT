#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n, m;
vector<set<int>> dsKe(N);
vector<int> deg(N, 0);

// Hàm nhập dsCanh sang dsKe
void nhapDsCanh()
{
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        deg[x]++;
        deg[y]++;
        dsKe[x].insert(y);
        dsKe[y].insert(x);
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
            cout << deg[i] << " ";
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