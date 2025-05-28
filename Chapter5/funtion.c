#include <stdio.h>

int sum(int, int);  // fucntion prototype

int sum(int a, int b) // fuction definiton
{
    return a + b;
}

int main()
{

    int sum1 = sum(4, 5); //fucntion call also set on a variable
    printf("The sum1 is = %d\n", sum1);

    int sum2 = sum(10, 5);
    printf("The sum2 is = %d\n", sum2);

    int sum3 = sum(4, 15);
    printf("The sum3 is = %d\n", sum3);

    return 0;
}