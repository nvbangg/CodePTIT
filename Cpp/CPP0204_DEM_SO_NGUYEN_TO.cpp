#include <bits/stdc++.h>
using namespace std;
vector<bool> era(1e5 + 1, 1);
void sang()
{
    era[0] = era[1] = 0;
    for (int i = 2; i <= sqrt(1e5); i++)
        if (era[i])
            for (int j = i * i; j <= 1e5; j += i)
                era[j] = 0;
}
void TestCase()
{
    sang();
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l; i <= r; i++)
        if (era[i])
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