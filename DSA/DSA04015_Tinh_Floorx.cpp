#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    int pos = upper_bound(a.begin(), a.end(), x) - a.begin();
    if (pos > 0)
        pos;
    else
        pos = -1;
    cout << pos;
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