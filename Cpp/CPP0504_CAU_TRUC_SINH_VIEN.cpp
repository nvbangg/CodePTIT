#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
	string MSV, name, lop, date;
	float GPA;	
};
void nhap(SinhVien &a)
{
	a.MSV = "B20DCCN001";
	getline(cin, a.name);
	cin >> a.lop >> a.date >> a.GPA;
	
	if (a.date[1] == '/') a.date.insert(0, "0");
	if (a.date[4] == '/') a.date.insert(3, "0");
}
void in(SinhVien &a)
{
	cout << a.MSV << ' ' << a.name << ' ' << a.lop << ' ' << a.date << ' ';
	cout << fixed << setprecision(2) << a.GPA;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
