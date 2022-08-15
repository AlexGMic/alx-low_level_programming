#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index to insert the node
 * @n: new node data
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current;
listint_t *newNode;
current = *head;
if (current == NULL && idx != 0)
{
return (NULL);
}
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
idx = idx - 1;
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
}
while (idx--)
{
current = current->next;
}
newNode->next = current->next;
current->next = newNode;
return (newNode);
}
