#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n;
vector<int> a;
vector<bool> x;
vector<bool> res;
bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
void init()
{
}
bool check()
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (x[i])
            sum += a[i];
    }
    return prime(sum) ? 1 : 0;
}
void result()
{
    for (auto x : res)
        cout << x << " ";
    cout << endl;
}
int Try(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        x[i] = j;
        if (i == n - 1)
        {
            if (check())
                result();
        }
        else
            Try(i + 1);
    }
}
void testCase()
{
    cin >> n;
    a.resize(n);
    res.resize(n);
    for (auto &x : a)
        cin >> x;
    Try(0);
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