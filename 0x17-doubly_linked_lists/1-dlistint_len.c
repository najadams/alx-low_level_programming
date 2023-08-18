root@afa14b5bb6ca:/alx-old/alx-low_level_programming/0x17-doubly_linked_lists# cat 0-print_dlistint.c
#include "lists.h"
#include <stdio.h>
/**
* size_t dlistint_len - Prints all the elements of a dlistint_t list.
* @h: Pointer to the head of the doubly linked list.
* Return: The number of nodes in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != Null)
	{
		h = h->next;
		count++;
	}
	return (count)
}
