#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < k; ++i)
        cout << a[i] << " ";
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