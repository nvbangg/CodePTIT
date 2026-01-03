#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int kc = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (a[j] - a[i] > kc)
                kc = a[j] - a[i];
    }
    if (kc >= 0 )
        cout << kc << endl;
    else
        cout << -1 << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}