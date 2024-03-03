#include "main.h"

/**
 * _strcpy - Copies src to dest buffer.
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int length, index;

	length = 0;

	while (src[length] != '\0')
	{
	length++;
	}

	for (index = 0; index < length; index++)
	{
	dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}
