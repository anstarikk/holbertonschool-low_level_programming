#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Swap characters from front to back */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
