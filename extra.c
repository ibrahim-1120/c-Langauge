#include<stdio.h>
struct stu{
	 char name[20];
	 int roll_no, std;  
};

main(){
	int i,choice;
	char ch;
	printf("\n press 1 for add");
	printf("\n press 2 for show");
	printf("\n enter your choice");
	scanf("%d",&choice);
	FILE * su;
	struct stu s1;

	
	switch(choice){
		case 1:
		 su = fopen("student data.text", "a");  
            
                 for (i = 0; i < 2; i++){
				 
                printf("\n Enter name, roll no, and standard for student %d: ", i + 1);
                scanf("%s %d %d", s1.name, &s1.roll_no, &s1.std);
                fprintf(su, "%s %d %d \n", s1.name, s1.roll_no, s1.std);
            }
            
            
            fclose(su);

			break;
		
		case 2:
			 su = fopen("student data.text", "r");
			   printf(" Name\tRoll No\tStd"); 
            
             while (fscanf(su, "%s %d %d", s1.name, &s1.roll_no, &s1.std) != EOF) {
               printf("\n%s \t %d \t %d \n ", s1.name, s1.roll_no, s1.std);
            }

            fclose(su);
            break;
	}
	
}	


