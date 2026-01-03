#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool> era(1e7 + 1, 1);
vector<ll> prime; // lưu số nguyên tố
void sang()
{
    era[0] = era[1] = 0;
    ll lim = sqrt(1e7);
    for (ll i = 2; i <= lim; i++)
    {
        if (era[i])
        {
            prime.push_back(i);
            for (ll j = i * i; j <= 1e7; j += i)
                era[j] = 0;
        }
    }
    for (ll i = lim + 1; i <= 1e7; i++)
    {
        if (era[i])
            prime.push_back(i);
    }
}
// Phân tích thừa số nguyên tố
vector<pair<ll, ll>> thua_so(ll n)
{
    vector<pair<ll, ll>> res;
    for (ll i : prime)
    {
        if (i > sqrt(n))
            break;
        ll cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt > 0)
            res.push_back({i, cnt});
    }
    if (n > 1)
        res.push_back({n, 1}); 
    return res;
}
void TestCase()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> res = thua_so(n);
    for (auto x : res)
        cout << x.first << " " << x.second << endl;
    cout << endl;
}
int main()
{
    sang();
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}