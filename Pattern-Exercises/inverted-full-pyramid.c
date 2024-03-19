#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i=n; i>0; i--){
        for (int j=n-i; j>0; j--){
            printf(" ");
        }
        for (int k=1; k<2*i; k++){
            k%2?printf("*"):printf(" ");
        }
        printf("\n");
    }

    return 0;
}