#include<iostream>

using namespace std;


class student{
	public:
	int roll;
	char name[30];
	char email[40];
	
	
	void getStudentData(){
		cout<<"\n Enter roll, name, email ";
		cin>>roll>>name>>email;
	}
	
	void displayData(){
		
		cout<<"\n Roll="<<roll;
		cout<<"\n Name="<<name;
		cout<<"\n email="<<email;
	}
};

main(){
	student s1;
	s1.getStudentData();
	s1.displayData();

}


