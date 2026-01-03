#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s, sl;
    getline(cin, sl);
    stringstream ss(sl);
    stack<string> st;
    while (ss >> s)
    {
        st.push(s);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
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