#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, m;
    cin >> n >> m;
    int sum = n*(n+1)/2;
    int b = (m + sum) / 2;
    int a = sum - b;
    if (b - a == m && __gcd(a, b) == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}