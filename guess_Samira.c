#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess = 4;  // Secret number to guess
    int guess;

    // Seed the random number generator (if you were to generate random numbers)
    // srand(time(0));

    printf("Welcome to the Guessing Game!\n");
    printf("Guess the secret number between 1 and 10: ");
    
    // Game loop
    while (1) {
        // Get user input
        int input_status = scanf("%d", &guess);

        if (input_status != 1) {
            // Handle invalid input
            printf("Please enter a valid number.\n");
            while (getchar() != '\n'); // Clear the buffer (discard invalid input)
            continue;  // Prompt user for input again
        }

        // Compare the guess to the secret number
        if (guess < number_to_guess) {
            printf("Too low, try again!\n");
        } else if (guess > number_to_guess) {
            printf("Too high, try again!\n");
        } else {
            printf("Correct! You've guessed the number!\n");
            break;  // Exit the loop when the correct number is guessed
        }

        printf("Guess again: ");  // Prompt for next guess after feedback
    }

    return 0;  // Return 0 to indicate successful completion
}
