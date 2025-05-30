#include <stdio.h>

int swap(int*, int*);

int swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 4, b = 5;

    swap(&a,&b);

    printf("A= %d and B=%d", a, b);

    return 0;
}