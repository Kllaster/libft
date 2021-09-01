/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:54:35 by apending          #+#    #+#             */
/*   Updated: 2020/11/03 21:23:10 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int sumb)
{
	int	len;

	len = ft_strlen(str) + 1;
	while (len--)
	{
		if (*str == (char)sumb)
			return (str);
		str++;
	}
	return (0);
}
