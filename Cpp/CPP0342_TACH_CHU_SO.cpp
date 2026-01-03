#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    vector<char> v;
    int res = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (isalpha(s[i]))
            v.push_back(s[i]);
        else
            res += s[i] - '0';
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x;
    cout << res << endl;
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