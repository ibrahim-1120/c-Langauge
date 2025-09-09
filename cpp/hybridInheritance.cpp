#include<iostream>

using namespace std;

class A{
	public:
		int a;
		void geta(){
			cout<<"\n Enter a";
			cin>>a;
		}
};
class B : virtual public A{
	public:
		int b;
		void getb(){
			cout<<"\n Enter b";
			cin>>b;
		}
	
};
class C : virtual public A{
	public:
		int c;
		void getc(){
			cout<<"\n Enter c";
			cin>>c;
		}
	
};

class D :public B, public C{
	public:
		int d;
		void getd(){
			cout<<"\n Enter d";
			cin>>d;
		}
		void add(){
			cout<<"\n Addition = "<<a+b+c;
		}
};

main(){
	
	D d1;
	d1.geta();
	d1.getb();
	d1.getc();
	d1.getd();
	d1.add();
}

