#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int height[100] = {0};
        for (int j = 0; j < m; j++)
            for (int k = i; k < n; k++)
                height[j] += a[k][j];
        sort(height, height + m, greater<int>());
        for (int j = 0; j < m; j++)
            res = max(res, height[j] * (j + 1));
    }
    cout << res << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}