#include<stdio.h>

main(){
	int x1, x2;
	printf("Enter the number x1, x2");
	scanf("%d %d",&x1, &x2);
	
	if(x1>0 && x2>0){
		printf("first");
	}else if (x1<0 && x2>0){
		printf("sec");
	}else if (x1<0 && x2<0){
		printf("third");
	}else if(x1>0 && x2<0){
		printf("forth");
	}else{
		printf("error");
		
	}
	
	
}
