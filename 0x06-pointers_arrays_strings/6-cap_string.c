#include "main.h"

/**
* cap_string - capitalizes every word of a string
* @s: string to modify
* Return: the resulting string
*/

char *cap_string(char *s)
{
int c = 0, d;
char a[] = " \t\n,;.!?\"(){}";

while (*(s + c))
{
if (*(s + c) >= 'a' && *(s + c) <= 'z')
{
if (c == 0)
*(s + c) -= 'a' - 'A';
else
{
for (d = 0; d <= 12; d++)
{
if (a[d] == *(s + c - 1))
*(s + c) -= 'a' - 'A';
}
}
}
c++;
}
return (s);
}
