#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *current;
current = malloc(sizeof(listint_t));
if (current == NULL)
{
return (NULL);
}
current->n = n;
current->next = *head;
*head = current;
return (*head);
}
