#include <bits/stdc++.h>
using namespace std;
struct ThiSinh 
{
	string hoTen, ngaySinh;
	double diem1, diem2, diem3;	
	double tongDiem;
};
void nhap(ThiSinh &a)
{
	getline(cin, a.hoTen);
	cin >> a.ngaySinh;
	cin >> a.diem1 >> a.diem2 >> a.diem3;
	a.tongDiem = a.diem1 + a.diem2 + a.diem3;
}
void in(ThiSinh &a)
{
	cout << a.hoTen << " " << a.ngaySinh << " ";
	cout << fixed << setprecision(1) << a.tongDiem << endl;
}
int main(){
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
