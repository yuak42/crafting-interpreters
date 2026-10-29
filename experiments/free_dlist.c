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
		dlist = dlist->next;
		free(forward->data);
		free(forward);
		forward = dlist;
	}
	while (backward)
	{
		dlist = dlist->prev;
		free(backward->data);
		free(backward);
		backward = dlist->prev;
	}
}