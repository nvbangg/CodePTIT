#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        a[i] = i + 1;
    while (1)
    {
        for (auto x : a)
            cout << x;
        cout << " ";
        int i = n - 2, k = n - 1;
        while (a[i] > a[i + 1] && i >= 0)
            i--;
        if (i < 0)
            break;
        while (a[k] < a[i])
            k--;
        swap(a[i], a[k]);
        reverse(a + i + 1, a + n);
    }
    cout << "\n";
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