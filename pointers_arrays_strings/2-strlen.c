#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

int main(void)
{
	char str[] = "Hello, world!";

	int length = _strlen(str);

	printf("The length of the string is: %d\n", length);

	return (0);
}

