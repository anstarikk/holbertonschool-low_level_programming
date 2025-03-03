#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string to print
 *
 * Description: This function prints the second half of the string.
 * If the string length is odd, it prints the last n characters,
 * where n is (length_of_string + 1) / 2.
 */
void puts_half(char *str)
{
	int len = 0;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;

	/* If length is even, start from the middle */
	if (len % 2 == 0)
		str = str + len / 2;
	else
		str = str + (len + 1) / 2;

	/* Print the second half of the string */
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
