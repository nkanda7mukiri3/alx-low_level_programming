#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node at end
 * @head: double pointer
 * @str: string to add to new
 *
 * Return: address(success),null(fail)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	newNode = malloc(sizeof(list_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = len;
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
