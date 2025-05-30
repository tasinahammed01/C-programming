#include <stdio.h>

void getRefference(int* x);

void getRefference(int* x)
{
    printf("The value of refference is %d\n", *x);
}

int main()
{

    int i = 4;
    int* j = &i;

    getRefference(j);

    return 0;
}