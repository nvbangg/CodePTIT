#include <bits/stdc++.h>
using namespace std;
int matrixRank(int a[15][15], int n, int m)
{
    int rank = m;
    for (int row = 0; row < rank; row++)
    {
        if (a[row][row])
        {
            for (int col = 0; col < n; col++)
            {
                if (col != row)
                {
                    double heso = (double)a[col][row] / a[row][row];
                    for (int i = 0; i < rank; i++)
                       a[col][i] -= heso * a[row][i];
                }
            }
        }
        else
        {
            // Tìm hàng không phải 0 và đổi chỗ
            bool found = false;
            for (int i = row + 1; i < n; i++)
            {
                if (a[i][row])
                {
                    swap(a[row], a[i]);
                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                rank--;
                for (int i = 0; i < n; i++)
                    a[i][row] = a[i][rank];
            }
            row--;
        }
    }
    return rank;
}
void TestCase()
{
    int n, m;
    cin >> n >> m;
    int a[15][15];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cout << matrixRank(a, n, m) << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}
