#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The string to be printed
 */
void puts_half(char *str)
{
    int length = _strlen(str);
    int i, start_index;

    if (length % 2 == 0)
    {
        start_index = length / 2;
    }
    else
    {
        start_index = (length - 1) / 2 + 1;
    }

    for (i = start_index; i < length; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}

