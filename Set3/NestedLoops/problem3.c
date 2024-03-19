#include<stdio.h>


int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for (int j=i; j<i*2; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
    
}