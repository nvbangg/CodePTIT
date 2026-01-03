#include <bits/stdc++.h>
using namespace std;
long long solve(string s, int k)
{
    long long res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        int n = 0;
        for (int j = i; j < s.size(); ++j)
        {
            n = n * 10 + (s[j] - '0');
            n %= k;
            if (n == 0)
                res++;
        }
    }
    return res;
}
void TestCase()
{
    string s;
    cin >> s;
    cout << solve(s, 8) - solve(s, 24) << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}