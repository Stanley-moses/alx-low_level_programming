#include "main.h"

/**
* _calloc - a function that allocates memory to array
* @nmemb: number of memory spaces
* @size: size of nmemb
* Return: a pointer to allocated space
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a = 0;
char *space;
if (nmemb == 0 || size == 0)
return (NULL);
space = malloc(nmemb * size);
if (space == NULL)
return (NULL);
for (; a < nmemb * size; a++)
*(space + a) = 0;
return (space);
}
