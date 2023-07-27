#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at beginning
 * @head: double pointer
 * @str: string to add
 *
 * Return: address(success),null(fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
