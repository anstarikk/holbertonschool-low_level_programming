#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, tests _islower function
 *
 * Return: Always 0
 */
int main(void)
{
	char c1 = 'a';
	char c2 = 'Z';

	printf("%c: %d\n", c1, _islower(c1)); /* Doit afficher 1 */
	printf("%c: %d\n", c2, _islower(c2)); /* Doit afficher 0 */

	return (0);
}
