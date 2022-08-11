#include "list.h"
/**
*add_node_end - add a new node at the end of the list.
*@head: is the first element of the list.
*@str: is the input string to be added to the list.
*
*Return: the address of the new element on sucess.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *temp;
size_t nchar;

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
for (nchar = 0; str[nchar]; nchar++);
newNode->len = nchar;
newNode->next = NULL;
temp = *head;
if (temp == NULL)
{
*head = newNode;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
}
return (*head);
}
