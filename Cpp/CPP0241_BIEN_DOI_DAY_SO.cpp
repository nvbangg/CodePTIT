#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, r = n - 1, res = 0;
    while (l <= r)
    {
        if (a[l] == a[r])
            l++, r--;
        else if (a[l] < a[r])
        {
            a[l + 1] += a[l];
            l++;
            res++;
        }
        else
        {
            a[r - 1] += a[r];
            r--;
            res++;
        }
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}
