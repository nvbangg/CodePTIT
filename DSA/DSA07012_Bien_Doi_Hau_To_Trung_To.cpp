#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    stack<string> st;
    for (int i = 0; i < s.length(); ++i)
    {
        string x = string(1, s[i]);
        if (x == "+" || x == "-" || x == "*" || x == "/")
        {
            string b = st.top();
            st.pop();
            string a = st.top();
            st.pop();
            string c = "(" + a + x + b + ")";
            st.push(c);
        }
        else
            st.push(x);
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