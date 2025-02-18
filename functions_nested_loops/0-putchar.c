#include "main.h"

/**
 * main - Prints "_putchar", followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "_putchar";
    int i = 0;

    /* Print each character of the string */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    /* Print new line */
    _putchar('\n');

    return (0);
}

