#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, tests print_sign function
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 10;
	int n2 = 0;
	int n3 = -5;

	printf("%d: ", n1);
	print_sign(n1);  /* Devrait afficher + et retourner 1 */

	printf("\n%d: ", n2);
	print_sign(n2);  /* Devrait afficher 0 et retourner 0 */

	printf("\n%d: ", n3);
	print_sign(n3);  /* Devrait afficher - et retourner -1 */

	return (0);
}
