/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:53:54 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:10:13 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t	i;
	char	*p;

	p = (char *)buf;
	i = 0;
	while (i != count)
	{
		p[i] = ch;
		i++;
	}
	return (buf);
}
