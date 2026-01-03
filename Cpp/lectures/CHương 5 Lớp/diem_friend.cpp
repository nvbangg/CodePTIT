#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Point{
	private:	
		int x;
		int y;
	public:
		void InIt();
		void Print();
		friend float Khoangcach(Point,Point);
};

void Point::InIt(){
	cout<<"Nhap x = "; cin>>x;
	cout<<"Nhap y = "; cin>>y;
}
void Point::Print(){
	cout<<"Diem vua nhap co toa do ("<<x<< ","<< y <<")";
}
float Khoangcach(Point p1, Point p2){
	float dd;
	dd= sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	return dd;
	}
int main(){
	Point p1,p2;
	p1.InIt();
	p1.Print();
	cout<<"\n";
	p2.InIt();
	p2.Print();
	cout<<"\nKhoang cach giua hai diem:";
	cout<<setprecision(2)<<Khoangcach(p1,p2);
	return 0;
}
