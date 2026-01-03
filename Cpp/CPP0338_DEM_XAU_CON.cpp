#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    int k;
    cin >> s >> k;
    int res = 0;
    for (int i = 0; i < s.size(); ++i)  
    {
        bool mark[26] = {};
        int cnt = 0;
        for (int j = i; j < s.size(); ++j)
        {
            if (mark[s[j] - 'a'] == 0)
            {
                mark[s[j] - 'a'] = 1;
                cnt++;
            }
            if (cnt == k)
                res++;
            else if (cnt > k)
                break;
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