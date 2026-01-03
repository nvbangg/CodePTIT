#include <bits/stdc++.h>
using namespace std;
bool check1(string s)
{
    for (int i = 1; i < 5; ++i)
        if (s[i] <= s[i - 1])
            return 0;
    return 1;
}
bool check2(string s)
{
    for (int i = 1; i < 5; ++i)
        if (s[i] != s[i - 1])
            return 0;
    return 1;
}

bool check3(string s)
{
    return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

bool check4(string s)
{
    for (int i = 0; i < 5; ++i)
        if (s[i] != '6' && s[i] != '8')
            return 0;
    return 1;
}
void TestCase()
{
    string a, s;
    cin >> a;
    for (char c : a)
        if (isdigit(c))
            s += c;
    s = s.substr(s.size() - 5);
    if (check1(s) || check2(s) || check3(s) || check4(s))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}