#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign;
	unsigned int result;

	sign = 1;
	result = 0;

	do {
	if (*s == '-')
	{
	sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
	result = (result * 10) + (*s - '0');
	}
	else if (result > 0)
	{
	break;
	}

	} while (*s++);

	return (result * sign);
}

