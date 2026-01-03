#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    queue<string> q;
    q.push("1");
    while (n--)
    {
        string s = q.front();
        q.pop();
        cout << s << " ";

        q.push(s + "0");
        q.push(s + "1");
    }
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