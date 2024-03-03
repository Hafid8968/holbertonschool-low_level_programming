#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;

	while (dest[dest_len])
	dest_len++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
	dest[dest_len] = src[i];
	dest_len++;
	}

	dest[dest_len] = '\0';

	return (dest);
}

