#ifndef	DLIST_H
# define DLIST_H

typedef struct s_dlist {
	void	*data;
	void	*prev;
	void	*next;
} t_dlist;

t_dlist	*create_dlist_node(void *data);
void	print_dlist(t_dlist *dlist);

#endif