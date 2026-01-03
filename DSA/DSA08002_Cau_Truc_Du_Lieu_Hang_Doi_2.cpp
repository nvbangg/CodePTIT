#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    string s;
    int x;
    queue<int> q;
    while (n--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> x;
            q.push(x);
        }
        else if (s == "POP")
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            if (q.empty())
                cout << "NONE";
            else
                cout << q.front();
            cout << endl;
        }
    }
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