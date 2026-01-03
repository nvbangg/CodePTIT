#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    vector<int> res;
    int up = 0, down = n - 1, left = 0, right = m - 1;
    while (up <= down && left <= right)
    {
        for (int i = left; i <= right; i++)
            res.push_back(a[up][i]);
        up++;
        for (int i = up; i <= down; i++)
            res.push_back(a[i][right]);
        right--;
        if (up <= down)
        {
            for (int i = right; i >= left; i--)
                res.push_back(a[down][i]);
            down--;
        }
        if (left <= right)
        {
            for (int i = down; i >= up; i--)
                res.push_back(a[i][left]);
            left++;
        }
    }
    cout << res[k - 1] << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}