#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
            st.pop();
        else if (s[i] == ']' && !st.empty() && s[st.top()] == '[')
            st.pop();
        else if (s[i] == '}' && !st.empty() && s[st.top()] == '{')
            st.pop();
        else
            st.push(i);
    }
    cout << (st.empty() ? "YES" : "NO");
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