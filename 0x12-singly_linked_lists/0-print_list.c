#include "list.h"
/**
*print_list - prints all the elements and returns the number of nodes.
*@h: singly linked list.
*Return: number of elements in the list.
*/
size_t print_list(const list_t *h)
{
size_t size = 0;
Node *current = NULL;
current = h;
while (current != NULL)
{
if (current->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", current->len, current->str);
current = current->next;
size++;
}
}
return (size);
}
