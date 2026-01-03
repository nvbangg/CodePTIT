#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    long long x, y, p;
    cin >> x >> y >> p;
    long long res = 1;
    while (y--)
        res = (res * x) % p;
    cout << res << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}