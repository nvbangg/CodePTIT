#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cout << a[n - 1] << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}