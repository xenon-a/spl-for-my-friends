#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=n; i>0; i--){
        for (int j=1; j<=n; j++){
            if (i==1||i==n||j==i){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}