#include<iostream>
using namespace std;

class A{
	public:
		int a;
		void geta(){	
		cout<<"\n Enter a ";
		cin>>a;
}
};

class B{
	public:
		int b;
		void getb(){
			cout<<"\n Enter b";
			cin>>b;
		}
};

class C: public A,public B{
	public:
		int c;
		void getc(){
			cout<<"\n Enter c";
			cin>>c;
		}
		
		void add(){
			cout<<"\n Addition = "<<a+b+c;
		}
};

main(){
 C c1;
    c1.geta();
    c1.getb();
    c1.getc();
    c1.add();
	
}
