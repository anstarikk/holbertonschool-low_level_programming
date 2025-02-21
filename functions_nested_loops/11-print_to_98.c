#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 *
 * Description: Prints all natural numbers from n to 98, followed by a newline.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_to_98(102);
	print_to_98(50);

	return (0);
}
