/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:59:01 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:12:59 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *dst, int sumb)
{
	int		len;
	char	*res;

	res = 0;
	len = ft_strlen(dst) + 1;
	while (len--)
	{
		if (*dst == (char)sumb)
			res = dst;
		dst++;
	}
	return (res);
}
