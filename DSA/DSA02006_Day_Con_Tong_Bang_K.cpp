#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, k;
vector<int> a, b;
vector<vector<int>> res;
void solve()
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += a[i] * b[i];
    if (sum == k)
    {
        vector<int> tmp;
        for (int i = 0; i < n; ++i)
            if (b[i])
                tmp.push_back(a[i]);
        res.push_back(tmp);
    }
}
void Try(int i)
{
    for (int j = 1; j >= 0; j--)
    {
        b[i] = j;
        if (i == n - 1)
            solve();
        else
            Try(i + 1);
    }
}
void testCase()
{
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    res.clear();
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    Try(0);
    if (res.size() > 0)
    {
        for (auto x : res)
        {
            cout << "[";
            for (auto y : x)
                if (y != x.back())
                    cout << y << " ";
                else
                    cout << x.back() << "] ";
        }
        cout << endl;
    }
    else
        cout << -1 << endl;
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