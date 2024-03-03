#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int length, start_index;

	length = 0;

	while (str[length] != '\0')
	length++;

	if (length % 2 == 0)
	{
	start_index = length / 2;

	while (str[start_index] != '\0')
	{
	_putchar(str[start_index]);
	start_index++;
	}
	}
	else
	{
	start_index = (length + 1) / 2;

	while (str[start_index] != '\0')
	{
	_putchar(str[start_index]);
	start_index++;
	}
	}

	_putchar('\n');
}

