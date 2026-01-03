#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> f(30);

void prepare()
{
    f[1] = 1;
    for (int i = 2; i < 30; i++)
        f[i] = f[i - 1] * 2;
}

void testCase()
{
    int n, k;
    cin >> n >> k;
    for (int i = n; i >= 1; i--)
    {
        if (k > f[i])
            k -= f[i];
        else if (k == f[i])
        {
            cout << char(i - 1 + 'A') << endl;
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    prepare();
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}