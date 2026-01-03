#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    int b[n], idx = 0;
    for (int i = 0; i < n; i += 2)
        b[i] = a[idx++];
    for (int i = 1; i < n; i += 2)
        b[i] = a[idx++];
    for (auto x : b)
        cout << x << " ";
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