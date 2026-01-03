#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    int dd[127] = {};
    int maxx = 0;
    for (char i : s)
    {
        dd[i]++;
        maxx = max(maxx, dd[i]);
    }
    if (maxx <= (s.length() + 1) / 2)
        cout << 1;
    else
        cout << -1;
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}