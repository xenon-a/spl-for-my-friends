#include<stdio.h>
#include<math.h>
#include<complex.h>

int main()
{
    float a, b, c;
    printf("Enter the value of a, b, c: ");
    scanf("%f, %f, %f", &a, &b, &c);

    float det = pow(b, 2) - 4*a*c;
    if (a==0){
        printf("Value of 'a' can't be zero\n");
        goto end;
    }

    if (det==0.00){
        float x1 = (-b + sqrt(det)) / (2*a);
        printf("x = %.2f\n", x1);
    }
    else if (det > 0){
        float x1 = (-b + sqrt(det)) / (2*a);
        float x2 = (-b - sqrt(det)) / (2*a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else {
        float complex x1 = (-b + csqrt(det)) / (2*a);
        float complex x2 = (-b - csqrt(det)) / (2*a);

        printf("x1 = %.2f%+.2fi\n", creal(x1), cimag(x1));
        printf("x2 = %.2f%+.2fi\n", creal(x2), cimag(x2));
    }

    end:
        return 0;
}