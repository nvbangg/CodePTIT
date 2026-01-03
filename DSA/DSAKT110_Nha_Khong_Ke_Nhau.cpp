#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n), f(n);
    for (int &i : a)
        cin >> i;
    f[0] = a[0];
    f[1] = max(a[0], a[1]);
    for (int i = 2; i < n; ++i)
    {
        f[i] = max(f[i - 2] + a[i], f[i - 1]);
    }
    cout << f[n - 1];
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