/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:10:56 by apending          #+#    #+#             */
/*   Updated: 2020/11/06 15:38:18 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

static char	*ft_getres(char *res, unsigned int num, int len, int flag)
{
	if (!num)
		res[0] = '0';
	else
	{
		while (num)
		{
			res[--len] = (num % 10) + '0';
			num /= 10;
		}
		if (flag)
			res[0] = '-';
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				flag;
	int				len;
	unsigned int	num;

	len = ft_numlen(n);
	flag = 0;
	if (n < 0 || !n)
	{
		if (n < 0)
			flag = 1;
		len += 1;
		n *= -1;
	}
	num = (unsigned int)n;
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[len] = 0;
	return (ft_getres(res, num, len, flag));
}
