#include<stdio.h>

main(){
	
	int num; 
	
	printf("Enter the number");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\n %d is even number",num);
	}
	else
	{
		printf("\n %d is odd number",num);
	}
	
}
