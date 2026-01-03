#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
        sum = (sum + (s[i] - '0')) % 9;
    return (sum == 0);
}
void TestCase()
{
    string s;
    getline(cin, s);
    if (s == "0")
    {
        cout << "0\n";
        return;
    }
    if (check(s))
        cout << "1\n";
    else
        cout << "0\n";
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