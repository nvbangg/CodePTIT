#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int to_five(string s)
{
    int n = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '6')
            s[i] = '5';
        n = n * 10 + (s[i] - '0');
    }
    return n;
}

int to_six(string s)
{
    int n = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '5')
            s[i] = '6';
        n = n * 10 + (s[i] - '0');
    }
    return n;
}

void testCase()
{
    string a, b;
    cin >> a >> b;
    cout << to_five(a) + to_five(b) << " " << to_six(a) + to_six(b);
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