#include <stdio.h>
#include <stdlib.h>

struct stu {
    char name[20];
    int roll_no, std;
};

int main() {
    int choice, i, n;
    struct stu s1;
    FILE *su;

    printf("\nPress 1 to Add Student Data");
    printf("\nPress 2 to Show Student Data");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            su = fopen("student_data.txt", "a");  // Append mode to preserve data
            if (su == NULL) {
                printf("File could not be opened.\n");
                return 1;
            }

            printf("\nHow many students do you want to add? ");
            scanf("%d", &n);

            for (i = 0; i < n; i++) {
                printf("\nEnter name, roll no, and standard for student %d: ", i + 1);
                scanf("%s %d %d", s1.name, &s1.roll_no, &s1.std);
                fprintf(su, "%s %d %d\n", s1.name, s1.roll_no, s1.std);
            }

            fclose(su);
            printf("Student data added successfully.\n");
        break;

        case 2:
            su = fopen("student_data.txt", "r");  // Read mode
            if (su == NULL) {
                printf("File not found or empty.\n");
                return 1;
            }

            printf("\nStudent Records:\n");
            printf("Name\tRoll No\tStd\n");

            while (fscanf(su, "%s %d %d", s1.name, &s1.roll_no, &s1.std) != EOF) {
                printf("%s\t%d\t%d\n", s1.name, s1.roll_no, s1.std);
            }

            fclose(su);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

