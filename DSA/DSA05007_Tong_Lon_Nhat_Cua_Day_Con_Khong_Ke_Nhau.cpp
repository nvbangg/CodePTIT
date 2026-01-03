#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    long long a[n + 1], f[n + 1] = {};
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (i == 1)
            f[i] = a[i];
        if (i >= 2)
            f[i] = max(f[i - 1], f[i - 2] + a[i]);
    }
    cout << *max_element(f + 1, f + 1 + n);
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