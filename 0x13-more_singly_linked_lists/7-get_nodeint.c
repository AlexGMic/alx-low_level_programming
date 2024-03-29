#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
current = head;
if (head == NULL)
{
return (NULL);
}
else
{
while (index--)
{
current = current->next;
if (current == NULL)
{
return (0);
}
}
}
return (current);
}
