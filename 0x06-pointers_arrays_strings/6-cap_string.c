#include "main.h"
/**
 * cap_string - capitalizes all words of the string.
 * @str: the input string.
 *
 * Return: a pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++
for (' ', '\t', '\n', ';', '?', '.', '{', '}', '(', ')', '"', '!', ',')
{
if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ';' || str[i - 1] == '?' || str[i - 1] == '.' ||
str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '(' ||
str[i - 1] == ')' || str[i - 1] == '"' || str[i - 1] == '!' ||
str[i - 1] == ',')
{
str[i] = str[i] - 32;
}
}
i++
}
return (str);
}
