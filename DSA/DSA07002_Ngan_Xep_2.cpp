#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, x;
    cin >> n;
    string s;
    stack<int> st;
    while (n--)
    {
        cin >> s;
        if (s == "PUSH")
        {
            cin >> x;
            st.push(x);
        }
        else if (s == "POP")
        {
            if (!st.empty())
                st.pop();
        }
        else if (s == "PRINT")
        {
            if (st.empty())
                cout << "NONE";
            else
                cout << st.top();
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