#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void testCase()
{
    int n, sum = 0, res = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum = max(a[i], sum + a[i]);
        res = max(res, sum);
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