#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, x;
vector<int> a, b;
vector<string> res;
void result(int i)
{
    string s = "{";
    for (int j = 0; j <= i; ++j)
        s += to_string(b[j]) + " ";
    s.pop_back();
    s += "}";
    res.push_back(s);
}

void Try(int i, int sum, int cur)
{
    for (int j = cur; j < n; ++j)
    {
        if (sum + a[j] <= x)
        {
            b[i] = a[i];
            sum += a[i];
            if (sum == x)
                result(i);
            else
                Try(i + 1, sum, j);
            sum += a[j];
        }
    }
}
void testCase()
{
    cin >> n;
    a.resize(n);
    b.resize(n);
    res.clear();
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    Try(0, 0, 0);
    if (res.size() == 0)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < res.size(); ++i)
            cout << res[i] << " ";
        cout << endl;
    }
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