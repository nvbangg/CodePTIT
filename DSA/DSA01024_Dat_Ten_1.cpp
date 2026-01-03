#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, k;
vector<int> a;
vector<string> v;
void out()
{
    for (int i = 1; i <= k; ++i)
        cout << v[a[i] - 1] << " ";
    cout << endl;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            out();
        else
            Try(i + 1);
    }
}
void testCase()
{
    cin >> n >> k;
    string s;
    map<string, bool> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        mp[s] = 1;
    }
    for (auto x : mp)
        if (x.second)
            v.push_back(x.first);
    a.resize(k + 1);
    a[0] = 0;
    n = v.size();
    Try(1);
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