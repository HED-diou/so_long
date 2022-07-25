/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:51:27 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/12 16:10:52 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*itoi2(char *str, int n, int i)
{
	unsigned int	j;

	j = 0;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		j = n * -1;
	}
	else
		j = n;
	while (j > 0)
	{
		str[i] = (j % 10) + '0';
		j = j / 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*str;

	i = len(n);
	if (n == 0)
		i += 1;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i = i - 1;
	return (itoi2(str, n, i));
}
