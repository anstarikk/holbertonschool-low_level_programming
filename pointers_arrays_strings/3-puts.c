#include <stdio.h>

/**
 * _puts - imprime une chaîne de caractères suivie d'une nouvelle ligne
 * @str: chaîne de caractères à imprimer
 */
void _puts(char *str)
{
	while (*str)  /* Tant que le caractère actuel n'est pas '\0' */
	{
		putchar(*str);  /* Affiche le caractère courant */
		str++;          /* Passe au caractère suivant */
	}
	putchar('\n');  /* Imprime une nouvelle ligne à la fin */
}

int main(void)
{
	char str[] = "Hello, world!";

	_puts(str);  /* Appelle la fonction _puts pour imprimer la chaîne */

	return (0);
}
