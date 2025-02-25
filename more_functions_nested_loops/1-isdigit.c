#include <stdio.h>
#include "main.h"  // Assurez-vous d'inclure main.h pour déclarer _isdigit

int main(void)
{
    char c = '5';
    printf("%c: %d\n", c, _isdigit(c));  // Appel à la fonction _isdigit
    return 0;
}
