#include<stdio.h>
#include<math.h>


int main()
{
    int i, n, sum=0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        sum += i * pow(-1, i+1);
    }

    printf("Result: %d\n", sum);

    return 0;
}