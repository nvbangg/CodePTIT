#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int N = n * n;
    int a[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];
    sort(a, a + N);
    cout << a[k - 1] << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
}