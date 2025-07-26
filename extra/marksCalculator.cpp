#include <stdio.h>    
#include <string.h>
 main()
{
    int rollNo, Physics, Chemistry, Computer, total;   
    float per;   
    char name[10], div[10];   

    printf("Input the Roll Number of the student :");   
    scanf("%d", &rollNo);   

    printf("Input the Name of the Student :");   
    scanf("%s", name);  
    printf("Input the marks of Physics, Chemistry and Computer Application  ");  
    scanf("%d %d %d", &Physics, &Chemistry, &Computer);   

    total = Physics + Chemistry + Computer;   
    per = total / 3.0;   

    if (per >= 60) {
    	 printf(div, "First");  
	}  
    else if	(per < 60 && per >= 48) {
 		printf(div, "Second"); 
	}
          
    else if (per < 48 && per >= 36)   {
    	  printf(div, "Pass");   
	}
      
    else  {
    	  printf(div, "Fail"); 
	}
       

    printf("\nRoll No : %d\nName of Student : %s\n", rollNo, name);   
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n", Physics, Chemistry, Computer);   
    printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n", total, per, div);   
}

