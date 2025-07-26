#include<stdio.h>


main(){
	
	char cha;
	
	printf("Enter a character");
	scanf("%c",&cha);
	
	if((cha>='a' && cha<='z') || (cha>='A' && cha<='Z')){
		printf("It is the alphabet");
	}
	else if(cha>='0' && cha<='9'){
		printf("It is a number");
	}
	else{
		printf("Speacial character");
	}
}
