#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int x = '0';

	while (x <= '9')
	{
		_putchar(x++);
	}
	_putchar('\n');
}
