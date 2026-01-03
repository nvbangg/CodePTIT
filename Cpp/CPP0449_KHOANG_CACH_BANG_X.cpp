#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    //a[j] - a[i] = x <=> a[j] = a[i] + x
    for (int i = 0; i < n; ++i)
    {
        if (a[i] + x > a[n - 1])
            break;
        if (binary_search(a, a + n, a[i] + x))
        {
            cout << "1\n";
            return;
        }
    }
    cout << "-1\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}