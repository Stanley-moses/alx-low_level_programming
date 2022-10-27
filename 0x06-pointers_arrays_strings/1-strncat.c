#include "main.h"

/**
* _strncat - concatenates n bytes from a string to another
* @dest: destination string
* @src: source string
* @n: number of byts of string to concatenate
* Return: a pointer to the resulting string destination
*/

char *_strncat(char *dest, char *src, int n)
{
int c, d;
c = 0;
d = 0;
while (dest[c] != '\0')
c++;
while (src[d] != '\0' && d < n)
{
dest[c] = src[d];
c++;
d++;
}
dest[c] = '\0';
return (dest);
}
