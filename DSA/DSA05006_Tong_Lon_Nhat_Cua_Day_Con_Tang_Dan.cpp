#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n), f(n);
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        f[i] = a[i];
        for (int j = 0; j < i; ++j)
        {
            if (a[i] > a[j])
                f[i] = max(f[i], f[j] + a[i]);
        }
    }
    cout << *max_element(f.begin(), f.end());
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