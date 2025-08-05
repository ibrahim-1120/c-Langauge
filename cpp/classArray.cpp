#include<iostream>

using namespace std;


class student{
	public:
	int roll;
	char name[30];
	char email[40];
	
	
	void getStudentData(){
		cout<<"=====================\n Enter roll, name, email ============================= ";
		cin>>roll>>name>>email;
	}
	
	void displayData(){
		
		cout<<"\n \t Roll="<<roll;
		cout<<"\n \t Name="<<name;
		cout<<"\n \t email="<<email;
	}
};

main(){
	student s[3];
	
	for(int  i=0;i<3;i++){
		cout<<"\t Enter the student detail of  "<<i+1;
		s[i].getStudentData();
	}
	
	for(int i=0;i<3;i++){
		cout<<"\t Show student data of "<<i+1;
		s[i].displayData();
	}
}
