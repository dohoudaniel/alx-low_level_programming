#include "lists.h"
#include <string.h>

/**
 * add_nodeint - Adds a new node at the beginning
 *            of a listint_t list.
 * @head: A pointer to the address of the
 *	head of the listint_t list.
 * @n: The integer for the new node to contain
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
