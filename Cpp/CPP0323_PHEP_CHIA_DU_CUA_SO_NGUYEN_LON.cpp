#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    string n;
    long long m;
    cin >> n >> m;
    long long res = 0;
    for (int i = 0; i < n.size(); ++i)
        res = (res * 10 + (n[i] - '0')) % m;
    cout << res << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}