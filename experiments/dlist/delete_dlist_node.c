#include <stdlib.h>
#include <stdio.h>

#include "dlist.h"

int	delete_dlist_node(t_dlist *del)
{
	t_dlist	*prev;
	t_dlist	*next;

	if (!del)
		return (printf("Error: delete_dlist_node, cannot delete NULL\n"), 1);
	prev = del->prev;
	next = del->next;
	if (prev)
		prev->next = del->next;
	if (next)
		next->prev = del->prev;
	free(del->data);
	free(del);
	return (0);
}