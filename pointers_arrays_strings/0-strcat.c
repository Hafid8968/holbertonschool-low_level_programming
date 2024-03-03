#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (dest[len] != '\0')
	len++;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[len] = src[i];
	len++;
	}

	dest[len] = '\0';

	return (dest);
}
