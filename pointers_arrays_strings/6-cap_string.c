#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *s)
{
	int x, i;

	char let[32] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',

	for (i = 0; s[i] != '\0'; i++)
	{
	if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] -= 32;
	}

	for (x = 0; x < 13; x++)
	{
	if (s[i] == let[x])
	{
	if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
	{
	s[i + 1] -= 32;
	}
	}
	}
	}

	return (s);
}

