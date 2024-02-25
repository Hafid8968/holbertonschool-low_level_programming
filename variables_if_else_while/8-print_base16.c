#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;
	char numbers;

	for (alphabet = 0; alphabet <= 9; alphabet++)
	{
		putchar('0' + alphabet);
	}

	for (numbers = 'a'; numbers <= 'f'; numbers++)
	{
		putchar(numbers);
	}

	putchar('\n');

	return (0);
}


