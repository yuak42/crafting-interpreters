#include <stdlib.h>

#include "dlist.h"

t_dlist	*create_dlist_node(void *data)
{
	t_dlist	*node;

	node = calloc(1, sizeof(t_dlist));
	if (!node)
		return (NULL);
	node->data = data;
	return (node);
}