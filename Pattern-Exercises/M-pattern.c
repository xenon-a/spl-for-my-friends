#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n%2==0)
        n++;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n;j++){
            if (j==1||j==n||(i<=n/2+1&&(j==i||j==n-i+1)))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}