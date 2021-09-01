#include "libft.h"

t_dlst	*dlst_new(void *content)
{
	t_dlst	*s_dlst;

	s_dlst = kl_malloc(sizeof(t_dlst));
	s_dlst->content = content;
	s_dlst->next = NULL;
	s_dlst->prev = NULL;
	return (s_dlst);
}
