#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void xau_nhiphan(int n, int k)
{
    string a(n, 'A');
    vector<string> res;
    while (1)
    {
        // Kiểm tra điều kiện
        if (a.find(string(k, 'A')) != -1)
            if (a.find(string(k + 1, 'A')) == -1)
                res.push_back(a);

        // Thuật toán
        int i = n - 1;
        while (a[i] == 'B' && i >= 0)
            a[i--] = 'A';
        if (i < 0)
            break;
        a[i] = 'B';
    }
    cout << res.size() << endl;
    for (auto x : res)
        cout << x << endl;
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
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}