#include "lists.h"

/**
 * sum_listint - returns sum of all data
 * @head: pointer
 *
 * Return: sum of data, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int Sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		Sum += tmp->n;
		tmp = tmp->next;
	}

	return (Sum);
}
