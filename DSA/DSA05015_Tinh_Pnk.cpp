#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

long long P[1001][1001] = {};
long long M = 1e9 + 7;

void prepare()
{
    for (int i = 1; i <= 1000; ++i)
    {
        P[i][1] = i;
    }
    for (int i = 2; i <= 1000; ++i)
    {
        for (int j = 2; j <= i; ++j)
        {
            P[i][j] = i * P[i - 1][j - 1] % M;
        }
    }
}

void testCase()
{
    int n, k;
    cin >> n >> k;
    cout << P[n][k];
    cout << endl;
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