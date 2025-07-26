#include<stdio.h>

main() {
    int maths, physics, chemistry, total, mp_total;
    
    printf("Enter marks of Maths: ");
    scanf("%d", &maths);

    printf("Enter marks of Physics: ");
    scanf("%d", &physics);

    printf("Enter marks of Chemistry: ");
    scanf("%d", &chemistry);

    total = maths + physics + chemistry;
    mp_total = maths + physics;

    if (maths >= 65 && physics >= 55 && chemistry >= 50) {
        if (total >= 190 || mp_total >= 140) {
            printf("You are eligible for admission\n");
        } else {
            printf("Not eligible for admission: insufficient total marks\n");
        }
    } else {
        printf(" Invalid marks\n");
    }

    
}

