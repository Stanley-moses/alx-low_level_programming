#include "main.h"

/**
* _memcpy - a function that copies n bytes from memory area src
* to memory area dest
* @n: function copies
* @src: bytes from source
* @dest: destination of bytes
* Return: a pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 0;
while (a < n)
{
dest[a] = src[a];
a++;
}
return (dest);
}
