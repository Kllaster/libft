/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:58:44 by apending          #+#    #+#             */
/*   Updated: 2020/11/12 20:08:49 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t i;
	size_t z;

	i = 0;
	if (!*little || big == little)
		return ((char *)big);
	while (big[i] && i < size)
	{
		if (big[i] == little[0])
		{
			z = 0;
			while (little[z] && big[i + z] == little[z] && (i + z) < size)
			{
				if (!little[1 + z])
					return ((char *)&big[i]);
				z++;
			}
		}
		++i;
	}
	return (0);
}
