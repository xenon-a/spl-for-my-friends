#include<stdio.h>

/// X pattern

int main()
{
    int n;
    printf(">>> ");
    scanf("%d", &n);
    if (n%2!=0)
        n++;

    for (int i=1; i<n; i++){
        for (int j=1; j<=n; j++){
            if (j==i||j==n-i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
