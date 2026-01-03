#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void xau_nhiphan(int n, int k)
{
    vector<int> a(n, 0);
    while (1)
    {
        // Kiểm tra k bit 1
        int cnt = 0;
        for (auto x : a)
            if (x == 1)
                cnt++;
        if (cnt == k)
        {
            for (auto x : a)
                cout << x;
            cout << endl;
        }

        int i = n - 1;
        while (a[i] == 1 && i >= 0)
            a[i--] = 0;
        if (i < 0)
            break;
        a[i] = 1;
    }
}
void testCase()
{
    int n, k;
    cin >> n >> k;
    xau_nhiphan(n, k);
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