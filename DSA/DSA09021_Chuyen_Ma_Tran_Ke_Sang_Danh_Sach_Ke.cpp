#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, x;
    cin >> n;
    vector<vector<int>> e(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> x;
            if (x == 1)
                e[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j : e[i])
            cout << j << " ";
        cout << endl;
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