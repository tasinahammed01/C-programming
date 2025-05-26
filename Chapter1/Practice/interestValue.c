#include <stdio.h>

int main()
{

    float p;
    int r;
    int t;

    printf("Input Principle amount:\n");
    scanf("%f", &p);

    printf("Input annual interest rate:\n");
    scanf("%d", &r);

    printf("Input Time:\n");
    scanf("%d", &t);

    float interest = (p * r * t) / 100;
    printf("The interest value is %.3f", interest);

    return 0;
}