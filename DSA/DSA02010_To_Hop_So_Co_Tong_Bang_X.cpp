#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, x;
vector<int> a;
bool check;

void Try(int min, int sum, vector<int> res)
{
    if (sum == x)
    {
        check = 1;
        cout << "[";
        for (int i = 0; i < res.size(); ++i)
        {
            cout << res[i];
            if (i != res.size() - 1)
                cout << " ";
        }
        cout << "]";
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= min && sum + a[i] <= x)
        {
            res.push_back(a[i]);
            Try(a[i], sum + a[i], res);
            res.pop_back();
        }
    }
}

void testCase()
{
    cin >> n >> x;
    a.resize(n);
    check = 0;
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    Try(1, 0, {});
    if (!check)
        cout << -1;
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