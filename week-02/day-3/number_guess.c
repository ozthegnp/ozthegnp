#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
    srand ( time(NULL) );
    int r = rand() % 100;
    int guess = 0;
    int lives = 6;
    printf("\n\t=== THE NUMBER GUESSING GAME ===\n", lives);
    printf("\nGuess a number from 1 to 100:\t\tLives = %d\n", lives);
    scanf("%d", &guess);

    do {
            if (guess == r)
                break;
            printf("\n");
            if (guess > r) {
                lives--;
                printf("Too Big!\nGuess again:\t\t\t\tLives = %d\n", lives);
                scanf("%d", &guess);
            } else {
                lives--;
                printf("Too Small!\nGuess again:\t\t\t\tLives = %d\n", lives);
                scanf("%d", &guess);
            }
    } while (guess != r && lives > 1);

    if (guess == r)
        printf("\nWoowww! You're good! It is %d!\tLives remain: %d\n", r, lives);
    else
        printf("\nYou lost :( The number was: %d!\n", r);
}
