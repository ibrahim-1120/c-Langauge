#include<stdio.h>

main(){
	
	int num1, num2;
	printf("Enter the two numbers");
	scanf("%d %d",&num1, &num2);
	
	// if both are positive than first
	//if one is negative and seceond is positive than seceond
	//if both are negative the third
	//if one is positive and seceond is negative than forth
	
	
	if(num1>0 && num2>0){
		printf("You are in first quadrant");
	}
	else if(num1<0 && num2>0){
		printf("You are in seceond quadrant");
	}
	else if(num1<0 && num2<0){
		printf("You are in third quadrant");
	}
	else if(num1>0 && num2<0){
		printf("You are in forth quadrant");
	}
	else{
		printf("Go and learn maths");
	
	}
}
	
	
	

