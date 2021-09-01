#include "libft.h"

void	dlst_add_front(t_dlst **s_dlst_src, t_dlst *s_dlst_new)
{
	if ((*s_dlst_src) == NULL)
	{
		*s_dlst_src = s_dlst_new;
		return ;
	}
	s_dlst_new->next = *s_dlst_src;
	(*s_dlst_src)->prev = s_dlst_new;
	*s_dlst_src = s_dlst_new;
}
