#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
vector<long long> f(1001);
void fibo()
{
    f = {0, 1};
    for (int i = 2; i <= 1000; ++i)
    {
        f.push_back(f[i - 1] + f[i - 2]);
        f[i] %= mod;
    }
}
void TestCase()
{
    int n;
    cin >> n;
    cout << f[n] << endl;
}

int main()
{
    fibo();
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}