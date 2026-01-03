#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int dd[127] = {};
    for (char i : s)
        dd[i]++;
    priority_queue<int> q;
    for (int i : dd)
    {
        if (i > 0)
            q.push(i);
    }
    while (k--)
    {
        if (q.empty())
            break;
        int x = q.top();
        q.pop();
        x--;
        q.push(x);
    }
    long long ans = 0;
    while (!q.empty())
    {
        long long x = q.top();
        q.pop();
        ans += x * x;
    }
    cout << ans;
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