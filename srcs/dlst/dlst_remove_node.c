#include "libft.h"

void	dlst_remove_node(t_dlst	*node)
{
	t_dlst	*prev;
	t_dlst	*next;

	prev = node->prev;
	next = node->next;
	free(node);
	if (prev)
		prev->next = next;
	if (next)
		next->prev = prev;
}
