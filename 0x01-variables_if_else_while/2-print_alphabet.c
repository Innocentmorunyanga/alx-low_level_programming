#include <stdio.h>
/**
 * main - Entry point of the program
 * This function prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (indicating success)
 */
int main(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{

		putchar(letter);
		letter++;

	}

	putchar('\n');

	return (0);
}
