#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void print_rev(char *s)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    while (length > 0)
    {
        length--;
        _putchar(str[length]);
    }

    _putchar('\n');
} 
