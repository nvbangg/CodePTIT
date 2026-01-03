#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n;
bool a[50][50];
bool b[100];
vector<string> v;

void Try(int i, int j)
{
    if (i == n && j == n)
    {
        string s;
        for (int k = 0; k < 2 * n - 2; ++k)
            s += (b[k] ? 'D' : 'R');
        v.push_back(s);
        return;
    }
    if (a[i + 1][j])
    {
        b[i + j - 2] = true;
        Try(i + 1, j);
    }
    if (a[i][j + 1])
    {
        b[i + j - 2] = false;
        Try(i, j + 1);
    }
}

void testCase()
{
    cin >> n;
    v.clear();
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    if (a[1][1] == 0 || a[n][n] == 0)
    {
        cout << -1 << endl;
        return;
    }
    Try(1, 1);

    if (v.empty())
        cout << -1 << endl;
    else
    {
        sort(v.begin(), v.end());
        for (const string &s : v)
            cout << s << " ";
        cout << endl;
    }
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