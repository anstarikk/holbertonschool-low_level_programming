#include "main.h"
#include <stdio.h>

int main(void)
{
	int x = 98, y = 42;

	printf("Before: x = %d, y = %d\n", x, y);
	swap_int(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);
	return (0);
}

