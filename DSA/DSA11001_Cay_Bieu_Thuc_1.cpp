#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isSign(char c)
{
    return (c == '+' or c == '-' or c == '*' or c == '/');
}

void testCase()
{
    string s;
    cin >> s;
    stack<string> st;
    for (char i : s)
    {
        string z = "";
        if (isSign(i))
        {
            string y = st.top();
            st.pop();
            string x = st.top();
            st.pop();
            z = x + i + y;
        }
        else
        {
            z += i;
        }
        st.push(z);
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