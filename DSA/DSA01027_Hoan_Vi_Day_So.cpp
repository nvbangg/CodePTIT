#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void hoanvi(vector<int> &a)
{
    sort(a.begin(), a.end());
    do
    {
        for (int x : a)
            cout << x << " ";
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
}
void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    hoanvi(a);
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