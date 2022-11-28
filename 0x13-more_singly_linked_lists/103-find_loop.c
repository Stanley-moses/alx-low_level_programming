#include "lists.h"

/**
* find_listint_loop - a function that finds loop in a list
* @head: pointer to the beginning of the list
* Return: address of the start of the loop
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *goat, *sheep;
goat = sheep = head;
while (goat && sheep && sheep->next)
{
goat = goat->next;
sheep = sheep->next->next;
if (goat == sheep)
{
goat = head;
break;
}
}
if (!goat || !sheep || !sheep->next)
return (NULL);
while (goat != sheep)
{
goat = goat->next;
sheep = sheep->next;
}
return (sheep);
}
