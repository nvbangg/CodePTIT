#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n), r(n);
    for (int &i : a)
        cin >> i;
    stack<int> st;
    for (int i = n - 1; i >= 0; --i)
    {
        while (!st.empty() && st.top() <= a[i])
        {
            st.pop();
        }
        if (st.empty())
            r[i] = -1;
        else
            r[i] = st.top();
        st.push(a[i]);
    }
    for (int i : r)
        cout << i << " ";
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