/*
. Write a program to check whether a given number is prime or not using loops.
*/

#include <stdio.h>

int main()
{

    int num;
    int prime = 0;

    printf("Enter your num:\n");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
        }
    }
    if (prime)
    {
        printf("%d is not a prime num", num);
    }
    else
    {
        printf("%d is a prime num" ,num);
    };
    return 0;
}