#include<stdio.h>
// call by refrence
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("\n a= % d and b = %d",*a,*b);
}


main(){
	int a=10, b=20;
	swap(&a,&b);
	printf("\n a = %d and b = %d",a,b);
}
