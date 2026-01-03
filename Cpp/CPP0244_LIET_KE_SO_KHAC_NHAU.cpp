#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1005] = {0}, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= 1000; i++)
        if (a[i] > 0)
            cout << i << " ";
}