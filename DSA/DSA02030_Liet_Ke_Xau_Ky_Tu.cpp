#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

char c;
int k;
string s;

void Try(char i)
{
    for (char j = i; j <= c; ++j)
    {
        s.push_back(j);
        if (s.length() == k)
            cout << s << endl;
        else
            Try(j);
        s.pop_back();
    }
}

void testCase()
{
    cin >> c >> k;
    Try('A');
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}