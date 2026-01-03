#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    long long ans = 0;
    while (pq.size() >= 2)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        ans += x + y;
        pq.push(x + y);
    }
    cout << ans << endl;
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