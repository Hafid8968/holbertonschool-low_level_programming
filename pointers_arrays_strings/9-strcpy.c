#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to dest.
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

    return dest;
}
