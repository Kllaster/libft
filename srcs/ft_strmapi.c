/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:24:42 by apending          #+#    #+#             */
/*   Updated: 2020/11/06 15:32:07 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*res;

	if (!s)
		return (0);
	i = -1;
	len = ft_strlen((char *)s);
	res = malloc(len + 1 * sizeof(char));
	if (res == NULL)
		return (0);
	res[len] = 0;
	while (s[++i])
		res[i] = f(i, s[i]);
	return (res);
}
