/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    /* Loop through each character in the string until the null terminator is encountered */
    while (s[length] != '\0')
    {
        length++;
    }

    return length;
}

