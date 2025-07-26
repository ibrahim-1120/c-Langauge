#include<stdio.h>

main(){
	
	int age;
	printf("Enthe the age");
	scanf("%d",&age);
	
	if(age>=18){
		printf("You are eligible to vote");
	}
	else{
		printf("You are not elegible for voting");
	}
}
