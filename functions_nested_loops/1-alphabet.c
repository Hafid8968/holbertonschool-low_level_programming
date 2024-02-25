#include "main.h"

/**
 * main - Entry point to execute a function printing the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
