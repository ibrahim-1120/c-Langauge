#include <stdio.h>

int main() {
    int marks;

    // Taking input from the user
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    // Check if the input is within a valid range
    if (marks < 0 || marks > 100) {
        printf("Invalid input! Marks should be between 0 and 100.\n");
        return 1;
    }

 
    if (marks > 90) {
        printf("\n Grade: A");
    } else if (marks > 75) {
        printf("\n Grade: B");
    } else if (marks > 50) {
        printf("\n Grade: C");
    } else {
        printf("\n Grade: D");
    }

    
}

