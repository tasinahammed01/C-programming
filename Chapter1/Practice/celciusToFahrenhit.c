#include <stdio.h>

int main()
{

    float celcius;

    printf("Input your celcius value:\n");
    scanf("%f", &celcius);

    float Fahrenheit = (celcius * 9 / 5) + 32;

    printf("Fahrenheit value is %.3f\n", Fahrenheit);

    return 0;
}