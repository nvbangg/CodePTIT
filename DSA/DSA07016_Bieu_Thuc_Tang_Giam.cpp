#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i <= s.length(); ++i)
    {
        st.push(i + 1);
        if (i == s.length() || s[i] == 'I')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
        }
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