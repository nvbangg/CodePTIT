#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    string a;
    cin >> a;
    int i = a.length() - 1;
    while (a[i] == '0' && i >= 0)
    {
        a[i] = '1';
        i--;
    }
    if (i >= 0)
        a[i] = '0';
    cout << a << endl;
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