#include <stdio.h>
//area of square
int main() {
  float side, areas, length, width, arear, p, r, t, si, radius, areac;
  
  //area of circle
  
  printf("Enter the radius of a circle: ");
  scanf("%f",&radius);
  
  areac = radius*radius;
  
  printf("The area of circle is: %.0f \n",areac);


//area of square

  printf("Enter the side length of the square: ");
  scanf("%f", &side);

  areas = side * side;

  printf("The area of the square is: %.0f\n", areas);

//area of rectangle

	printf("Enter the length of reactangle:");
	scanf("%f", &length);
	
	printf("Enter the width of a rectangle:");
	scanf("%f", &width);
	
	arear = length*width;
	
	printf("The area of the rectangle is: %.0f\n", arear);
	
	//simple intrest
	
	printf("Enter the principle amount");
	scanf("%f", &p);
	
	printf("Enter the rate of intrest");
	scanf("%f", &r);
	
	printf("Enter the return time");
	scanf("%f", &t);
	
	si = p*r*t/100;
	
	printf("The calculated interst is: %.0f\n", si);
	
	
}
