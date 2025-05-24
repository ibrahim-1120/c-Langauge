#include<stdio.h>
main(){
	
	int num1,num2,ans;
	float ans1;
	printf("Enter the number 1 and number2:");
	scanf("%d %d",&num1,&num2);
	ans= num1+num2;
	printf("add=%d",ans);
	ans= num1-num2;
	printf("sub=%d",ans);
	ans=num1*num2;
	printf("mul=%d",ans);
}
