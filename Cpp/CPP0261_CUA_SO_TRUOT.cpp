#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    cin >> m;
    int b[m][m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];
    int heSo = n / m;
    for (int i = 0; i < n; i += m)
        for (int j = 0; j < n; j += m)
        {
            for (int k = i; k < i + m; ++k)
                for (int l = j; l < j + m; ++l)
                    a[k][l] *= b[k - i][l - j];
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}