#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans = 0;
void solve(string s)
{
    try
    {
        ll num = stoll(s); 
        if (num >= INT_MIN && num <= INT_MAX)
            ans += num;
    }
    catch (...) {}
}

int main()
{
    ifstream infile("DATA.in");
    string s;
    while (infile >> s)
        solve(s);
    cout << ans;
    return 0;
}