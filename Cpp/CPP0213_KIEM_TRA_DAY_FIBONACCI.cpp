#include <bits/stdc++.h>
using namespace std;
vector<bool> check(1001, 0);
void fibo()
{
    check[0] = check[1] = 1;
    int f1 = 0, f2 = 1;
    for (int i = 2; f1 + f2 <= 1000; i++)
    {
        int f = f1 + f2;
        check[f] = 1;
        f1 = f2;
        f2 = f;
    }
}
void TestCase()
{
    fibo();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (check[a[i]])
            cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    fibo();
    int T;
    cin >> T;
    while (T--)
        TestCase();
}