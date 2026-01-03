#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    long long f[15], res = 0;
    f[0] = s[0] - '0';
    res = f[0];
    for (int i = 1; i < s.length(); ++i)
    {
        int t = s[i] - '0';
        f[i] = f[i - 1] * 10 + t * (i + 1);
        res = res + f[i];
    }
    cout << res;
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