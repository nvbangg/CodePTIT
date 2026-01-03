#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    int min = INT_MAX;
    string res;
    bool check = false;
    for (int i = 0; i <= n / 7; ++i)
    {
        int m = (n - 7 * i) / 4;
        if (m + i < min && 7 * i + 4 * m == n)
        {
            check = true;
            min = m + i;
            res = string(m, '4') + string(i, '7');
        }
    }
    check ? cout << res << endl : cout << -1 << endl;
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