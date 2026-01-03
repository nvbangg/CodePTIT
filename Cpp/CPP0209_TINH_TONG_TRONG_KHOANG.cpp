#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(q, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l, r;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        for (int j = l - 1; j < r; j++)
            b[i] += a[j];
    }
    for (int i = 0; i < q; i++)
        cout << b[i] << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}