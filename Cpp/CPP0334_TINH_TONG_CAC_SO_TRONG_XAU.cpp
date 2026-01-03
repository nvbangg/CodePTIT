#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int n = s.size(), res = 0, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            res += tmp;
            tmp = 0;
        }
        else
            tmp = tmp * 10 + s[i] - '0';
    }
    res += tmp;
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