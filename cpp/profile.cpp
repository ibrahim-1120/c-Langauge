#include<iostream>
using namespace std;

class student{
	public:
	string name;
	string contact;
	string email;
	string address;
	
	void getData(){
		cout<<"\n Enter the name";
		cin>>name;
		cout<<"\n Enter the contact";
		cin>>contact;
		cout<<"\n Enter the email";
		cin>>email;
		cout<<"\n Enter the address";
		cin>>address;	
	}
	
	void display(){
		cout<<"\n Name = "<<name;
		cout<<"\n Contact = "<<contact;
		cout<<"\n Email = "<<email;
		cout<<"\n Address = "<<address;
	}
};

main(){
	student stu[4];
	
	cout<<"\n Enter details of 4 student"<<stu;
	
	for(int i=0;i<4;i++){
		
		cout<<"\n Student"<<(i+1);
		stu[i].getData();
	}
	
	int choice;
	cout<<"\n Enter student number (1-4) to display";
	
	cin>>choice;
	
	if(choice>=1 &&choice<=4){
		cout<<"\n Details os sstudent"<<choice;
		
		stu[choice-1].display();
		
	}
	else{
		cout<<"\n Invalid";
	}
}
