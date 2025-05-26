/*
Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>

int main()
{

    int num1;
    int num2;
    int num3;
    int num4;

    printf("Enter num 1:\n");
    scanf("%d", &num1);

    printf("Enter num 2:\n");
    scanf("%d", &num2);

    printf("Enter num 3:\n");
    scanf("%d", &num3);

    printf("Enter num 4:\n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("Greatest Num is %d", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("Greatest Num is %d", num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("Greatest Num is %d", num3);
    }
    else if (num4 > num1 && num4 > num3 && num4 > num2)
    {
        printf("Greatest Num is %d", num4);
    }

    return 0;
}