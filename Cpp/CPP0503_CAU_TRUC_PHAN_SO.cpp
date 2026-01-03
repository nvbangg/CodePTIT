#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct PhanSo
{
	ll tu, mau;
	string phanSo;
};
void nhap(PhanSo &a)
{
	cin >> a.tu >> a.mau;
}
void rutgon(PhanSo &a)
{
	ll uoc = __gcd(a.tu, a.mau);
	ll tu = a.tu / uoc, mau = a.mau / uoc;
	a.phanSo = to_string(tu) + "/" + to_string(mau);
}
void in(PhanSo &a)
{
	cout << a.phanSo;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
