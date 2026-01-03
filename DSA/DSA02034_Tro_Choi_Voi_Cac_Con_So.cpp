#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n;
vector<int> a;
vector<bool> vs;

void solve()
{
    for (int i = 1; i < n; ++i)
    {
        if (abs(a[i] - a[i + 1]) == 1)
            return;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j <= n; ++j)
    {
        if (!vs[j])
        {
            vs[j] = true;
            a[i] = j;
            if (i == n)
                solve();
            else
                Try(i + 1);
            vs[j] = false;
        }
    }
}

void testCase()
{
    cin >> n;
    a.resize(n + 1);
    vs.resize(n + 1, false);
    Try(1);
    cout << endl;
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