#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct PhanSo
{
    ll tu, mau;
};
void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}
PhanSo tong(PhanSo p, PhanSo q)
{
    PhanSo t;
    ll uoc = __gcd(p.mau, q.mau);
    t.mau = p.mau * q.mau / uoc;
    t.tu = t.mau / p.mau * p.tu + t.mau / q.mau * q.tu;
    ll g = __gcd(t.tu, t.mau);
    t.tu /= g;
    t.mau /= g;
    return t;
}
void in(PhanSo p)
{
    cout << p.tu << "/" << p.mau;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}