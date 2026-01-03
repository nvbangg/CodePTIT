#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n][n], row[n] = {0}, col[n] = {0}, max = 0;
    bool flag; // Biến cờ để xác định hàng hay cột có tổng lớn nhất (0: hàng, 1: cột)

    // Tính tổng từng hàng và tìm hàng có tổng lớn nhất
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            row[i] += a[i][j];
        }
        if (row[i] > max)
        {
            max = row[i];
            flag = 0; 
        }
    }

    // Tính tổng từng cột và tìm cột có tổng lớn nhất
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            col[j] += a[i][j];
        }
        if (col[j] > max)
        {
            max = col[j];
            flag = 1;
        }
    }

    int res = 0; 
    if (!flag)
    {
        for (int j = 0; j < n; ++j)
            res += max - col[j];
    }
    else
    {
        for (int i = 0; i < n; ++i)
            res += max - row[i];
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
