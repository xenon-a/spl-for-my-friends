#include<stdio.h>

int main()
{
    int n;

    printf("Enter the input: ");
    scanf("%d", &n);

    n = n/2+1;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            printf("_");
        }
        for (int k=1; k<=2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-1; i>0; i--){
        for (int j=n-i; j>0; j--){
            printf("_");
        }
        for (int k=2*i-1; k>0; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}