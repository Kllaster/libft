/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:52:57 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:10:43 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t count)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = -1;
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)source;
	if (dest == source)
		return (dest);
	if (dest > source)
	{
		while (count--)
			p1[count] = p2[count];
	}
	else
	{
		while (++i != count)
			p1[i] = p2[i];
	}
	return (dest);
}
