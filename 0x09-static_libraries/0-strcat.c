#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to append to
* @src: string to add
* Return: a pointer to the returning string
*/

char *_strcat(char *dest, char *src)
{
int c, d;
c = 0;
d = 0;
while (dest[c] != '\0')
c++;
while (src[d] != '\0')
{
dest[c] = src[d];
d++;
c++;
}
dest[c] = '\0';
return (dest);
}
