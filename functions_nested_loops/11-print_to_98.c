#include <stdio.h>
 #include "main.h"
 
 /**
  * print_to_98 - Prints all natural numbers from n to 98.
  * @n: The starting number.
  *
  * Return: Nothing.
  */
 void print_to_98(int n)
 {
     if (n <= 98)
     {
         for (; n < 98; n++)
         {
             printf("%d, ", n);
         }
         printf("%d\n", 98);
     }
     else
     {
         for (; n > 98; n--)
         {
             printf("%d, ", n);
         }
         printf("%d\n", 98);
     }
 }
