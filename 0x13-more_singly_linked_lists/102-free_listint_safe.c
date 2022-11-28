#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _ra - a function that reallocates memory to an array of pointer
* @list: the old list to append
* @size: size of the new list
* @new: new node to add to the list
* Return: pointer to the new list
*/

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
listint_t **newlist;
size_t i;
newlist = malloc(size * sizeof(listint_t *));
if (newlist == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
newlist[i] = list[i];
newlist[i] = new;
free(list);
return (newlist);
}

/**
* free_listint_safe - a function that frees a linked list
* @h: double pointer to the start of the list
* Return: number of niodes in the list
*/

size_t free_listint_safe(listint_t **h)
{
size_t i, num = 0;
listint_t **list = NULL;
listint_t *next;
if (h == NULL || *h == NULL)
return (num);
while (*h != NULL)
{
for (i = 0; i < num; i++)
{
if (*h == list[i])
{
*h = NULL;
free(list);
return (num);
}
}
num++;
list = _ra(list, num, *h);
next = (*h)->next;
free(*h);
*h = next;
}
free(list);
return (num);
}
