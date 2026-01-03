#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n, m = 0;
vector<vector<int>> mtLT(N, vector<int>(N, 0));
vector<int> deg(N, 0);

// Hàm nhập mtKe samg mtLT
void nhapMtKe()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x == 1 && j > i)
            {
                m++;
                deg[i]++;
                deg[j]++;
                mtLT[i][m] = 1;
                mtLT[j][m] = 1;
            }
        }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    cin >> t >> n;
    nhapMtKe();
    if (t == 1)
    {
        for (int i = 1; i <= n; i++)
            cout << deg[i] << " ";
    }
    else if (t == 2)
    {
        cout << n << " " << m << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                cout << mtLT[i][j] << " ";
            cout << endl;
        }
    }
}