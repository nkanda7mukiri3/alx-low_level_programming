#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr;
	listint_t *next;
	size_t numNodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
		numNodes++;
	}

	*h = NULL;

	return (numNodes);
}
