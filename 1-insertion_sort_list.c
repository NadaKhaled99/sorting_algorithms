#include "sort.h"
/**
* insertion_sort_list - insertion sorting algorithm
* @list: linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
listint_t *t;
int y;
if (!list)
return;
t = *list;
while (t)
{
while (t)
{
if (t->next)
{
if (tmp->y > tmp->next->y)
{
y = t->y;
*(int *)&t->y = t->next->y;
*(int *)&t->next->y = y;
t = *list;
print_list(*list);
break;
}
}
t = t->next;
}
}
}
