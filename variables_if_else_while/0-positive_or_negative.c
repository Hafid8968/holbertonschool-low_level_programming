#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program generates a random number and determines if it's positive,
 * negative, or zero. The random number is generated each time the program is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number and assign it to the variable n
    n = rand() - RAND_MAX / 2;

    // Check if n is positive, negative, or zero, and print the result
    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n == 0) {
        printf("%d is zero\n", n);
    } else {
        printf("%d is negative\n", n);
    }

    return (0);
}

