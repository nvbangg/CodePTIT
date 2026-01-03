#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    getline(cin, s);
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ')')
            st.push(s[i]);
        else
        {
            bool ok = false;
            while (!st.empty())
            {
                char c = st.top();
                st.pop();
                if (c == '+' || c == '-' || c == '*' || c == '/')
                    ok = true;
                if (c == '(')
                    break;
            }
            if (!ok)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    cin.ignore();
    while (T--)
        testCase();
    return 0;
}