#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    string s;
    int k;
    cin >> s >> k;
    int mark[26] = {0};
    for (int i = 0; i < s.size(); ++i)
        mark[s[i] - 'a']++;
    int cnt = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (mark[i] == 0)
            cnt++;
    }
    if (cnt <= k && s.size() >= 26)
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