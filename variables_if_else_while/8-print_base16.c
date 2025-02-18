#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase, followed by
 * a new line, using only putchar three times.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char hex_digits;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (hex_digits = 'a'; hex_digits <= 'f'; hex_digits++)
	{
		putchar(hex_digits);
	}

	putchar('\n');

	return (0);
}

