#include <stdlib.h>

#include "dlist.h"

void	free_dlist(t_dlist *dlist)
{
	t_dlist	*forward;
	t_dlist *backward;

	forward = dlist;
	backward = dlist->prev;
	while (forward)
	{
		forward = forward->next;
		free(dlist->data);
		free(dlist);
		dlist = forward;
	}
	dlist = backward;
	while (backward)
	{
		backward = backward->prev;
		free(dlist->data);
		free(dlist);
		dlist = backward;
	}
}