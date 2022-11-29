#include "lists.h"

/**
 * sum_listint - returns the sium of all the data (n) of a linked lsi
 * @head: head of a list
 *
 * return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum=0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
