#include <stdio.h>

int main()
{
    float radius;
    float height;

    printf("Input radius of Circle:\n");
    scanf("%f", &radius);

    printf("Input height of Cylinder:\n");
    scanf("%f", &height);

    float area = 3.14 * radius * radius;
    printf("The area of a circle with radius %.2f is %.2f\n", radius, area);

    float volume = 3.14 * radius * radius * height;
    printf("The volume of a cylinder is %f", volume);

    return 0;
}
