#include<stdio.h>
main(){
	
	int start, end, i, choice;
	printf("\n Enter the start number");
	scanf("%d",&start);
	printf("\n Enter the end number");
	scanf("%d",&end);
	
	printf("\n Enter your choice");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			for(i=start;i<=end;i++){
			printf("\n i=%d",i);
		}
		break;
			
		case 2:
			for(i=end;i>=start;i--){
			printf("\n i=%d",i);	
		break;	
	}

}
}
