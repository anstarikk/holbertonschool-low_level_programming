#include "main.h"

/**
* _isupper - Vérifie si le caractère est une majuscule.
* @c: Le caractère à vérifier.
*
* Return: 1 si c est une majuscule, sinon 0.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
