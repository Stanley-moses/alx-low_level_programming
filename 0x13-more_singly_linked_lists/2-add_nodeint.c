#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - a function that adds a node at the beginning of a list
* @head: head of double pointer
* @n: int to add to list
* Return: NULL on failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
if (head == NULL)
return (NULL);
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = *head;
*head = ptr;
return (ptr);
}
