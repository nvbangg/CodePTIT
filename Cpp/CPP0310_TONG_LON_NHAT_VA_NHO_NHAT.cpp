#include <bits/stdc++.h>
using namespace std;
long long chuyen(string s, int from, int to)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] == from)
            s[i] = to;
    return stoll(s);
}
void TestCase()
{
    string x1, x2;
    cin >> x1 >> x2;
    long long min = chuyen(x1, '6', '5') + chuyen(x2, '6', '5');
    long long max = chuyen(x1, '5', '6') + chuyen(x2, '5', '6');
    cout << min << ' ' << max << endl;
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
        TestCase();
    return 0;
}