#include <stdio.h>
#include <string.h>

#include "dlist.h"

t_dlist	*find_dlist_node(t_dlist *dlist, char *data)
{
	t_dlist *backward;

	backward = dlist->prev;
	while (dlist)
	{
		if (!strcmp(dlist->data, data))
			return (dlist);
		dlist = dlist->next;
	}
	while (backward)
	{
		if (!strcmp(backward->data, data))
			return (backward);
		backward = backward->prev;
	}
	return (NULL);
}