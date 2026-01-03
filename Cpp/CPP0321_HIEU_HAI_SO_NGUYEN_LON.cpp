#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    string a, b;
    cin >> a >> b;
    int len = max(a.length(), b.length());
    while (a.length() < len)
        a = "0" + a;
    while (b.length() < len)
        b = "0" + b;

    if (a < b)
        swap(a, b);

    string res(len, '0');
    int remember = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        int digit = (a[i] - '0') - (b[i] - '0') - remember;
        if (digit < 0)
        {
            remember = 1;
            digit += 10;
        }
        else
            remember = 0;
        res[i] = digit + '0';
    }
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