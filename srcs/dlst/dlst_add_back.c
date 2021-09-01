#include "libft.h"

void	dlst_add_back(t_dlst **s_dlst_src, t_dlst *s_dlst_new)
{
	t_dlst	*s_dlst_last;

	if ((*s_dlst_src) == NULL)
	{
		*s_dlst_src = s_dlst_new;
		return ;
	}
	s_dlst_last = *s_dlst_src;
	while (s_dlst_last->next)
		s_dlst_last = s_dlst_last->next;
	s_dlst_last->next = s_dlst_new;
}
