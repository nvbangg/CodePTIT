#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, s, m;
    cin >> n >> s >> m;
    if (n < m || 6 * (n - m) < m)
        cout << -1;
    else
        cout << ceil((float)m * s / n);
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