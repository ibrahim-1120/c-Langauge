#include<iostream>
using namespace std;

class catageory{
	public:
		char catid[20];
		char catname[20];
		
		void getCatData(){
			cout<<"\n Enter catageory id and name ";
			cin>>catid>>catname;
		}
};

class product : public catageory{
	public:
		int pid;
		char proname;
		float proprice;
		
		void getProduct(){
			cout<<"\n Enter the product id, name & price ";
			cin>>pid>>proname>>proprice;
			
			
		}	
		void showData(){
			cout<<"\n pid="<<pid;
			cout<<"\n proname="<<proname;
			cout<<"\n proprice="<<proprice;
			cout<<"\n catid="<<catid;
			cout<<"\n catname="<<catname;
		}
};

main(){
	product p1;
	p1.getCatData();
	p1.getProduct();
	p1.showData();
	
	
}

