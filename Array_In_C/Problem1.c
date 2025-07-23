// Ques: Given an array of marks of 10 students, if the
// mark of any student is less than 35 print its roll
// number. [roll number here refers to the index of the

#include <stdio.h>

int main()
{

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("enter element number:%d\n", i);

        scanf("%d", &arr[i]);
    }
    // printf("%d", arr[1]);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 35)
        {
            /* code */
            printf("%d ", i);
        }
    }
}