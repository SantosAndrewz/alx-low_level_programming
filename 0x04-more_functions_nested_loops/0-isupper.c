#include "main.h"
/**
 * _isupper - checks characters for a uppercase
 * @c: represents the character that is checked.
 *
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
