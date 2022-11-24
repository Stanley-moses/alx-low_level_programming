#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#incluse "lists.h"

/**
* free_list - a function that frees list
* @head: a pointer to the first node
*/

void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
