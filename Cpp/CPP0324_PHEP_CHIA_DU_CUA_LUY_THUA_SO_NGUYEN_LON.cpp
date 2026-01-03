#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Hàm tính phần dư của số lớn khi chia cho m
ll mod(const string &s, ll m)
{
    ll r = 0;
    for (int i = 0; i < s.size(); i++)
        r = (r * 10 + (s[i] - '0')) % m;
    return r;
}
// Hàm tính (a^b) % m bằng phương pháp bình phương và chia đôi
ll modPow(ll a, ll b, ll m)
{
    ll res = 1;
    a %= m;
    while (b > 0)
    {
        if (b % 2 == 1) // Nếu lũy thừa lẻ, nhân thêm a
            res = (res * a) % m;
        a = (a * a) % m; 
        b /= 2;          
    }
    return res;
}
void TestCase()
{
    string a;
    ll b, m;
    cin >> a >> b >> m;
    ll x = mod(a, m);                
    cout << modPow(x, b, m) << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
