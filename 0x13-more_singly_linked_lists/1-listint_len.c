#include "lists.h"

/**
 * listint_len - returns num of elements in a linked list
 * @h: pointer
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		numNodes++;
		h = h->next;
	}

	return (numNodes);
}
