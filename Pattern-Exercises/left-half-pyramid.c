#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i=1; i<=2*n; i+=2){
        for (int c=1; c<=2*n-i; c++){
            printf(" "); /// left side white spaces
        }
        for (int x=1; x<=i; x++){
            x%2?printf("*"):printf(" ");
        }
        printf("\n");
    }

    return 0;
}