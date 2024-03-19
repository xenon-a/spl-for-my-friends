#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i=n; i>0; i--){
        for (int j=1; j<=i*2; j++){
            j%2?printf("*"):printf(" ");
        }
        printf("\n"); //Next row
    }

    return 0;
}