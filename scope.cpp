#include<stdio.h>
int a=123; // global variable
void swap(int *a, int *b){  // a,b are formal variable
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("\n a= % d and b = %d",*a,*b);
}
main()
{
	
	int b=10; // local variable
	printf("\n a=%d",a);
	printf("\n b=%d",b);
}
