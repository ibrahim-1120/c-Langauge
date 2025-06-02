#include<stdio.h>

int fact(int num){
	int f;
	if(num==1){
		return 1;
	}
	f=num*fact(num-1);
	return f;
}
main(){
	printf("Factorial = %d",fact);
}
