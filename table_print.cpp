#include<stdio.h>
main(){
	
	int num, i;
	printf("Enter the number");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
		printf("\n %d X %d = %d", num,i,num*i);
	}
}
