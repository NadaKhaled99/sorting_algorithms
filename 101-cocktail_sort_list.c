#include "sort.h"
/**
*swapme-swap nodes themselves
*@current:ptr
*@current_old:ptr
*@list:doubly linked list
*/
void swapme(listint_t *current, listint_t *current_old, listint_t **list)
{
	listint_t *tmp1 = current->next;
	listint_t *tmp2 = current_old->prev;
	if (tmp1 != NULL)
	{
		temp1->prev = current_old;
	}
	if (tmp2 != NULL)
	{
		tmp2->next = current;
	}
	current->prev = tmp2;
	current_old->next = tmp1;
	current->next = current_old;
	current_old->prev = current;
	if (*list == current_old)
	{
		*list = current;
	}
	print_list(*list);
}
/**
*cocktail_sort_list-cocktail_sort_list
*@list:doubly linked list
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *k = *list, *first = NULL, *last = NULL;
	if (!list)
	{	
		return;
	}
	if (!(*list))
	{
		return;
	}
	if (!(*list)->next)
	{
		return;
	}
	do {
		while (k->next)
		{
			if (k->n > k->next->n)
				swapme(k->next, k, list);
			else
				k = k->next;
		}
		last = k;
		while (k->prev != first)
		{
			if (k->n < k->prev->n)
				swapme(k, k->prev, list);
			else
				k = k->prev;
		}
		first = k;
	} while (first != last);
}
