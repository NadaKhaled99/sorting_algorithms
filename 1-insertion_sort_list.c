#include "sort.h"
/**
*insertion_sort_list-insertion sorting
*@list:linked list 
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	int y;

	if (!list)
		return;
	tmp = *list;
	while (tmp)
	{
		while (tmp)
		{
			if (tmp->next)
			{
				if (tmp->y > tmp->next->y)
				{
					y = tmp->y;
					*(int *)&tmp->y = tmp->next->y;
					*(int *)&tmp->next->y = y;
					tmp = *list;
					print_list(*list);
					break;
				}
			}
			tmp = tmp->next;
		}
	}
}
