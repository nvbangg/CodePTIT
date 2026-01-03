#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    long long ans = 0;
    for (int i = 0; i < n; ++i)
        ans += lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - (a.begin() + i + 1);
    cout << ans << endl;
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