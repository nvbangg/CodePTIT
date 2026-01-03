#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    int res = INT_MAX;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int sum = a[i] + a[j];
            if (abs(sum) < abs(res))
                res = sum;
        }
    }
    cout << res << endl;
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