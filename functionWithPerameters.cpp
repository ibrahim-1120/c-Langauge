#include<stdio.h>

	//with return type without perameter
	
	void display(){
		printf("\n Hello");
	}
	//without return type with perameter
	
	void add(int a, int b){
		int c=a+b;
		printf("\n Addition = %d",c);
	}
	
		//with return type with perameter
		
		int square(int num){
			int s=num*num;
			return s;
		}
		
		//with return type without perameter
		
		float areaOfCircle(){
			int r;
			float area;
			
			printf("\n Enter the radius");
			scanf("%d",&r);
			
			area = 3.14*r*r;
			return r;
		}
		
		main(){
			display();
			add(2,3);
			
			printf("\n Square is = %d",square(672545));
			printf("\n Area of circle = %f",areaOfCircle());
		}		
		
		
		
		
		
		
		
		
		
