#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n;
    cin >> n;
    int a1[n + 1], a2[n + 1];
    a1[0] = 0;
    a2[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a1[i];
        a1[i] += a1[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a2[i];
        a2[i] += a2[i - 1];
    }
    int res = n;
    while (res)
    {
        for (int i = 1; i <= n - res + 1; i++)
        {
            if (a1[i + res - 1] - a1[i - 1] == a2[i + res - 1] - a2[i - 1])
            {
                cout << res << endl;
                return;
            }
        }
        res--;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}