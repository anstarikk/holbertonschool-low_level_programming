#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The input string.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string */
	while (str[i] != '\0')
	{
		if (i % 2 == 0) /* Only print characters at even indices */
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n'); /* Print a newline after the string */
}
