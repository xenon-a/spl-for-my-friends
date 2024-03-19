#include<stdio.h>

int main()
{
    int n;
    float total=0.00;

    printf("How many numbers?: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        float num;
        scanf("%f", &num);
        total+=num;
    }

    printf("AVG of %d inputs: %f\n", n, total/n);

    return 0;
}