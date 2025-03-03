#include "main.h"

/**
 * puts2 - imprime chaque caractère sur deux dans une chaîne,
 *         en commençant par le premier
 * @str: la chaîne de caractères à imprimer
 */
void puts2(char *str)
{
	int i;

	/* Parcours de la chaîne et impression de chaque deuxième caractère */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);  /* Imprime le caractère */
	}

	_putchar('\n'); /* Assure un saut de ligne après l'impression */
}
