#include<stdio.h>

main(){
	
	int maths, phys, chem, total, subtotal;
	
	printf("Enter the marks of maths, phys, chem");
	scanf("%d %d %d",&maths, &phys,&chem);
	
	if(maths>=65 && phys>=55 && chem>=50){
		total=maths+phys+chem;
		subtotal=maths+phys;
		if(total>=190 || subtotal>=140){
			printf("\n elegible for addimision");
		}
		else{
			printf("\n not inner elegible for addimision");
		}
	}else{
		printf("not elegible for addimission");
	}
	
}
