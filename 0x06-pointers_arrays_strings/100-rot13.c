#include "main.h"

/**
* rot13 - encodes a string in rot13
* @s: string to be encoded
* Return: the resulting string
*/

char *rot13(char *s)
{
int c, d;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (c = 0; *(s + c); c++)
{
for (d = 0; d < 52; d++)
{
if (a[d] == *(s + c))
{
*(s + c) = b[d];
break;
}
}
}
return (s);
}
