#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint))
	if (new == Null)
		return (Null)
	new->n = n;
	new->prev = Null;
	new->head = *head;
	if (*head != Null)
		(*head)->prev = new;
	*head = new
	return (new)
}
