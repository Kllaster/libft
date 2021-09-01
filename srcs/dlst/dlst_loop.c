#include "libft.h"

void	dlst_loop(t_dlst **s_dlst)
{
	t_dlst	*last;

	last = *s_dlst;
	while (last->next)
		last = last->next;
	last->next = *s_dlst;
	(*s_dlst)->prev = last;
}
