#include "libft.h"

char	*kl_strdup_len(const char *str, size_t len)
{
	char	*res;
	size_t	i;

	res = kl_malloc((len + 1) * sizeof(char));
	i = -1;
	while (++i < len)
		res[i] = str[i];
	res[i] = '\0';
	return (res);
}
