/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:45:20 by apending          #+#    #+#             */
/*   Updated: 2020/11/12 19:42:39 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_clearres(char **res, int size)
{
	while (--size)
		free(res[size]);
	free(res);
}

static	void	ft_getsize(char *str, char c, int *size)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
			i++;
		if (str[i] != 0)
		{
			(*size)++;
			if (i > 0)
				str[i] = 0;
		}
		else
		{
			if (str[i - 1] != c)
				(*size)++;
			else if ((*size) == 2)
				(*size)++;
			break ;
		}
		i++;
	}
}

static	int		ft_pushsplitstr(char *str, char c, int size, char **res)
{
	int i;

	i = 0;
	while (--size)
	{
		while (*str == c)
			str++;
		res[i++] = ft_strdup(str);
		if (!res[i - 1])
		{
			ft_clearres(res, i - 1);
			return (0);
		}
		while (++str)
			if (*str == 0)
				break ;
		if (size == -1)
			break ;
		else
			++str;
	}
	res[i] = 0;
	return (1);
}

char			**ft_split(char const *s, char c)
{
	int		size;
	char	*str;
	char	**res;

	if (!s || !(str = ft_strdup(s)))
		return (0);
	size = 1;
	ft_getsize(str, c, &size);
	if (!(res = malloc(size * sizeof(char *))))
		return (0);
	if (!ft_pushsplitstr(str, c, size, res))
		return (0);
	free(str);
	return (res);
}
