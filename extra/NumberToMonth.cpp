#include<stdio.h>

main(){
	
	int month;
	
	printf("Enter the month number");
	scanf("%d",&month);
	
	if(month==1){
		printf("January");
	}
	else if(month==2){
		printf("Febuary");
	}
	else if(month==3){
		printf("March");
	}
	else if(month==4){
		printf("April");
	}
	else if(month==5){
		printf("May");
	}
	else if(month==6){
		printf("June");
	}
	else if(month==7){
		printf("July");
	}
	else if(month==8){
		printf("August");
	}
	else if(month==9){
		printf("September");
	}
	else if(month==10){
		printf("Octomber");
	}
	else if(month==11){
		printf("November");
	}
	else if(month==12){
		printf("December");
	}
	else{
		printf("Invalid input");
	}
}
