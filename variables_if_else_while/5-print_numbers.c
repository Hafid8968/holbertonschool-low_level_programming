#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}

	putchar('\n');

	return (0);
}

