#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    int res = 0;
    queue<string> q;
    q.push("1");
    while (!q.empty())
    {
        string z = q.front();
        q.pop();
        res++;

        string x = z + "0";
        if (x.length() > s.length() || (x.length() == s.length() && x > s))
            break;
        q.push(x);

        x = z + "1";
        if (x.length() > s.length() || (x.length() == s.length() && x > s))
            break;
        q.push(x);
    }
    cout << res + q.size();
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