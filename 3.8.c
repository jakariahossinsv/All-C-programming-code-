#include <stdio.h>
#include <math.h>

int main()
{
    double a,b;
    printf("Enter a value: ");
    scanf("%lf", &a);
    b= a sin(a);
    b=b*(180.0/M_PI);
    printf("sin inverce of %.2lf is  %.2lf degrees\n", a, b);

    return 0;
}
