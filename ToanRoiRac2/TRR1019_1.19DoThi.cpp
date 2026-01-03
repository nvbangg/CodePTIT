#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n, m = 0;
vector<pair<int, int>> dsCanh;
vector<int> degOut(N, 0);
vector<int> degIn(N, 0);

// Nhập dsKe CH cho số đỉnh kề sang dsCanh CH
void nhapDsKe()
{
    for (int i = 1; i <= n; i++)
    {
        int k; // số đỉnh kề
        cin >> k;
        degOut[i] = k;
        while (k--)
        {
            int j;
            cin >> j;
            m++;
            degIn[j]++;
            dsCanh.push_back({i, j});
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
            cout << degIn[i] << " " << degOut[i] << endl;
    }
    else if (t == 2)
    {
        cout << n << " " << m << endl;
        for (auto [x, y] : dsCanh)
            cout << x << " " << y << endl;
    }
}