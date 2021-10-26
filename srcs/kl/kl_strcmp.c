#include "libft.h"

int	kl_strcmp(char *str1, char *str2)
{
	int	len1;

	len1 = ft_strlen(str1);
	if (len1 == ft_strlen(str2) && ft_strncmp(str1, str2, ft_strlen(str1)) == 0)
		return (0);
	return (1);
}
