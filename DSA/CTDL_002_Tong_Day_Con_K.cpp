#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, k, cnt;
vector<int> a, b;
void solve()
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += a[i] * b[i];
    if (sum == k)
    {
        cnt++;
        for (int i = 0; i < n; ++i)
            if (b[i])
                cout << a[i] << " ";
        cout << endl;
    }
}
void Try(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        b[i] = j;
        if (i == n - 1)
            solve();
        else
            Try(i + 1);
    }
}
void testCase()
{
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (auto &i : a)
        cin >> i;
    Try(0);
    cout << cnt;
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