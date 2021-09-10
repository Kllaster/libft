#include "libft.h"

void	dlst_free(t_dlst *s_dlst)
{
	t_dlst	*next;

	if (s_dlst->prev)
		s_dlst->prev->next = NULL;
	while (s_dlst)
	{
		next = s_dlst->next;
		free(s_dlst);
		s_dlst = next;
	}
}
