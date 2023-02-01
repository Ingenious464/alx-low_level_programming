#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list, and returns
 *the head node’s data (n)
 *@head: pointer to the linked list's head
 *Return: the value of the head node's data
 */

int pop_listint(listint_t **head)
{
int a = 0;
listint_t *b;

if (*head)
{
a = (*head)->n;
b = *head;
*head = (*head)->next;
free(b);
}
return (a);
}
