#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void testCase()
{
    int n, m, k, x;
    cin >> n >> m >> k;
    vector<int> a;
    for (int i = 0; i < n + m; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cout << a[k - 1] << endl;
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