/*
Try prblem 2 using call by value and verify that it does not change the value of the said variable.
*/

#include <stdio.h>

void change_to_ten_times(int a);

void change_to_ten_times(int a)
{
    a = a * 10;
}

int main()
{

    int x = 20;
    printf("The value of x is %d\n", x);
    change_to_ten_times(x);
    printf("The value of x is %d", x);

    return 0;
}