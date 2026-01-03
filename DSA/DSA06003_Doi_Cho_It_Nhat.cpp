#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n, res = 0;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        int idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[idx])
                idx = j;
        }
        if (idx != i)
        {
            res++;
            swap(a[i], a[idx]);
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