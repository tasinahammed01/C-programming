/*
Write a program containing functions Which counts the number of positive
integers in an array.
*/

#include <stdio.h>

int count(int a[]);
int count(int a[])
{

    int num_of_positive = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        {
            num_of_positive++;
        }
    }
    return num_of_positive;
}

int main()
{

    int arr[] = {1, 2, -3, 4, -5, 6, -7, 8, 9, 10};

    printf("The no of positive number is %d", count(arr));

    return 0;
}