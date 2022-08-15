#include "lists.h"
/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *ptr = NULL;
ptr = h;
if (h == NULL)
{
printf("Empty list");
}
else
{
while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
count++;
}
}
return (count);
}
