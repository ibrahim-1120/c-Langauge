#include<stdio.h>

main(){
	
	char cha;
	
	printf("Enter the character");
	scanf("%c",&cha);
	
	if(cha=='a' || cha=='e' || cha=='i' || cha=='o' || cha=='u' ){
		printf("Its a vovel");
	}
	else if((cha>='a' && cha<='z') || (cha>='A' && cha<='Z'))  {
		printf("Its a constant");
	}
	else{
		printf("wrong input");
	}
}
