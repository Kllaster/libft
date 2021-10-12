#include "libft.h"

char	*kl_strjoin_free(char *s1, char *s2)
{
	char	*res;

	if (s2 == NULL)
		return (s1);
	res = ft_strjoin(s1, s2);
	if (s1)
		free(s1);
	free(s2);
	return (res);
}
