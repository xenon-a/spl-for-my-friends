#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i=2*n; i>0; i-=2){
        for (int x=2*n-i; x>0; x--){
            printf(" ");
        }
        for (int c=1; c<=i; c++){
            c%2?printf("*"):printf(" ");
        }
        printf("\n");
    }

    return 0;
}