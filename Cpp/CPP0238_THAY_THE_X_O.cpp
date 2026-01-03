#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[25][25];
void fill(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] != '-')
        return;
    a[i][j] = 'O';
    fill(i + 1, j);
    fill(i - 1, j);
    fill(i, j + 1);
    fill(i, j - 1);
}
void TestCase()
{
    cin >> n >> m;
    // Đọc ma trận và chuyển 'O' thành '-'
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'O')
                a[i][j] = '-';
        }
    // Kiểm tra viền trái và viền phải
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == '-')
            fill(i, 0);
        if (a[i][m - 1] == '-')
            fill(i, m - 1);
    }

    // Kiểm tra viền trên và viền dưới
    for (int j = 0; j < m; j++)
    {
        if (a[0][j] == '-')
            fill(0, j);
        if (a[n - 1][j] == '-')
            fill(n - 1, j);
    }

    // In ma trận kết quả
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << (a[i][j] == '-' ? 'X' : a[i][j]) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        TestCase();
}
