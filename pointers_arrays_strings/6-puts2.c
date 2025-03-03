#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i;

	/* Loop through the string and print every other character */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);  /* Print the current character */
	}

	_putchar('\n'); /* Print a new line after printing the string */
}
