#include "lists.h"

/**
 * list_len - num of elements list
 * @h: pointer to structure
 * return: length
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while
		(h != NULL)
		{
			i++;
			h = h->next;
		}
	return (i);
}
