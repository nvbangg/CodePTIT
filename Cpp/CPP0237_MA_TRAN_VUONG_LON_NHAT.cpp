//tìm ma trận vuông lớn nhất viền chỉ chứa 'X' không chứa 'O'
#include <bits/stdc++.h>
using namespace std;
char a[25][25];
bool checkSquare(int x, int y, int k)
{
    //kiểm tra 4 cạnh của hình vuông
    for (int i = 0; i < k; i++)
        if (a[x + i][y] == 'O' || a[x + i][y + k - 1] == 'O' || a[x][y + i] == 'O' || a[x + k - 1][y + i] == 'O')
            return false;
    return true;
}
void TestCase()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int k = n; k >= 1; k--)
    {
        bool found = false;
        for (int i = 0; i <= n - k && !found; i++)
            for (int j = 0; j <= n - k && !found; j++)
                if (checkSquare(i, j, k))
                {
                    cout << k << endl;
                    found = true;
                }
        if (found)
            break;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}
