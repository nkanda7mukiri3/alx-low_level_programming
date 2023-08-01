#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning
 * @head: double pointer
 * @n: data to be inserted
 *
 * Return: address(success), NULL(fail)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
