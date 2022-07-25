/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uconvert.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:46:46 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/06 17:22:45 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions/so_long.h"

unsigned int	uconvert(long long num)
{
	long long	x;

	x = 4294967296;
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		num = num * -1;
		x = num - x;
		ft_putnbr(x, 1);
	}
	else
		ft_putnbr(num, 1);
	return (ft_len(num));
}
