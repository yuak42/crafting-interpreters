#include <stdio.h>

#include "dlist.h"

int	insert_dlist_front(t_dlist *dlist, t_dlist *front)
{
	if (!dlist)
		return (printf("Error: insert_dlist_front, dlist cannot be NULL\n"), 1);
	if (!front)
		return (printf("Error: insert_dlist_front, front cannot be NULL\n"), 1);
	while (dlist->next)
		dlist = dlist->next;
	dlist->next = front;
	front->prev = dlist;
	front->next = NULL;
	return (0);
}