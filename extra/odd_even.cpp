#include<stdio.h>

main(){
	
	int num;
	
	printf("Enter the number");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\n %d Is even number", num);
	}
	else{
		printf("\n %d Is odd number", num);
	}
}
