#include<stdio.h>

main(){
	
	int cp,sp,total;
	
	printf("Enter the cost price");
	scanf("%d",&cp);
	printf("Enter the selling price");
	scanf("%d",&sp);
	
	if(sp>cp){
		total=sp-cp;
		printf("profit");
	}
	else{
		printf("Loss");
	}
}
