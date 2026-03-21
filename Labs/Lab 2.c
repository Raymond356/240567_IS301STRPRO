/*
Full Name: Raymond Bonaven
Student ID: 240567
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get guess
int getGuess() {
    int x;
    printf("Enter your guess: ");
    scanf("%d", &x);
    return x;
}

// Function if correct
void success() {
    printf("Correct! You win!\n");
}

// Function if failed
void sorry(int num) {
    printf("Sorry. The number was %d\n", num);
    printf("You should have gotten it by now\n");
}

int main() {
    int number, guess, i;

    srand(time(0));
    number = rand() % 20 + 1;

    printf("Guess a number between 1 and 20\n");

    for (i = 1; i <= 5; i++) {

        guess = getGuess();

        if (guess > number) {
            printf("Your guess is to high. Try again\n");
        }
        else if (guess < number) {
            printf("Your guess is to low. Try again\n");
        }
        else {
            success();
            return 0;
        }
    }

    sorry(number);

    return 0;
}