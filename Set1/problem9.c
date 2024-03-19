#include<stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter a simple expression: ");
    scanf("%f%c%f", &num1, &op, &num2);

    switch(op){
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            printf("Invalid Operator!\n");
            goto end;
    }

    printf("%.2f\n", result);

    end:
        return 0;
}