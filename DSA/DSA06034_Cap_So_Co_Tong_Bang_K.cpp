#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());

    long long res = 0;
    for (int i = 0; i < n; ++i)
    {
        int aj = k - a[i];
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] == aj)
                res++;
            else if (a[j] > aj)
                break;
        }
    }
    cout << res << endl;
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