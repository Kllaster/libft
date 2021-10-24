#include "libft.h"

void	**arr_add_back(void **arr, void *new_el)
{
	int		i;
	void	**new_arr;

	i = 0;
	if (arr != NULL)
	{
		while ((char *)arr[i] != NULL)
			i++;
	}
	new_arr = kl_malloc(sizeof(void *) * (i + 2));
	i = 0;
	if (arr != NULL)
	{
		while ((char *)arr[i] != NULL)
		{
			new_arr[i] = arr[i];
			i++;
		}
	}
	new_arr[i] = new_el;
	new_arr[i + 1] = NULL;
	if (arr != NULL)
		free(arr);
	return (new_arr);
}
