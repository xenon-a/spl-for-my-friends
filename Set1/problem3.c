#include<stdio.h>

int main()
{
    float a, b, c;
    printf("Enter the angles: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a<=0 || b<=0 || c<=0) || (a + b + c != 180.00))
        printf("Invalid\n");
    else
        printf("Valid\n");

    return 0;
}