/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:03:09 by apending          #+#    #+#             */
/*   Updated: 2020/11/13 17:52:01 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	strlen;

	if (!s)
		return (0);
	if (start > (strlen = ft_strlen((char *)s)))
		return (ft_strdup(""));
	if (!(res = malloc((len + 1) * sizeof(char))))
		return (0);
	*(res + len) = 0;
	ft_memcpy(res, (const void *)s + start, len);
	return (res);
}
