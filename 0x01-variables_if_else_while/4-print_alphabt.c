#include <stdio.h>

/**
 * main - Entry point of the program
 * function prints the lowercase alphabet, excluding 'q' and 'e'.
 * Return: Always 0 (indicating success)
 */
int main(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
