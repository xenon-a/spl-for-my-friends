#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number if rows: ");
    scanf("%d", &n);

    n/=2; // Our pattern will be done in two parts
    n++; 

    for (int i=n; i>0; i--){ // The upper part
        for (int j=1; j<=n-i; j++){
            printf(" ");
        }
        for (int k=1; k<2*i; k++){
            k%2?printf("*"):printf(" ");
        }
        printf("\n");
    }

    for (int i=2; i<=n; i++){ // The lower part
        for (int j=1; j<=n-i; j++){
            printf(" ");
        }
        for (int k=1; k<2*i; k++){
            k%2?printf("*"):printf(" ");
        }
        printf("\n");
    }

    return 0;
}