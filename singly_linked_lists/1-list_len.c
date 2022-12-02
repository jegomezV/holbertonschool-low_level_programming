#include "lists.h"

/**
 * list_len - len
 *
 * @h: pointer to list
 *
 * Return: count
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
