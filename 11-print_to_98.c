#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting point
 *
 * Description: This function prints all natural numbers from the given
 * starting point 'n' up to 98, separated by commas and spaces.
 * It prints in ascending order if n is less than or equal to 98,
 * and in descending order if n is greater than 98.
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
for (i = n; i >= 98; i--)

{
printf("%d", i);
if (i != 98)
printf(", ");
		
}

}
printf("\n");
}
