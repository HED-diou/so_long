/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:46:19 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/06 17:23:01 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions/so_long.h"

int	ft_putstr(const char *c)
{
	int	i;

	i = 0;
	if (c == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}
