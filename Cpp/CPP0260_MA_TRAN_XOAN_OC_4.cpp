#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n * n];
    for (int i = 0; i < n * n; i++)
        cin >> a[i];
    sort(a, a + n * n);
    
    int b[n][n];
    int up = 0, down = n - 1, left = 0, right = n - 1;
    int k = 0;
    while (left <= right && up <= down)
    {
        for (int i = left; i <= right; ++i)
            b[up][i] = a[k++];
        up++;
        for (int i = up; i <= down; ++i)
            b[i][right] = a[k++];
        right--;
        if (up <= down)
       {
           for (int i = right; i >= left; --i)
               b[down][i] = a[k++];
           down--;
       }
       if (left <= right)
       {
           for (int i = down; i >= up; --i)
               b[i][left] = a[k++];
           left++;
       }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << b[i][j] << " ";
        cout << endl;
    }
    
}