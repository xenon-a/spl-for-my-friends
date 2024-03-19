#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n%5==0)
        printf("%d is divisible by 5\n", n);
    else if (n%11==0)
        printf("%d is divisible by 11\n", n);
    else
        printf("%d is neither divisible by 5 nor by 11\n", n);
    
    return 0;
}