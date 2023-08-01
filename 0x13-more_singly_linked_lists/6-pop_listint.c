#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: double pointer
 *
 * Return: head node's data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
