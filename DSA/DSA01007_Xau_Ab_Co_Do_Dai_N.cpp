#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void xau_nhiphan(int n)
{
    vector<char> a(n, 'A');
    while (1)
    {
        for (auto x : a)
            cout << x;
        cout << " ";
        int i = n - 1;
        while (a[i] == 'B' && i >= 0)
            a[i--] = 'A';
        if (i < 0)
            break;
        a[i] = 'B';
    }
}
void testCase()
{
    int n;
    cin >> n;
    xau_nhiphan(n);
    cout << "\n";
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