#include <stdio.h>

/**
 * reset_to_98 - Updates the value the pointer points to, to 98.
 * @n: Pointer to the integer to be updated.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - Test the reset_to_98 function.
 * Return: Always 0.
 */
int main(void)
{
	int n = 402;

	printf("Before: %d\n", n);
	reset_to_98(&n);
	printf("After: %d\n", n);
	return (0);
}
