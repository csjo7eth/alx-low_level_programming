#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function to add node from top
 *
 * @heas: listint_t typr of node struct pointer to head
 *
 * @n: constant int type
 *
 * Return: Always seccessful
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *top = NULL;

	top = malloc(sizeof(listint_t));
	if (top == NULL)
	{
		return (NULL);
	}
	top->n = n;
	top->next = *head;
	*head = top;
	return (*head);
}
