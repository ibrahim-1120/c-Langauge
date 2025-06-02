#include<stdio.h>
void inc(){
	int a=0;
	static int s=0;
	a++;
	s++;
	printf("\n a=%d and s=%d",a,s);
}
main(){
	int i;
	for(i=0;i<3;i++){
		inc();
	}
}
