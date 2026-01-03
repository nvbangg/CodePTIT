#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
            if (binary_search(a.begin() + j + 1, a.end(), k - a[i] - a[j]))
            {
                cout << "YES" << endl;
                return;
            }
    }
    cout << "NO" << endl;
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