#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

long long f[10001];

void prepare()
{
    int i2 = 1, i3 = 1, i5 = 1;
    f[1] = 1;
    for (int i = 2; i <= 1e4; ++i)
    {
        f[i] = min({f[i2] * 2, f[i3] * 3, f[i5] * 5});
        if (f[i] == f[i2] * 2)
            i2++;
        if (f[i] == f[i3] * 3)
            i3++;
        if (f[i] == f[i5] * 5)
            i5++;
    }
}

void testCase()
{
    int n;
    cin >> n;
    cout << f[n];
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    prepare();
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}