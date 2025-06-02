#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest
    int largest;
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Find the smallest
    int smallest;
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

   
}

