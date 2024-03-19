#include<stdio.h>

int main()
{
    char category;
    int exp, family_members;
    float income;

    printf("Enter the informations: ");
    scanf("%c %d %d %f", &category, &exp, &family_members, &income);

    if (category=='Z'||category=='Y'){
        if (family_members>8 && income<1100.78)
            printf("Will Receive the Bonus\n");
        else
            printf("Will Not Receive the Bonus\n");
    }
    else if (category=='X'){
        if (family_members>5)
            printf("Will Receive the Bonus\n");
        else
            printf("Will Not Receive the Bonus\n");
    }
    else {
        if ((exp>=12 && family_members>5) || income<1000.50)
            printf("Will Receive the Bonus\n");
        else
            printf("Will Not Receive the Bonus\n");
    }

    return 0;
}