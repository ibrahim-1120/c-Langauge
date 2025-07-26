#include<stdio.h>

main(){
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	
	if(num>=0){
		printf("%d Is a positive number", num);
	}
	else{
		printf("%d Is a negative number", num);
	}
	
}
