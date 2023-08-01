#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: double pointer
 * @index: index to delete
 *
 * Return: 1(success), -1(failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = NULL;
	listint_t *tmp = *head;
	unsigned int j = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (j < index - 1)
	{
		if (tmp == NULL || (tmp->next) == NULL)
		{
			return (-1);
		}

		tmp = tmp->next;
		j++;
	}

	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);
	return (1);
}
