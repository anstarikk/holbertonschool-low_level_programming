#include "main.h"

/**
 * _puts - imprime une chaîne de caractères suivie d'une nouvelle ligne
 * @str: chaîne de caractères à imprimer
 */
void _puts(char *str)
{
	while (*str)  /* Tant que le caractère actuel n'est pas '\0' */
	{
		putchar(*str);  /* Affiche le caractère courant */
		str++;          /* Passe au caractère suiva
