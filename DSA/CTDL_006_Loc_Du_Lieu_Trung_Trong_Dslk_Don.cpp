#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    map<int, bool> mp;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    for (auto x : a)
    {
        if (mp[x] == 0)
        {
            cout << x << " ";
            mp[x] = 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}