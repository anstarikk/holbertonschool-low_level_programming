#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by commas and spaces, using only putchar four times.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 8; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('\n');

	return (0);
}
