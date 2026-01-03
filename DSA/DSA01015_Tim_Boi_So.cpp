#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void xau_nhiphan(int n)
{
    string a(18, '0');
    a[17] = '9';
    while (1)
    {
        long long res = stoll(a);
        if (res % n == 0)
        {
            cout << res << endl;
            break;
        }
        int i = 17;
        while (a[i] == '9' && i >= 0)
            a[i--] = '0';
        if (i < 0)
            break;
        a[i] = '9';
    }
}
void testCase()
{
    int n;
    cin >> n;
    xau_nhiphan(n);
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