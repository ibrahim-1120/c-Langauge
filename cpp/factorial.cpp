#include<iostream>

using namespace std;

class fact{
	public:
		int num,f;
		
		void getNum(){
			cout<<"\n Enter the number";
			cin>>num;
		}
		int factorial(int num){
			if(num==1){
				return 1;
			}
			f=num*factorial(num-1);
			return f;
		}
};

main(){
	fact f1;
	f1.getNum();
	cout<<f1.factorial(f1.num);
	
}
