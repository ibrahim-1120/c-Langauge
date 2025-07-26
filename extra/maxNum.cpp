#include<stdio.h>

main(){
	
	int num1, num2, num3;
	printf("Enter the Number 1, Number 2 and number 3");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num1>=num2 && num1>=num3){
		printf("The maximun number is number 1 = %d", num1);
	}
	else if(num2>=num1 && num2>=num3){
		printf("The maximun number is number 2 = %d", num2);
	}
	else{
		printf("The maximum number is number 3 = %d", num3);
	}
	
}
