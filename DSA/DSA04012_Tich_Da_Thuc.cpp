#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    vector<int> s(n + m - 1, 0);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            s[i + j] += a[i] * b[j];
    }
    for (auto i : s)
        cout << i << " ";
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