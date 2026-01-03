#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - i - 1] || (s[i] - '0') % 2 != 0)
            return 0;
    return 1;
}
void TestCase()
{
    string s;
    getline(cin, s);
    if (check(s))
        cout << "YES\n";
    else
        cout << "NO\n";
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