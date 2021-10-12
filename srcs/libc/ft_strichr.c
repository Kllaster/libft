#include "libft.h"

int	ft_strichr(char *str, int sumb)
{
	int	i;

	if (!str)
		return (-1);
	i = -1;
	while (str[++i])
	{
		if (str[i] == (char)sumb)
			return (i);
	}
	return (-1);
}
