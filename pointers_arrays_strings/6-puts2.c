#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i;

	/* Iterate through the string and print every other character */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

