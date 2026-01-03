#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
        int n;
        cin >> n;
        int a[n];
        for (auto &x : a)
            cin >> x;
        prev_permutation(a, a + n);
        for (auto x : a)
            cout << x << ' ';
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