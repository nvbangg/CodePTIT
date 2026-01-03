#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    stack<char> st;
    int open = 0, close = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            open++;
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && st.top() == '(')
            {
                open--;
                st.pop();
            }
            else
            {
                close++;
                st.push(s[i]);
            }
        }
    }
    int ans = open / 2 + close / 2;
    ans += open % 2 + close % 2;
    cout << ans;
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