#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    stable_sort(a, a + n, [x](int a, int b)
         { return abs(a - x) < abs(b - x); });
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}