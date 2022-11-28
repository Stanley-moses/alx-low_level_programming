#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - a function that gets nth node of a list
* @head: pointer of the first node
* @index: index of the node
* Return: pointer of index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;
if (head == NULL)
return (NULL);
for (a = 0; a < index; a++)
{
head = head->next;
if (head == NULL)
return (NULL);
}
return (head);
}
