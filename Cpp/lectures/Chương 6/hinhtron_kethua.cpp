#include <iostream>
using namespace std;

class Point{
	private:	
		 float x;
		 float y;
	public:
		Point(){
			x=0, y=0;
		}
		Point(float x1, float y1){
			x=x1; y=y1;
		}
		~Point( ){
			x=0; y=0;
		}
		void InIt();
		void Print();
};
void Point::InIt(){
	cout<<"Nhap x = "; cin>>x;
	cout<<"Nhap y = "; cin>>y;
}
void Point::Print(){
	cout<<"(x,y)= ("<<x<< ","<< y <<")";
}
class Circle: private Point{
	private:
		float r;
	public:
		Circle(){
			r=0.0;
		}
		Circle(float x1, float y1, float r1):Point(x1, y1){
			r=r1;
		}
		float getR(){
			return r;
		}
		void setR(float x){
			r=x;
		}
		void InIt_C(){
			float x;
			cout<<"Nhap tam hinh tron\n";
			InIt();
			cout<<"Nhap ban kinh:";
			cin>>r;
		}	
		void Print_C(){
			cout<<"\nHinh tron co tam:";
			Print();
			cout<<"\nHinh tron co ban kinh="<<getR();
		}
};

int main(){
	Circle c;
//	c.InIt_C();
	cout<<"In hinh tron C:\n";
	c.Print_C();
	
	Circle c1(2.5,2.5,8);
	cout<<"\nIn hinh tron C1:\n";
	c1.Print_C();
	return 0;
}
