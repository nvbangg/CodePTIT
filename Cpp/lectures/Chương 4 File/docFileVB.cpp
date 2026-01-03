//#include<stdlib.h>
#include<iostream>
#include<fstream>
using namespace std;

main(){
	char fileName[30];
	string s;
	cout << "Ten tep tin: ";
	cin >> fileName;
	cin.ignore();
	ifstream fileIn(fileName, ios::in);
	//fileIn.ignore();
	if(!fileIn){  
		cout << "Khong the mo duoc tep tin "<< fileName << endl;
		exit(1);
	}
	while (fileIn){//while (!fileIn.eof())
		getline(fileIn, s);
		cout<<s<<endl;
	}
	
	fileIn.close();

}
