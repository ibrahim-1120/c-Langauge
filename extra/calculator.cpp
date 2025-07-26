#include<stdio.h>

main(){
	
	int num1,num2, choice;
	
	
	printf("\n 1ress 1 for add");
	printf("\n Press 2 for sub");
	printf("\n Press 3 for mul");
	printf("\n Press 4 for div");
	printf("\n enter your choice");
	scanf("%d",&choice);
	
	printf("Enter the number1, number2:");
	scanf("%d %d",&num1,&num2);
	
	switch(choice){
		case 1:
			printf("add is %d",num1+num2);
		break;
		case 2:
			printf("sub is %d",num1-num2);
		break;
		case 3:
			printf("mul is %d",num1*num2);
		break;
		case 4:
			printf("div is %d",num1/num2);
		break;	
		default:
		printf("wrong choice");
		break;
	}
}
