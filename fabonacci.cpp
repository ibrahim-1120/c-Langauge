#include<stdio.h>
main(){
	
	int i,x1=0,x2=1,sum;
	for(i=1;i<=20;i++){
		sum=x1+x2;
		printf("\t %d",sum);
		x1=x2;
		x2=sum;
	}
	
	
	
}
