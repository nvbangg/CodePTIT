#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    int i = s.size() - 1;
    while (s[i] == '1' && i >= 0)
    {
        s[i] = '0';
        i--;
    }
    if (i >= 0)
        s[i] = '1';
    cout << s << endl;
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