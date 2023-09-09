#include <stdio.h>

/**
 * main - Entry point of the program
 * This function prints in lowercase and uppercase.
 * Return: Always 0 (indicating success)
 */
int main(void)
{

	char lowercase;

	char uppercase;

	lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}


	uppercase = 'A';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;

	}

	putchar('\n');


	return (0);

}
