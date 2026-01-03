#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n];
    for (int &i : a)
    {
        cin >> i;
        sum += i;
    }
    sort(a, a + n);
    k = min(k, n - k);
    for (int i = 0; i < k; ++i)
    {
        sum -= 2 * a[i];
    }
    cout << sum << endl;
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