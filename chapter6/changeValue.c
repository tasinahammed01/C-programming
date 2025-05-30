#include <stdio.h>

int sum(int *, int *);

int sum(int *a, int *b)
{
    *a = 10;
    return (*a + *b);
}

int main()
{
    int a = 4;
    int b = 2;

    printf("The sum of a and b is %d\n", sum(&a, &b));
    printf("The value of a is %d\n", a);

    return 0;
}