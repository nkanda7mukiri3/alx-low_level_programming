#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	else
	{
		tmp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL:
}
