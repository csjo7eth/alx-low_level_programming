#include "lists.h"

/**
 * get_nodeint_at_index - function to return index of node
 *
 * @index: index of node to be returned
 *
 * @head: pointer to head of node
 *
 * Return: always successfull
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (index == i)
		{
			tmp = head;
			return (tmp);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
