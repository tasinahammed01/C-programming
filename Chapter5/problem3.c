/*
Write a function to calculate force of attraction on a body of mass 'm' exerted by
earth. Consider g = 9.8m/s?.
*/

#include <stdio.h>

float force(float m);

float force(float m)
{
    return (m * 9.8);
}

int main()
{
    float m = 60;
    printf("The Force of attraction on body of mass %f is %.3f", m, force(m));

    return 0;
}