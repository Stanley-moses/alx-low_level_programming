#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* list_len - a function that returns the number of elements
* @h: name of the list
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
int count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
