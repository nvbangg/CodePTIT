#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct Data
{
    int r, c;
    int cou;

    Data(int r, int c, int cou)
    {
        this->r = r;
        this->c = c;
        this->cou = cou;
    }
};

void testCase()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<bool>> vs(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    queue<Data> q;
    q.push(Data(0, 0, 0));
    vs[0][0] = true;

    while (!q.empty())
    {
        Data x = q.front();
        q.pop();

        int i = x.r, j = x.c;
        if (i == n - 1 && j == m - 1)
        {
            cout << x.cou << endl;
            return;
        }

        if (i + a[i][j] < n && vs[i + a[i][j]][j] == false)
        {
            vs[i + a[i][j]][j] = true;
            q.push(Data(i + a[i][j], j, x.cou + 1));
        }
        if (j + a[i][j] < m && vs[i][j + a[i][j]] == false)
        {
            vs[i][j + a[i][j]] = true;
            q.push(Data(i, j + a[i][j], x.cou + 1));
        }
    }
    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}
