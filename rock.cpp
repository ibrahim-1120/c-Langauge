#include <stdio.h>      // For input and output functions
#include <stdlib.h>     // For srand() and rand()
#include <time.h>       // For time() function to seed random number

// Structure to simulate object and function call through it
struct Game {
    void (*play)();     // Function pointer to play the game
};

// Function to convert number to Rock, Paper, Scissors
const char* getChoiceName(int choice) {
    if (choice == 1) return "Rock";
    else if (choice == 2) return "Paper";
    else if (choice == 3) return "Scissors";
    else return "Invalid";
}

// Function to handle the actual game logic
void playGame() {
    int userChoice, computerChoice;
    char playAgain;

    // Loop for repeated game rounds
    do {
        // Display menu
        printf("\n============================\n");
        printf("  Rock Paper Scissors Game\n");
        printf("============================\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &userChoice);

        // Exit if user chooses 4
        if (userChoice == 4) {
            printf("Exiting game. Thank you for playing!\n");
            break;
        }

        // Input validation
        if (userChoice < 1 || userChoice > 4) {
            printf("Invalid input! Please enter a number between 1 and 4.\n");
            continue;
        }

        // Seed the random number generator
        srand(time(0));

        // Generate computer's random choice between 1 and 3
        computerChoice = (rand() % 3) + 1;

        // Show choices
        printf("You chose: %s\n", getChoiceName(userChoice));
        printf("Computer chose: %s\n", getChoiceName(computerChoice));

        // Determine result using if-else statements
        if (userChoice == computerChoice) {
            printf("Result: It's a Draw!\n");
        }
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2)) {
            printf("Result: You Win!\n");
        }
        else {
            printf("Result: Computer Wins!\n");
        }

        // Ask if user wants to play again
        printf("Do you want to play again? (Y/N): ");
        scanf(" %c", &playAgain); // Space before %c to consume newline

    } while (playAgain == 'Y' || playAgain == 'y');
}

// Main function
int main() {
    // Declare a Game object and assign the function pointer
    struct Game game;
    game.play = playGame;

    // Call the game logic through the object
    game.play();

    return 0;
}

