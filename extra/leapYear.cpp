#include<stdio.h>

main(){
	
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	
	if((year%4==0 & year % 100!=0) || year%400==0){
		printf("%d Is a leap year", year);
	}
	else{
		printf("%d Is not a leap year", year);
	}
}
