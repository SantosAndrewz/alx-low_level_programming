#include "main.h"
/**
 * cap_string - capitalizes all words of the string.
 * @a: the input string,
 *
 * Return: a pointer to the modified string.
 */
char *cap_string(char *a)
{
int i = 0;

while (str[++i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
i++;
if (str[i-1] == ' ' ||
	str [i -1] == ' ' ||
	str [i -1] == '\t'||
	str [i -1] == '\n'||
	str [i -1] == ';' ||
	str [i -1] == '?' ||
	str [i -1] == '.' ||
	str [i -1] == '{' ||
	str [i -1] == '}' ||
	str [i -1] == '(' ||
	str [i -1] == ')' ||
	str [i -1] == '"' ||
	str [i -1] == '!' ||
	str [i -1] == ',' ||
i == 0;
str[i] -= 32;
i++;
}
return (str);
}
