#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The input string.
 */
void puts2(char *str)
{
	int length, index;

	length = 0;

	while (str[length] != '\0')
	{
	length++;
	}

	for (index = 0; index < length; index += 2)
	{
	_putchar(str[index]);
	}

	_putchar('\n');
}

