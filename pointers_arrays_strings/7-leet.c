#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
    int i, j;
    char leet_map[10] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't', '\0', '\0'};

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((s[i] == leet_map[j]) || (s[i] == leet_map[j] - 32))
            {
                s[i] = '0' + j;
                break;
            }
        }
    }

    return s;
}
