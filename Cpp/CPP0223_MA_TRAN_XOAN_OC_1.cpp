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
    int up = 0, down = n - 1;
    int left = 0, right = m - 1;
    while (up <= down && left <= right)
    {
        for (int i = left; i <= right; i++)
            cout << a[up][i] << " ";
        up++;
        for (int i = up; i <= down; i++)
            cout << a[i][right] << " ";
        right--;
        if (up <= down)
        {    
            for (int i = right; i >= left; i--)
                cout << a[down][i] << " ";
            down--;
        }
        if (left <= right)
        {
            for (int i = down; i >= up; i--)
                cout << a[i][left] << " ";
            left++;
        }
    }
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}