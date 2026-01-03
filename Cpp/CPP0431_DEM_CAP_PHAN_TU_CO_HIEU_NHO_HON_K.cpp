#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        int j = i + 1;
        while (j < n && a[j] - a[i] < k)
            ++j;
        res += j - i - 1;
    }
        cout << res << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}