/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:51:16 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:10:33 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t count)
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
		p1[i] = p2[i];
	return (dest);
}
