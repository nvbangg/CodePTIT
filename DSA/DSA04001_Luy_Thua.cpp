#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

ll Pow(ll n, ll k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    ll x = Pow(n, k / 2);
    ll y = (x * x) % MOD;
    if (k % 2 == 0)
        return y;
    return (n * y) % MOD;
}

void testCase()
{
    ll n, k;
    cin >> n >> k;
    cout << Pow(n, k) << endl;
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