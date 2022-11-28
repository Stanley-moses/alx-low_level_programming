#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - a function that deletes node at the head of a list
* @head: a double pointer
* Return: empty
*/

int pop_listint(listint_t **head)
{
listint_t *start;
int i;
if (head == NULL || *head == NULL)
return (0);
start = *head;
*head = star->next;
n = start->n;
free(start);
return (n);
}
