#include<stdio.h>


int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i=n; i>0; i--){
        for (int j=1; j<=n-i; j++){
            printf(" ");
        }
        for (int k=1; k<=2*i; k++){
            if (i==n){
                k%2?printf("*"):printf(" ");
            } else {
                if (k==1 || k+1==2*i){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}