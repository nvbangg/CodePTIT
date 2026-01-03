#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int l = *min_element(a, a + n);
    int r = *max_element(a, a + n);
    int mark[r+1] = {};
    for (int i = 0; i < n; ++i)
        mark[a[i]] = 1;
    int cnt = 0;
    for (int i = l; i <= r; ++i)
        if (!mark[i])
            cnt++;
    cout << cnt << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}