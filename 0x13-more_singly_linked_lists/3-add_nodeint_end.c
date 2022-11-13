#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - Adds a new node at
 *	the end of a listint_t list
 * @head: A pointer to the first node of
 * the listint_t list
 * @n: The integer for the new node to dontain
 * Return: If the function fails - NULL
 * Otherwise - the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr, *last;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = ptr;
	}

	return (*head);
}
