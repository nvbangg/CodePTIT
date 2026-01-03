#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    getline(cin, s);
    int n = s.size();
    int res = 0, check = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
        {
            if(check == 0)
                res++;
            check = 1;
        }
        else
            check = 0;
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