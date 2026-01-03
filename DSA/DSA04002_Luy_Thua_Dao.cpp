#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const long long MOD = 1e9 + 7;

long long poww(long long n, long long k)
{
    if (k == 0)
        return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

long long rev(long long n)
{
    long long res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

void testCase()
{
    long long n;
    cin >> n;
    long long r = rev(n);
    cout << poww(n, r);
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