#include "main.h"

/**
* string_toupper - changes lowercase to uppercase
* @s: string to modify
* Return: the resulting string
*/

char *string_toupper(char *s)
{
int d;
for (d = 0; s[d] != '\0'; d++)
{
if (s[d] >= 'a' && s[d] <= 'z')
s[d] = s[d] - 32;
}
return (s);
}
