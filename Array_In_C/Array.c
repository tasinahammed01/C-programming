#include <stdio.h>

int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter element number:%d\n", i);

        scanf("%d", &arr[i]);
    }
    // printf("%d", arr[1]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}