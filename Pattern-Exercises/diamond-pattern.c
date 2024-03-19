#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    n/=2; // Dividing our pattern in two parts

    for (int i=1; i<=n; i++){ // first half
        for (int j=0; j<=n-i; j++){
            printf(" ");
        }
        for (int k=1; k<2*i; k++){
            k%2?printf("*"):printf(" ");
        }
        printf("\n");
    }

    for (int i=n+1; i>0; i--){ // second half
        for (int j=1; j<=(n+1)-i; j++){
            printf(" ");
        }
        for (int k=1; k<2*i; k++){
            k%2?printf("*"):printf(" ");
        }
        printf("\n");
    }

    return 0;
}