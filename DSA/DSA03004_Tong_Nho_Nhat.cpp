#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        x = x * 10 + a[i];
        i++;
        if (i != n)
            y = y * 10 + a[i];
    }
    cout << x + y;
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