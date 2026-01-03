#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
        for (int j = i; j < s.size(); ++j)
            if (s[j] == s[i])
                res++;
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