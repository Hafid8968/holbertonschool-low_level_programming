#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	int x, i;

	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
	for (i = 0; i < 10; i++)
	{
	if (s[x] == leet_chars[i])
	{
	s[x] = leet_replacements[i];
	break;
	}
	}
	}

	return (s);
}
