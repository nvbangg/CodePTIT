#include <bits/stdc++.h>
using namespace std;
#define ll long long

class PhanSo
{
public:
    ll tu, mau;
    PhanSo(ll newTu, ll newMau)
    {
        tu = newTu;
        mau = newMau;
    }
    void rutgon()
    {
        ll uc = __gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }
    friend istream &operator>>(istream &in, PhanSo &p)
    {
        in >> p.tu >> p.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, const PhanSo &p)
    {
        out << p.tu << "/" << p.mau;
        return out;
    }
};

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}