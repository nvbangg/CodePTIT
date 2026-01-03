#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int ans = -1;
    for (int i = 0; i < n - 1; ++i)
    {
        int x;
        cin >> x;
        if (x != a[i] && ans == -1)
        {
            ans = i + 1;
        }
    }
    cout << ans;
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