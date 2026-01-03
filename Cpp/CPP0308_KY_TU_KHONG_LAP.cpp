#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    getline(cin, s);
    int n = s.size();
    int mark[126] = {0};
    for (int i = 0; i < n; ++i)
        mark[s[i]]++;
    for (int i = 0; i < n; ++i)
    {
        if (mark[s[i]] == 1)
            cout << s[i];
    }
    cout << endl;
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