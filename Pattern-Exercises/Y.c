#include<stdio.h>

/// Y pattern

int main()
{
    int n;
    printf(">>> ");
    scanf("%d", &n);

    if (n%2!=0)
        n++;

    for (int i=1; i<n; i++){
        for (int j=1; j<=n; j++){
            if ((i<=n/2 && (j==i||j==n-i)) || (i>n/2 && j==n/2))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
