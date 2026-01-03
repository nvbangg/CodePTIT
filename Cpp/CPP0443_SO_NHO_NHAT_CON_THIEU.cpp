#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n - 1];
    vector<bool> mark(n + 1, 0);
    for (auto &x : a)
    {
        cin >> x;
        mark[x] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!mark[i])
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}