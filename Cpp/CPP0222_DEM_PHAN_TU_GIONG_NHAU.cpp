#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n;
    cin >> n;
    int a[n][n];
    int mark[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        int check[100001] = {0};
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (check[a[i][j]] == 0)
                mark[a[i][j]]++;
            check[a[i][j]] = 1;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 100001; i++)
    {
        if (mark[i] == n)
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}