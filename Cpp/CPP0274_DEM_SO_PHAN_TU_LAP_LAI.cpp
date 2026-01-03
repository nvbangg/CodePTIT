#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    vector<int> v(1e6 + 1, 0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[a[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (v[a[i]] > 1)
            cnt++;
    cout << cnt << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}