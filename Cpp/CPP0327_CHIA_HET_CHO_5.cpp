#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        res = res * 2 + (s[i] - '0');
        res %= 5;
    }
    return res == 0;
}
void TestCase()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
        TestCase();
    return 0;
}