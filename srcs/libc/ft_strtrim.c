/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:02:03 by apending          #+#    #+#             */
/*   Updated: 2020/11/13 17:53:34 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char str_c, char *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == str_c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char		*res;
	int			i;
	int			start;
	int			end;

	if (!str)
		return (NULL);
	end = ft_strlen((char *)str) - 1;
	start = 0;
	while (str[start] && ft_checkset(str[start], (char *)set))
		start++;
	while (end != -1 && str[end] && ft_checkset(str[end], (char *)set))
		end--;
	if (end == -1)
		return (ft_calloc(1, sizeof(char)));
	res = ft_calloc((end - start) + 2, sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while ((start + i) <= end)
	{
		res[i] = str[start + i];
		i++;
	}
	return (res);
}
