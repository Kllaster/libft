/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:45:20 by apending          #+#    #+#             */
/*   Updated: 2021/08/18 3:51:39 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_split_clear(char **res, int size)
{
	while (--size)
		free(res[size]);
	free(res);
}

static	int	ft_split_size(char *str, char sep)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (i != 0)
			str[i - 1] = '\0';
		if (str[i])
			size++;
		else
			break ;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (size);
}

static	int	ft_split_push(char *str, char c, int size, char **res)
{
	int	i;

	i = 0;
	while (--size)
	{
		while (*str == c)
			str++;
		res[i++] = ft_strdup(str);
		if (!res[i - 1])
		{
			ft_split_clear(res, i - 1);
			return (0);
		}
		while (++str)
		{
			if (*str == 0)
				break ;
		}
		if (size == -1)
			break ;
		else
			++str;
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	char	*s;
	int		size;

	if (str == NULL)
		return (NULL);
	s = ft_strdup(str);
	size = ft_split_size(s, c);
	res = malloc(size * sizeof(char *));
	if (res == NULL)
		return (NULL);
	if (!ft_split_push(s, c, size, res))
		return (NULL);
	free(s);
	return (res);
}
