#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function prototypes
void playGame();
int generateRandomNumber(int min, int max);
void clearBuffer();

int main() {
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the secret number between 1 and 100.\n");

    char playAgain;
    do {
        playGame();

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
        clearBuffer(); // Clear the input buffer

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing!\n");
    return 0;
}

void playGame() {
    // Generate random number between 1 and 100
    srand(time(NULL));
    int secretNumber = generateRandomNumber(1, 100);

    int guess;
    int attempts = 0;
    const int maxAttempts = 10;

    printf("\n");

    while (attempts < maxAttempts) {
        printf("Enter your guess (Attempt %d/%d): ", attempts + 1, maxAttempts);
        scanf("%d", &guess);
        clearBuffer(); // Clear the input buffer

        if (guess == secretNumber) {
            printf("Congratulations! You've guessed the secret number (%d) in %d attempts!\n", secretNumber, attempts + 1);
            return;
        } else if (guess < secretNumber) {
            printf("Too low. Try again!\n");
        } else {
            printf("Too high. Try again!\n");
        }

        attempts++;
    }

    printf("Sorry, you've run out of attempts. The secret number was %d.\n", secretNumber);
}

// Generate random number between min and max (inclusive)
int generateRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Clear input buffer
void clearBuffer() {
    while (getchar() != '\n');
}
