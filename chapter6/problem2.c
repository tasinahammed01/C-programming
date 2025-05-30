/*
Write a program to change the value of a variable to ten times of its current
value.
*/

#include <stdio.h>

void change_to_ten_times(int *a);

void change_to_ten_times(int *a)
{
    *a = *a * 10;
}

int main()
{

    int x = 20;
    printf("The value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("The value of x is %d", x);

    return 0;
}