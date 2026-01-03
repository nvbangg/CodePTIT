#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;

main(){
//	char fileName[30];
//	cout << "Ten tep tin: ";
//	cin >> fileName;

	ofstream fileOut;
	fileOut.open("A.txt",ios::app);
	if(!fileOut){  
		cout << "Khong the tao duoc tep tin "<< "A.txt" << endl; 
		exit(1);
	}
	int n;
	cout<<"Nhap so sinh vien:";
	cin>>n;cin.ignore();
	for(int i=1;i<=n;i++){
		string s;
		cout<<"Nhap ten SV thu "<<i<<":";	
		getline(cin, s);
		fileOut<< s;
		fileOut << endl; 
	}
	fileOut.close();
//	ifstream fi;
//	fi.open("A.txt");
//	while(!fi.eof()){
//		string s;
//		getline(fi,s);
//		cout<<s<<endl;
//	}
//	fi.close();


}
