#include <stdio.h>

#include "dlist.h"

int	insert_dlist_back(t_dlist *dlist, t_dlist *back)
{
	if (!dlist)
		return (printf("Error: insert_dlist_back, dlist cannot be NULL\n"), 1);
	if (!back)
		return (printf("Error: insert_dlist_back, back cannot be NULL\n"), 1);
	while (dlist->prev)
		dlist = dlist->prev;
	dlist->prev = back;
	back->next = dlist;
	back->prev = NULL;
	return (0);
}