/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:50:14 by apending          #+#    #+#             */
/*   Updated: 2020/11/06 17:13:41 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char *b1;
	unsigned char *b2;

	b1 = (unsigned char*)buf1;
	b2 = (unsigned char*)buf2;
	while (count--)
	{
		if (*b1 != *b2)
			return (int)(*b1 - *b2);
		b1++;
		b2++;
	}
	return (0);
}
