#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n;
vector<int> check, a;
void out()
{
    for (auto x : a)
        cout << char(x + '@');
    cout << " ";
}
void Try(int i)
{
    for (int j = 1; j <= n; ++j)
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if (i == n - 1)
                out();
            else
                Try(i + 1);
            check[j] = 0;
        }
    }
}
void testCase()
{
    string s;
    cin >> s;
    n = s.size();
    check.assign(n + 1, 0);
    a.resize(n);
    Try(0);
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