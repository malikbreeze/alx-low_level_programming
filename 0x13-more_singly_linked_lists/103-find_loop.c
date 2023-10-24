#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the beginning of the line
 * Return: address of the node where the loop start or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lp, *hare;

	lp = hare = head;
	while (lp && hare && hare->next)
	{
		lp = lp->next;
		hare = hare->next->next;
		if (lp == hare)
		{
			lp = head;
			break;
		}
	}
	if (!lp || !hare || !hare->next)
		return (NULL);
	while (lp != hare)
	{
		lp = lp->next;
		hare = hare->next;
	}
	return (hare);
}
