#include <stdio.h>

/**
 * main - Entry point to execute a function printing the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	/* Ajout d'un saut de ligne pour une meilleure lisibilité */
	putchar('\n');

	return (0);
}

