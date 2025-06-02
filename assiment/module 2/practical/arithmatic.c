/*
Arith matic operators
like +,-,*,/,%;
*/

#include<stdio.h>
main()
{

 int  x ,y , adiition , subtraction, multiplication;
 float division, module;
 
 printf("\n enter x");
 scanf("%d",&x);
 
 printf("\n enter y");
 scanf("%d",&y);
 
 adiition = x+y;
 printf("\n addition=%d",adiition);
 
 subtraction = x-y;
 printf("\n subtraction=%d",subtraction);
 
 multiplication = x*y;
 printf("\n multiplication=%d", multiplication);
 
 division = x/y;
 printf("\n division=%.2f",division);
 
 module = x%y;
 printf("\n module=%.2f",module);
}
