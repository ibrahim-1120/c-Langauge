#include<stdio.h>

main(){
	
	int height;
	
	printf("Enter the height in cm");
	scanf("%d",&height);
	
	
	// less than 150
	if(height<150){ 
		printf("You are small");
	}
	
	//greater than 150 or less than 165
	else if((height>=150) &&(height<165)){
		printf("You have perfect height");
	}
	
	// greater than 165 or less than 195
	else if((height>=165) &&(height<195)){
		printf("You are tall");
	}
	else{
		printf("Go and play");
		
	}
}
