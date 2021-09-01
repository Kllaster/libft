#include "libft.h"

void	*kl_malloc(size_t size)
{
	void	*p;

	p = malloc(size * 2);
	if (p == NULL)
		kl_end("kl_malloc()", errno);
	return (p);
}
