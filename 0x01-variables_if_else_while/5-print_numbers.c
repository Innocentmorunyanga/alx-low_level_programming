#include <stdio.h>

/**
 * main - Entry point of the program
 * function prints all single digit numbers in base 10.
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d\n", number);
		number++;
	}

	return 0;
}
