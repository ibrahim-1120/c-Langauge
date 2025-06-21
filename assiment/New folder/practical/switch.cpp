#include<stdio.h>

main(){
	
	int num1,num2,choice;
	
	printf("\n Press 1 for addition");
	printf("\n Press 2 for subtraction");
	printf("\n Press 3 for multiplication");
	printf("\n Press 4 for division");
	printf("\n enter your choice: ");
	scanf("%d",&choice);
	
	printf("\n Enter the number1 ");
	scanf("%d",&num1);
	printf("\n Enter the number2: ");
	scanf("%d",&num2);
	
	switch(choice){
		case 1:
			printf("\n addition is %d",num1+num2);
		break;
		case 2:
			printf("\n subtraction is %d",num1-num2);
		break;
		case 3:
			printf("\n multiplication is %d",num1*num2);
		break;
		case 4:
			printf("\n division is %d",num1/num2);
		break;	
		default:
		printf("\n wrong choice");
		break;
	}
}
