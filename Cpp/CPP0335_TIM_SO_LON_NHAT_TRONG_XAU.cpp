#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            int j = i + 1;
            while (s[j] >= '0' && s[j] <= '9')
                j++;
            string a = s.substr(i, j - i);
            res = max(res, stoi(a));
            i = j;
        }
    }
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