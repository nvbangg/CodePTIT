#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    string s;
    cin >> s;
    int mark[26] = {0};
    for (int i = 0; i < s.size(); ++i)
        mark[s[i] - 'a']++;
    int check = mark[0];
    for (int i = 1; i < 26; ++i)
        check = max(check, mark[i]);
    if (check <= (s.size() + 1) / 2)
        cout << "1\n";
    else
        cout << "0\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}