#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Finds the number of elements in
 * a linked listint_t list
 * @h: The linked listint_t list
 *
 * Return: The number of elements in h.
 */
size_t listint_len(const listint_t *h)
{
	size_t elementsInH = 0;

	while (h)
	{
		elementsInH++;
		h = h->next;
	}

	return (elementsInH);
}
