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
	fstream fileIn(fileName, ios::in|ios::binary);
	if(!fileIn){ 
		cout << "Khong the mo duoc tep	tin " << fileName << endl; 
		exit(1);
	}

	Employee myEmployee;
	for (int i=1; i<=recordNumber;i++)
	{
		fileIn.read(reinterpret_cast<char *>(&myEmployee),sizeof(Employee)); 
		cout 	<< myEmployee.id << " "
				<< myEmployee.birthDay.day << "/"
				<< myEmployee.birthDay.month << "/"
				<< myEmployee.birthDay.year << " "
				<< myEmployee.role << " "
				<< myEmployee.salary << endl; 
	}
	fileIn.close(); 
}
