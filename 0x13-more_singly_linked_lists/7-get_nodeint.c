#include "lists.h"
/**
 * get_nodeint_at_index - return the nth element of a node
 * @head: head of a node
 * @index: position of the element
 * Return: the nth element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	register uint count = 0;

	current = head;
	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
