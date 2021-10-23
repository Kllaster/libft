#include "libft.h"

void	*kl_calloc(size_t num, size_t size)
{
	void	*res;

	res = kl_malloc(num * size);
	if (res == NULL)
		return (0);
	ft_memset(res, 0, num * size);
	return (res);
}
