#include <stdio.h>
#include "lists.h"

/**
 * ptint_listint - function to print all elements
 * @h: pointer to the list.
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *linode = h;
	size_t incr = 0;


	while (linode)
	{
		printf("%i\n", linode->n);
		incr++;
		linode = linode->next;
	}

	return (incr);
}
