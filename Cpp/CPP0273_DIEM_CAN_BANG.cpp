#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n+1], b[n+1];
    b[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = a[i] + b[i-1];
    }
    for (int i = 1; i <= n; ++i)
    {
        if (b[i-1] == b[n] - b[i])
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}