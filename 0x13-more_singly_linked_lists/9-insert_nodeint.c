#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the first node of the listint_t list
 *@idx: index position of the node to be inserted
 *@n: value of the new node
 *Return: the listint_t list after the new node has been inserted
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *b;
listint_t *c;

if (*head == NULL && index != 0)
return (NULL);
b = *head;
c = malloc(sizeof(listint_t));
if (c == NULL)
return (NULL);
c->n = n;
if (index == 0)
{
c->next = *head;
*head = c;
return (c);
}
b = *head;
a = 0;
while (a < index - 1)
{
b = b->next;
if (b == NULL)
{
free(c);
return (NULL);
}
a++;
}
c->next = b->next;
b->next = c;
return (c);
}
