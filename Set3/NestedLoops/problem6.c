#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            i%2?printf("%d", j%2):printf("%d", !(j%2));
        }
        printf("\n");
    }

    return 0;
}