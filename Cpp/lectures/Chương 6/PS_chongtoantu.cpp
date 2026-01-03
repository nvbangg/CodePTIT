#include <iostream>
using namespace std;
class PhanSo{
	private:	
		int tu;
		int mau;
	public:
		PhanSo(){
			tu=1, mau=1;
		}
		friend istream &operator>>(istream &is, PhanSo &P);
		friend ostream &operator<<(ostream &os, PhanSo P);
		PhanSo operator + (PhanSo P);
};
istream & operator >> (istream &is, PhanSo &P){
	cout<<"Tu so="; 
	is>>P.tu;
	cout<<"Mau so="; 
	is>>P.mau;
	return is;
}
ostream &operator<<(ostream &os, PhanSo P){
	os<<P.tu<<"/"<<P.mau;
	return os;
}
PhanSo PhanSo:: operator +(PhanSo P){
	PhanSo k;
	k.tu=tu*P.mau+mau*P.tu;
	k.mau=mau*P.mau;
	return k;
}

int main(){
	PhanSo A,B,C;
	cout<<"Nhap phan so A:\n";
	cin>>A;
	cout<<"Nhap phan so B:\n";
	cin>>B;
	C=A+B;
	cout<<"Tong hai phan so:"<<C;
	return 0;
}
