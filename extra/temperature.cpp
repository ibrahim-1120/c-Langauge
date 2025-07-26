#include<stdio.h>

main(){
	
	int tem;
	
	printf("Enter the temperature \n");
	scanf("%d",&tem);
	
	if(tem<0){
		printf("freazing weather\n");
	}
	else if(tem<10){
		printf("Very cold\n");
	}
	else if (tem < 20) {
	 	printf("Cold weather\n");
	}
	else if (tem < 30){
	  	printf("Normal in temp\n");
	}
	else if (tem < 40){
		printf("Its Hot\n"); 
	}
	else{
		printf("It is very hot \n");
	}
	

	
}
