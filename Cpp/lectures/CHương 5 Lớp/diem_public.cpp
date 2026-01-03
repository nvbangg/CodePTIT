#include <iostream>
#include <math.h>
using namespace std;
class Point{
	public:	
		int x,y;
	public:
		void InIt(){
			cout<<"Nhap x = "; cin>>x;
			cout<<"Nhap y = "; cin>>y;
		};
		void Print();
};
void Point::Print(){
	cout<<"Diem vua nhap co toa do ("<<x<< ","<< y <<")"<<"\n";
}
int main(){
	Point p1,p2;
	p1.InIt(); 	p1.Print();
	p2.InIt();	p2.Print();
	float d;
	d=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	cout<<d;
	return 0;
}
