// The aim of this project is to create a Number Guessing Game that allows the user to guess a secret number within limited attempts, providing hints and indicating success or failure.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0, maxAttempts = 5;
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
            return 0;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    printf("\nSorry, you've used all %d attempts.\n", maxAttempts);
    printf("The secret number was: %d\n", secretNumber);

    return 0;
}

//output:
// I have chosen a number between 1 and 100.
// You have 5 attempts to guess it.

// Attempt 1: Enter your guess: 34
// Too high! Try again.
// Attempt 2: Enter your guess: 12
// Too high! Try again.
// Attempt 3: Enter your guess: 90
// Too high! Try again.
// Attempt 4: Enter your guess: 13
// Too high! Try again.
// Attempt 5: Enter your guess: 345
// Too high! Try again.

// Sorry, you've used all 5 attempts.
// The secret number was: 8