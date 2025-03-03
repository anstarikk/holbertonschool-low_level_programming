#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str); /* Utilise _putchar au lieu de putchar */
		str++;
	}
	_putchar('\n');
}
