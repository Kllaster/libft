#include "libft.h"

t_dlst	*dlst_last_node(t_dlst *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
