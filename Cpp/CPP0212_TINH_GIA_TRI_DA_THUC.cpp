#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e9 + 7;
void TestCase()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = n - 1; i >= 0; i--)
        cin >> a[i];
    long long k = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ((a[i] * k) % MAX);
        sum %= MAX;
        k = (k*x)%MAX;
    }
    cout << sum << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}