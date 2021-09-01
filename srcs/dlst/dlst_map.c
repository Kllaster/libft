#include "libft.h"

void	dlst_map(t_dlst *s_dlst, void (*func)(void *))
{
	t_dlst	*s_dlst_prev;

	if (s_dlst == NULL)
		return ;
	s_dlst_prev = s_dlst->prev;
	while (s_dlst != s_dlst_prev
		&& (s_dlst_prev && s_dlst != s_dlst_prev->prev))
	{
		func(s_dlst->content);
		s_dlst = s_dlst->next;
		if (s_dlst_prev != NULL)
		{
			func(s_dlst_prev->content);
			s_dlst_prev = s_dlst_prev->prev;
		}
	}
	func(s_dlst->content);
	if ((s_dlst_prev && s_dlst == s_dlst_prev->prev)
		&& s_dlst != s_dlst_prev)
		func(s_dlst_prev->content);
}
