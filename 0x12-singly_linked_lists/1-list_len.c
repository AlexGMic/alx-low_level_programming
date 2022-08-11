#include "list.h"
/**
*list_len - returns the number of elements in the linked list.
*@h: is the head of the list.
*Return: the number of elements.
*/
size_t list_len(const list_t *h)
{
size_t size = 0;
const list_t *current = NULL;
current = h;
while (current != NULL)
{
current = current->next;
size++;
}
return (size);
}
