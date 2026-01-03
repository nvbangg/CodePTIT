#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int calculate(int x, int y, char o)
{
    switch (o)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}

void testCase()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; --i)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            int z = calculate(x, y, s[i]);
            st.push(z);
        }
        else
            st.push(s[i] - '0');
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