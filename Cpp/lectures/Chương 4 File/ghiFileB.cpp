#include<stdlib.h>
#include<iostream>
#include<fstream>
using namespace std;
typedef struct {
	int day;
	int month;
	int year;
} Date;
typedef struct {
	char id[20];
	Date birthDay;
	char role[20];
	float salary;
} Employee;
main(){
	char fileName[30];
	cout << "Ten tep tin: ";
	cin >> fileName;
	int recordNumber;
	cout << "So luong ban ghi:	"; 
	cin >> recordNumber;
	fstream fileOut(fileName, ios::out|ios::binary);
	if(!fileOut){ 
		cout << "Khong the tao duoc tep	tin " << fileName << endl; 
		exit(1);
	}

	Employee myEmployee;
	for(int i=0; i<recordNumber; i++){
		cout << "Ban ghi thu " << i+1 << endl;
		cin.ignore();
		cout << "Id: ";
		cin>>myEmployee.id; 
		//fileOut<<myEmployee.id;
		cout << "Date of birth: ";
		cin >> myEmployee.birthDay.day;
		cout << "Month of birth: ";
		cin >> myEmployee.birthDay.month;
		cout << "Year of birth: ";
		cin >> myEmployee.birthDay.year;
		cout << "Role: ";
		cin >> myEmployee.role; 
		cout << "Salary: ";
		cin >> myEmployee.salary; 
		fileOut.write(reinterpret_cast<char *>(&myEmployee),sizeof(Employee));
	}
	fileOut.close(); 
}
