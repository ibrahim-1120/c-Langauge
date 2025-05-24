#include<stdio.h>

main(){
	
	char i, j, count='a';
	
	for(i='a';i<='d';i++){
		for(j='a';j<=i;j++){
			printf("%c",j);
		}
		printf("\n");
		count++;
	}
}
