// atoi.c

#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Default positive sign

    while (*s != '\0')
    {
        if (*s == '-')
        {
            sign *= -1; // Change sign if a negative sign is encountered
        }
        else if (*s >= '0' && *s <= '9')
        {
            // Accumulate the digit in the result
            result = result * 10 + (*s - '0');
        }
        else if (result != 0)
        {
            // Break if a non-digit is encountered after digits
            break;
        }

        s++;
    }

    return result * sign;
}

