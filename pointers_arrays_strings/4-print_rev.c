#include "main.h"

/**
 * _puts_reverse - Prints a string in reverse followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
 */
void _puts_reverse(char *str)
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
