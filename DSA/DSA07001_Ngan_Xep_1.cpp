#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string s;
    vector<int> a;
    while (cin >> s)
    {
        if (s == "push")
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        else if (s == "pop")
        {
            if (!a.empty())
                a.pop_back();
        }
        else if (s == "show")
        {
            if (a.empty())
                cout << "empty";
            else
                for (auto x : a)
                    cout << x << " ";
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