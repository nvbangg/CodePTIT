#include <iostream>
#include <math.h>
using namespace std;
class Point{
	private:	//thuộc tính
		int x;
		int y;
	public:	//phương thức
		void InIt(){
			cout<<"Nhap x = "; cin>>x;
			cout<<"Nhap y = "; cin>>y;
		};
		void Print();
		float KC(Point);
};

void Point::Print(){
	cout<<"Diem vua nhap co toa do ("<<x<< ","<< y <<")";
}
float Point::KC(Point p){
	float d;
	d=sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
	return d;
}
int main(){
	Point p1,p2;
	p1.InIt(); 	p1.Print();
	cout<<"\n";
	p2.InIt();	p2.Print();
	cout<<"\nKhoang cach p1 voi p2:"<<p1.KC(p2);
	cout<<"\n"<<p2.KC(p2);
	
	return 0;
}
