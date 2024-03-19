#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number to get its factorial: ");
    scanf("%d", &n);

    int result=1;

    printf("%d! = ", n);

    for (int i=n; i>1; i--){
        result *= i;
        printf("%d X ", i);
    }

    printf("1 = %d\n", result);

    return 0;
}