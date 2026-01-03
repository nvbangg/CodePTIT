#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 123456789;

ll Pow(ll n, ll k)
{
    if (k == 0)
        return 1;
    ll x = Pow(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

void testCase()
{
    ll n;
    cin >> n;
    cout << Pow(2, n - 1) << endl;
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