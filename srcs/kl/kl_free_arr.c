#include "libft.h"

void	kl_free_arr(void *arr)
{
	int	i;

	i = 0;
	while (((char **)arr)[i] != NULL)
	{
		free(((char **)arr)[i]);
		i++;
	}
	free(arr);
}
