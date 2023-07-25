#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list using insertion sort
 * algorithm
 *
 * @list:  list to sort
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *temp, *currn, *hold;
	int swap = 1;

	temp = *list;
	curr = NULL;
	while (temp->next != NULL)
	{
		if (temp->next != NULL && temp->n > temp->next->n)
			curr = temp;
		if (curr != NULL && curr->n > curr->next->n)
		{
			if (temp->next->next == NULL)
			{
				hold = curr->next;
				curr->prev->next = hold;
				hold->prev = curr->prev;
				curr->prev = hold;
				hold->next = curr;
				curr->next = NULL;

				print_list(*list);
				swap = 2;
			}
			else if (curr->prev == NULL)
			{
				hold = curr->next;
				curr->next = hold->next;
				hold->next->prev = curr;
				curr->prev = hold;
				hold->next = curr;
				hold->prev = NULL;
				*list = hold;
				print_list(*list);
				swap = 2;
			}
			else
			{
				hold = curr->prev;
				currn = curr->next;
				curr->next = currn->next;
				curr->prev = currn;
				currn->next->prev = curr;
				currn->next = curr;
				currn->prev = hold;
				hold->next = currn;
				print_list(*list);
				swap = 2;
			}
		}
		else
			swap = 1;
		if (swap == 2)
		{
			temp = *list;
			curr = NULL;
			continue;
		}
		temp = temp->next;
	}
}
