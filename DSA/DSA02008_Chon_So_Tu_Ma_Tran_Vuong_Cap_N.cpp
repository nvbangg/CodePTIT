#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int n, k;
vector<vector<int>> a(11, vector<int>(11)), res;
vector<int> b;
vector<bool> used(11, false);

void solve()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i][b[i - 1]];
    if (sum == k)
        res.push_back(b);
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!used[j])
        {
            b[i - 1] = j;
            used[j] = true;
            if (i == n)
                solve();
            else
                Try(i + 1);
            used[j] = false;
        }
    }
}
void testCase()
{
    cin >> n >> k;
    b.resize(n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    Try(1);
    cout << res.size() << endl;
    for (auto x : res)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
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