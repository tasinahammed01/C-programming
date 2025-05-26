#include <stdio.h>

int main()
{
    int c;

    printf("Enter your number:\n");
    scanf("%d", &c);

    if (c % 97 == 0)
    {
        printf("%d is divisible by 97", c);
    }
    else
    {
        printf("%d is not divisible by 97", c);
    }

    return 0;
}