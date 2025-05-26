/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 - 100 => A
80 - 90 => B
70 - 80 => C
60 - 70 => D
50 - 60 => E
<50     => F
*/

#include <stdio.h>

int main()
{

    float mark;

    printf("Enter your mark:\n");
    scanf("%f", &mark);

    if (mark >= 90)
    {
        printf("A");
    }
    else if (mark >= 80)
    {
        printf("B");
    }
    else if (mark >= 70)
    {
        printf("C");
    }
    else if (mark >= 60)
    {
        printf("D");
    }
    else if (mark >= 50)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }

    return 0;
}
