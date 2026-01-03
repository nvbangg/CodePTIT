#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> b = a;
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (a[i] == b[i])
        i++;
    while (a[j] == b[j] && j > i)
        j--;
    cout << i + 1 << " " << j + 1;
    cout << endl;
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
