#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, x, res;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)
    {
        int tmp;
        cin >> tmp;
        if (tmp == x)
            res = i;
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