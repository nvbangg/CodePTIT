#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    string s;
    cin >> s;
    if (s[0] == '0')
    {
        cout << "INVALID\n";
        return;
    }
    bool mark[10] = {0};
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
            mark[s[i] - '0'] = 1;
        else
        {
            cout << "INVALID\n";
            return;
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        if (mark[i] == 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}