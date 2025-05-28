/*
Write a function to convert Celsius temperature into Fahrenheit.
*/

#include <stdio.h>

float CelsiusToFahrenheite(float celsius);

float CelsiusToFahrenheite(float celsius)
{
    return ((celsius * 9) / 5) + 32;
}

int main()
{
    float celcius = 30;

    printf("The fahrenheit value is %.2f", CelsiusToFahrenheite(celcius));

    return 0;
}