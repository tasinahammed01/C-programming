#include <stdio.h>

int main()
{

    int marks[5];

    printf("Enter 5 students marks:\n");

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    // printf("The mark of student 1 is %d\n", marks[0]);
    // printf("The mark of student 2 is %d\n", marks[1]);
    // printf("The mark of student 3 is %d\n", marks[2]);
    // printf("The mark of student 4 is %d\n", marks[3]);
    // printf("The mark of student 5 is %d\n", marks[4]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 1; i <=5; i++)
    {
        printf("The mark of student %d is %d\n", i, marks[i]);
    }

    return 0;
}