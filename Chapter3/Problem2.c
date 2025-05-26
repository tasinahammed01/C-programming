/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{

    float Math;
    float Physics;
    float Chemsitry;

    printf("Enter your Math mark:\n");
    scanf("%f", &Math);

    printf("Enter your Physics mark:\n");
    scanf("%f", &Physics);

    printf("Enter your Chemsitry mark:\n");
    scanf("%f", &Chemsitry);

    if (Math, Physics, Chemsitry > 100)
    {
        printf("Input a valied mark");
    }
    else
    {
        if (Math >= 33 && Physics >= 33 && Chemsitry >= 33)
        {
            float avgMark = (Math + Physics + Chemsitry) / 3;

            if (avgMark >= 40)
            {
                printf("Passed");
            };
        }
        else
        {
            printf("Failed");
        }
    }

    return 0;
}