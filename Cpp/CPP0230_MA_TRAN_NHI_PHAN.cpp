#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n][3];
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int mark[2]={0};
        for (int j = 0; j < 3; ++j)
        {
            cin >> a[i][j];
            mark[a[i][j]]++;
        }
        if (mark[1] >= 2)
            cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    TestCase();
    return 0;
}