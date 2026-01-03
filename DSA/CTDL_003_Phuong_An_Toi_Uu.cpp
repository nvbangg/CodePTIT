#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int n, b, f;
vector<int> w(101), c(101), fopt(101), x(101);
void save(int curCost)
{
    f = curCost;
    for (int i = 1; i <= n; i++)
        fopt[i] = x[i];
}
void Try(int i, int cost, int weight)
{
    for (int j = 0; j <= 1; j++)
    {
        if (weight + j * w[i] > b)
            continue;
        x[i] = j;
        if (i == n && cost + j * c[i] > f)
            save(cost + j * c[i]);
        if (i < n)
            Try(i + 1, cost + j * c[i], weight + j * w[i]);
    }
}
void testCase()
{
    cin >> n >> b;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    f = INT_MIN;
    Try(1, 0, 0);
    cout << f << endl;
    for (int i = 1; i <= n; i++)
        cout << fopt[i] << " ";
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}