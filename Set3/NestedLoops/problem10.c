#include<stdio.h>

int main()
{
    int n;
    printf("Enter the input: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            j<=i?printf("%d", j):printf("_");
        }
        for (int k=n-1; k>0; k--){
            k<=i?printf("%d", k):printf("_");
        }
        printf("\n");
    }

    return 0;
}