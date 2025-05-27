/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

#include <stdio.h>

int main()
{

    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += (8 * i);
    }
    printf("%d\n", sum);

    return 0;
}