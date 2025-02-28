#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);  // _putchar can be used if you want to use your own function
		str++;
	}
	putchar('\n');
}
