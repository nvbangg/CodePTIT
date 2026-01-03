#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n;
vector<vector<int>> mtKe(N, vector<int>(N, 0));
vector<int> deg(N, 0);

// Nhập dsKe cho số đỉnh kề sang mtKe
void nhapDsKe()
{
    for (int i = 1; i <= n; i++)
    {
        int k; // số đỉnh kề
        cin >> k;
        deg[i] = k;
        while (k--)
        {
            int j;
            cin >> j;
            mtKe[i][j] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n;
    nhapDsKe();
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
            for (int j = 1; j <= n; j++)
                cout << mtKe[i][j] << " ";
            cout << endl;
        }
    }
}