#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int mod = 1e9 + 7;

void testCase()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    long long ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans = (ans + i * a[i]) % mod;
    }
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