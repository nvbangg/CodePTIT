// DSA02036
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n;
vector<int> a, b;
set<vector<int>> res;

void Try(int i, int sum)
{
    for (int j = i; j < n; ++j)
    {
        b.push_back(a[j]);
        sum += a[j];
        if (sum % 2 == 1)
            res.insert(b);
        if (j + 1 < n)
            Try(j + 1, sum);
        b.pop_back();
        sum -= a[j];
    }
}

void testCase()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    b.clear();
    res.clear();
    Try(0, 0);

    for (auto x : res)
    {
        for (auto num : x)
            cout << num << " ";
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