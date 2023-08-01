#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int i;
	listint_t *tmp;
	size_t numNodes = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		i = *h - (*h)->next;

		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			numNodes++;
		}
		else
		{
			free(*h);
			*h = NULL;
			numNodes++;
			break;
		}
	}
	*h = NULL;

	return (numNodes);
}
