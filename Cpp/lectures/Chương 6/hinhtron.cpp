#include <iostream>
using namespace std;
const float PI= 3.14;
class Circle;

class Point{
	private:	
		 float x;
		 float y;
	public:
		void InIt();
		void Print();
		Point(){
			x=0;y=0;
		}
		Point (int x1, int y1){
			this->x=x1;
			this->y=y1;
		}
};
void Point::InIt(){
	cout<<"Nhap x = "; cin>>x;
	cout<<"Nhap y = "; cin>>y;
}
void Point::Print(){
	cout<<"(x,y)= ("<<x<< ","<< y <<")";
}
class Circle{
	private:
		Point A;
		float r;
	public:
		Circle():A(){
			r=0.0;
		}
		Circle(float x1, float y1, float r1):A(x1, y1){
			r=r1;
		}
		void InIt(){
			cout<<"Nhap tam va ban kinh hinh tron"<<endl;
			A.InIt();
			cout<<"Nhap ban kinh:";
			cin>>r;
		}
		void Print(){
			cout << "\nHinh tron co tam: ";
			A.Print();
			cout << "\nCo ban kinh= " << r;
		}
		float P_Circle(){
			return(2*r*PI);
		}
		float S_Circle(){
			return(r*r*PI);
		}
};

int main(){
	Circle c;
	c.InIt();
	c.Print();
	cout<<"\nChu vi hinh tron:"<<c.P_Circle();
	cout<<"\nDien tich hinh tron:"<<c.S_Circle();
	return 0;
}
