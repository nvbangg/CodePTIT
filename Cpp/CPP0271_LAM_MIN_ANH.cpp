#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, m, l;
    cin >> n >> m >> l;
    int x[n+1][m+1] = {0};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> x[i][j];
            x[i][j] += x[i - 1][j] + x[i][j - 1] - x[i - 1][j - 1];
        }
    for (int i = 1; i <= n - l + 1; ++i)
    {
        for (int j = 1; j <= m - l + 1; ++j)
        {
            int sum = x[i + l - 1][j + l - 1] - x[i - 1][j + l - 1] - x[i + l - 1][j - 1] + x[i - 1][j - 1];
            cout << sum / (l * l) << " ";
        }
        cout << endl;
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