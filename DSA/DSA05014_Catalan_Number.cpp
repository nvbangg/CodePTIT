#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    int a[20005] = {}, s[20005] = {}, len;
    cin >> n;
    for (int j = 1; j <= n; ++j)
    {
        int x = (n << 1) - j + 1, delta = 1;
        for (int i = 2; i * i <= x; ++i)
        {
            while (x % i == 0)
            {
                s[i] += delta;
                x /= i;
            }
        }
        if (x != 1)
            s[x] += delta;
    }
    int st = n + 1;
    for (int j = 1; j <= st; ++j)
    {
        int x = j, delta = -1;
        for (int i = 2; i * i <= x; ++i)
        {
            while (x % i == 0)
            {
                s[i] += delta;
                x /= i;
            }
        }
        if (x != 1)
            s[x] += delta;
    }
    a[0] = len = 1;
    for (int j = 1; j < 20005; ++j)
    {
        while (s[j]--)
        {
            int x = j;
            len += 5;
            for (int i = 0; i < len; ++i)
                a[i] *= x;
            for (int i = 0; i < len; ++i)
            {
                a[i + 1] += a[i] / 10;
                a[i] %= 10;
            }
            while (len > 0 && a[len - 1] == 0)
                --len;
        }
    }
    for (int i = len - 1; i >= 0; --i)
        cout << a[i];
    cout << endl;
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