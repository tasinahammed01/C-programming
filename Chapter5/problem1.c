/*
Write a program using function to find average of three numbers.
*/

#include <stdio.h>

float avg(int a, int b, int c);

float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{

    int a = 2;
    int b = 3;
    int c = 5;

    printf("The avg value of three num is %.3f", avg(a, b, c));

    return 0;
}