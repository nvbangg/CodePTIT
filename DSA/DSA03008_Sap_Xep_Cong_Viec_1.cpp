#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    vector<int> s(n), f(n);
    for (auto &x : s)
        cin >> x;
    for (auto &x : f)
        cin >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i)
        a[i] = {f[i], s[i]};
    sort(a.begin(), a.end());
    int cnt = 1;
    int t1 = a[0].first, t2 = a[0].second;
    for (int i = 1; i < n; ++i)
    {
        if (a[i].second >= t1)
        {
            t1 = a[i].first;
            t2 = a[i].second;
            cnt++;
        }
    }
    cout << cnt << endl;
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