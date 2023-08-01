#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numNodes++;
		h = h->next;
	}

	return (numNodes);
}
