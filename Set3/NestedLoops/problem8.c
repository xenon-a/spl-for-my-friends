#include<stdio.h>

int main()
{
    int n, o, p, q, r;
    printf("Enter the input: ");
    scanf("%d", &n);

    for (o=1; o<=n; o++){
        for (p=1; p<=n-o; p++){
            printf("_");
        }
        for (q=1; q<=2*o-1; q++){
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}