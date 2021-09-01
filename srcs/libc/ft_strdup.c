/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:55:16 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:13:14 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	char	*p;
	size_t	size;

	size = (size_t)ft_strlen((char *)str) + 1;
	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (0);
	p = res;
	while (*str)
	{
		*res = *str;
		str++;
		res++;
	}
	*res = 0;
	return (p);
}
