#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dlist.h"

int	main(void)
{
	t_dlist	*cur; // cursor

	cur = create_dlist_node(strdup("deneme"));
	if (!cur)
		return (printf("Error: create_dlist_node\n"), 1);
	
	if (insert_dlist_front(cur, create_dlist_node(strdup("Hey!"))))
		return (free_dlist(cur), 1);
	if (insert_dlist_front(cur, create_dlist_node(strdup("Hello World!"))))
		return (free_dlist(cur), 1);
	if (insert_dlist_back(cur, create_dlist_node(strdup("This should be back"))))
		return (free_dlist(cur), 1);
	
	print_dlist(cur);

	printf("\nLet's delete 'Hey!' node\n\n");
	if (delete_dlist_node(cur->next))
		return (free_dlist(cur), 1);

	print_dlist(cur);

	free_dlist(cur);
	return (0);
}
