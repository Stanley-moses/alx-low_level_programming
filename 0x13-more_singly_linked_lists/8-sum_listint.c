#include "lists.h"
#include <stdlib.h>

/**
* sum_listint - a function thats prints the sum of elements
* @head: pointer to the first node
* Return: sum of all the data
*/

int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
