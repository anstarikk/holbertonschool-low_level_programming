#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, tests print_last_digit function
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 123;
	int n2 = -456;
	int n3 = 0;

	printf("Last digit of %d: ", n1);
	print_last_digit(n1);  /* Devrait afficher 3 */

	printf("\nLast digit of %d: ", n2);
	print_last_digit(n2);  /* Devrait afficher 6 */

	printf("\nLast digit of %d: ", n3);
	print_last_digit(n3);  /* Devrait afficher 0 */

	return (0);
}
