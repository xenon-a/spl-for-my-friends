#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int c=1; c<=n; c++){
        for (int i=1; i<=n-c; i++){
            printf(" "); /// left side white spaces
        }
        for (int j=1; j<c*2; j++){
            j%2?printf("*"):printf(" "); // one space one star
        }
        printf("\n");
    }

    return 0;
}