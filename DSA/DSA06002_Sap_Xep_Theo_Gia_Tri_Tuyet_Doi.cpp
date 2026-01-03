#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    stable_sort(a.begin(), a.end(), [x](int u, int v)
                { return abs(u - x) < abs(v - x); });
    for (auto i : a)
        cout << i << " ";
    cout << endl;
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