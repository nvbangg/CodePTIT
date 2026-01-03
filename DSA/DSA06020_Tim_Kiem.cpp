#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, x;
    cin >> n >> x;
    vector<bool> mark(1e6 + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        mark[tmp] = 1;
    }
    if (mark[x])
        cout << 1 << endl;
    else
        cout << -1 << endl;
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