#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    vector<string> v;
    queue<string> q;
    q.push("");
    while (!q.empty())
    {
        string s = q.front();
        q.pop();
        if (s != "")
            v.push_back(s);

        if (s.length() == n)
            continue;
        q.push(s + "6");
        q.push(s + "8");
    }
    cout << v.size() << endl;
    for (string i : v)
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