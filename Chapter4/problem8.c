/*
Write a program to calculate the factorial of a given number using a for loop.
*/

#include <stdio.h>

int main()
{

    int n;
    int factorial = 1;

    printf("Input the value:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Fact of %d is %d\n", n, factorial);

    return 0;
}