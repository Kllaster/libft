#include "libft.h"

void	arr_cpy(void **dest, void **src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = NULL;
}
