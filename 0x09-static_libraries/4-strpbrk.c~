#include "main.h"

/**
* _strpbrk - a function that searches a string for a set of bytes
* @s: first ocurrence in the string
* @accept: acceptance statement
* Return: a pointer to the byte
*/

char *_strpbrk(char *s, char *accept)
{
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return (NULL);
}
