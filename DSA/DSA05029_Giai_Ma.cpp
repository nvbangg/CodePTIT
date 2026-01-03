#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    int n = s.length();
    if (s[0] == '0')
    {
        cout << 0 << endl;
        return;
    }
    vector<long long> dp(n + 1, 0);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (s[i - 1] != '0')
            dp[i] += dp[i - 1];
        int two = stoi(s.substr(i - 2, 2));
        if (s[i - 2] != '0' && two >= 10 && two <= 26)
            dp[i] += dp[i - 2];
    }
    cout << dp[n] << endl;
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