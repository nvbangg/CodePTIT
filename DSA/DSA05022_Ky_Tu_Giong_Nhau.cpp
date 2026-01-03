#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, in, de, co;
    cin >> n >> in >> de >> co;

    int f[101] = {};
    f[1] = in;
    for (int i = 2; i <= n; ++i)
    {
        if (i % 2 == 1)
            f[i] = min({f[i - 1] + in, f[(i - 1) / 2] + co + in, f[(i + 1) / 2] + co + de});
        else
            f[i] = min(f[i - 1] + in, f[i / 2] + co);
    }
    cout << f[n];
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
