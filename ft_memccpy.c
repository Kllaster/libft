/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:48:40 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:12:28 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (dest == source)
		return (dest);
	i = -1;
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)source;
	while (++i != count)
	{
		p1[i] = p2[i];
		if (p2[i] == (unsigned char)ch)
			return ((void *)&(p1[i + 1]));
	}
	return (0);
}
