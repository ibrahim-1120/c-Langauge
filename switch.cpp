#include<stdio.h>

main(){
	
	int num1,num2;
	char choice;
	
	printf("\n + for add");
	printf("\n - for sub");
	printf("\n * for mul");
	printf("\n / for div");
	printf("\n enter your choice");
	scanf("%c",&choice);
	
	printf("Enter the number1, number2:");
	scanf("%d %d",&num1,&num2);
	
	switch(choice){
		case '+':
			printf("add is %d",num1+num2);
		break;
		case '-':
			printf("sub is %d",num1-num2);
		break;
		case '*':
			printf("mul is %d",num1*num2);
		break;
		case '/':
			printf("div is %d",num1/num2);
		break;	
		default:
		printf("wrong choice");
		break;
	}
}
