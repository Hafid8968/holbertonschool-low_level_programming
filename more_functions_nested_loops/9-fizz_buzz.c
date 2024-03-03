#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints numbers from 1 to 100 with Fizz for multiples of three,
 *              Buzz for multiples of five, and FizzBuzz for multiples of both
 *              three and five. Each number or word is separated by a space.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}


