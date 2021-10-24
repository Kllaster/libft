#include "libft.h"

void	**arr_remove_el(void **arr, size_t key)
{
	size_t	i;
	size_t	a;
	void	**new_arr;

	i = 0;
	while (arr[i] != NULL)
		i++;
	new_arr = kl_malloc(sizeof(void *) * i - 1);
	i = 0;
	a = 0;
	while (arr[i])
	{
		if (i != key)
		{
			new_arr[a] = arr[i];
			++a;
		}
		else
			free(arr[i]);
		++i;
	}
	new_arr[a] = NULL;
	return (new_arr);
}
