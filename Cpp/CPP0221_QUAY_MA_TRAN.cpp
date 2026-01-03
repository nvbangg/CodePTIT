#include <bits/stdc++.h>
using namespace std;
int a[101][101];
void quay(int n, int m)
{
    int top = 0, left = 0;
    int bottom = n - 1, right = m - 1;
    int b[n][m];
    while (top < bottom && left < right)
    {
        // Di chuyển cạnh trên từ trái sang phải
        for (int i = left; i < right; i++)
            b[top][i + 1] = a[top][i];

        // Di chuyển cạnh phải từ trên xuống dưới
        for (int i = top; i < bottom; i++)
            b[i + 1][right] = a[i][right];

        // Di chuyển cạnh dưới từ phải sang trái
        for (int i = right; i > left; i--)
            b[bottom][i - 1] = a[bottom][i];

        // Di chuyển cạnh trái từ dưới lên trên
        for (int i = bottom; i > top; i--)
            b[i - 1][left] = a[i][left];

        // Di chuyển vào lớp bên trong
        top++;
        left++;
        bottom--;
        right--;
    }
    //trường hợp đặc biệt
    if (n==m && n%2==1)
    {
        int k = (n - 1) / 2;
        b[k][k] = a[k][k];
    }
    // Cập nhật ma trận a = ma trận b
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = b[i][j];
}

void TestCase()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    quay(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
        TestCase();
}
