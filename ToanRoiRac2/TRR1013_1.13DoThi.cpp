#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n;
vector<set<int>> dsKe(N);
vector<int> degOut(N, 0);
vector<int> degIn(N, 0);

// Hàm nhập mtKe CH sang dsKe CH
void nhapMtKe()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                degOut[i]++;
                degIn[j]++;
                dsKe[i].insert(j);
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