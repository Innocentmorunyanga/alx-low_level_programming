#include "main.h"

/**
 * _strlen - checks the length of string
 * @s: _string to be checked
 * Return: The lenght of the string
 */

int _strlen(char *s)

{

	int string_length = 0;
	while (s[string_length])
		string_length++;
	return (string_length);
}
