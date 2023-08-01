#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end
 * @head: double pointer
 * @n: data to be inserted
 *
 * Return: address(success), NULL(failed)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = newNode;

	return (newNode);
}
