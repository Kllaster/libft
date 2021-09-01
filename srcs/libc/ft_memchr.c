/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:48:59 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:07:12 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		if (*(unsigned char *)arr == (unsigned char)c)
			return ((void *)arr);
		++arr;
		++i;
	}
	return (0);
}
