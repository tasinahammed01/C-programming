#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int num;
    int num_of_guesses = 0;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Guess the Number\n");
        scanf("%d", &num);

        if (num == randomNumber)
        {
            printf("Congratulation you guess the right number on gesses %d", num_of_guesses);
        }
        else if (num > randomNumber)
        {
            printf("hiegher num pls !");
        }
        else if (num < randomNumber)
        {
            printf("lower num pls !");
        }

        num_of_guesses++;

    } while (num != randomNumber);

    return 0;
}
