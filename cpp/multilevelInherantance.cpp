#include<iostream>
using namespace std;

class person{
	public:
		char name[20];
		char email[20];
		int contact;
		
		void getPersonData(){
			cout<<"\n Enter person name, email & contact ";
			cin>>name>>email>>contact;
		}
};

class employee : public person{
	public:
		char empid[10];
		char joindate[10];
		
		void getEmployee(){
			cout<<"\n Enter the employee id and join date ";
			cin>>empid>>joindate;
			
		}	
		
};

class manager : public employee{
	public:
		char depid;
		char depname;
		
		void setManager(){
			getPersonData();
			getEmployee();
			
			cout<<"\n Enter department id & name";
			cin>>depid>>depname;
		}
		
		void showData(){
			cout<<"\n Name"<<name<<"\t Email"<<email;
			cout<<"\n Contact"<<contact;
			cout<<"\n ============= Employee==========";
			cout<<"\n Empid"<<empid<<"\t Joindate"<<joindate;
			cout<<"\n ============= Department==========";
			cout<<"\n Depid"<<depid<<"\t Deptname"<<depname;
		}
};

main(){
	
	manager m1;
	m1.setManager();
	m1.showData();
}


