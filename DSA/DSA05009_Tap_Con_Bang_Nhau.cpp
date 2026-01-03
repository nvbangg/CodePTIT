#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, sum;
vector<int> a;
bool check;

void Try(int i, int s)
{
    if (i == n || check || s == sum / 2)
    {
        if (s == sum / 2)
            check = true;
        return;
    }
    if (s + a[i] <= sum / 2)
        Try(i + 1, s + a[i]);
    Try(i + 1, s);
}

void testCase()
{
    cin >> n;
    sum = 0;
    check = false;
    a.resize(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
        Try(0, 0);
    cout << (check ? "YES" : "NO") << endl;
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