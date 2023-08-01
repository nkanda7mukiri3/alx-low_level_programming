#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given pstn
 * @head: double pointer
 * @idx: index where new node should be added
 * @n: data to be insterted
 *
 * Return: new node address, NULL(fail)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;
	unsigned int j;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || head == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (j = 0; tmp != NULL && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		else
		{
			tmp = tmp->next;
		}
	}

	return (NULL);
}
