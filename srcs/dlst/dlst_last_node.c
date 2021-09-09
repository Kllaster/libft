#include "libft.h"

t_dlst	*dlst_last_node(t_dlst *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}
