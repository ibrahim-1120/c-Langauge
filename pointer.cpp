#include<stdio.h>
main(){
	
	int a=20;
	int *p;
	
	p = &a;
	printf("\n Address = %p Value = %d",p,*p);
	
	*p=10;
	printf("\n a=%d",a);
}
