#include<stdio.h>

int main()
{
    int m;
    printf("Enter the number of rows: ");
    scanf("%d", &m);

    for (int i=1; i<=m; i++){
        for (int s=1; s<i; s++){
            printf(" ");
        }
        for (int j=1; j<8; j++){
            j%2?printf("*"):printf(" ");
        }
        printf("\n");
    }

    return 0;
}