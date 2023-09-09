#include <stdio.h>

/**
 * main - Entry point of the program
 * This function prints all possible combinations of single-digit numbers.
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
