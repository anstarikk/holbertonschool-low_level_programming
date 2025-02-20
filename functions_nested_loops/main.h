#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    /* Si n est négatif, le rendre positif */
    if (n < 0)
    {
        n = -n;
    }

    /* Récupérer le dernier chiffre */
    last_digit = n % 10;

    /* Afficher le dernier chiffre */
    _putchar(last_digit + '0');  /* Convertir en caractère et l'afficher */

    return (last_digit);
}
