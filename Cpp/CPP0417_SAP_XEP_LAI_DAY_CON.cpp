#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    int l = 0, r = n - 1;
    while (l < n && a[l] == b[l])
        ++l;
    while (r >= 0 && a[r] == b[r])
        --r;
    cout << l + 1 << " " << r + 1 << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}