/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:57:10 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:08:02 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return ((size_t)ft_strlen((char *)src));
	else if (!dst)
		return (0);
	while (src[i] && (size - 1) > i)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = 0;
	return ((size_t)ft_strlen((char *)src));
}
