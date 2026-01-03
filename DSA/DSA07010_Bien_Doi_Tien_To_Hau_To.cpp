#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; --i)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string x = st.top();
            st.pop();
            string y = st.top();
            st.pop();
            string z = x + y + string(1, s[i]);
            st.push(z);
        }
        else
            st.push(string(1, s[i]));
    }
    cout << st.top();
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