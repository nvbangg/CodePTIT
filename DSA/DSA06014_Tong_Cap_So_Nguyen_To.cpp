#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<bool> era(1e6 + 1, 1);
void sang()
{
    era[0] = era[1] = 0;
    for (int i = 2; i <= 1e3; ++i)
    {
        if (era[i])
            for (int j = i * i; j <= 1e6; j += i)
                era[j] = 0;
    }
}
void testCase()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (era[i] && era[n - i])
        {
            cout << i << " " << n - i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    sang();
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}