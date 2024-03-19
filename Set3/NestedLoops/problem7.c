#include<stdio.h>

int main()
{
    int n, i, j, x;
    printf("Enter the input: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        for (j=1; j<=n-i; j++){
            printf("_");
        }
        for (x=1; x<=i; x++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}