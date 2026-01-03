#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, k;
    cin >> n >> k;
    long long a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    long long res = 0;
    for (int i = 0; i < n; ++i)
        res += lower_bound(a + i + 1, a + n, a[i] + k) - (a + i + 1);
    cout << res << endl;
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