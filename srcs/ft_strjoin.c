/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:56:02 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:13:26 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	len1;
	size_t	len2;
	char	*res;

	if (!s1)
		return (0);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	size = len1 + len2 + 1;
	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memmove((void *)res, (const void *)s1, len1);
	ft_memmove((void *)(res + len1), (const void *)s2, len2);
	*(res + size - 1) = 0;
	return (res);
}
