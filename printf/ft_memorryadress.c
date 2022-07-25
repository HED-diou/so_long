/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memorryadress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:45:34 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/06 17:23:20 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions/so_long.h"

int	ft_memorryadress(unsigned long long num)
{
	int	i;

	ft_putstr("0x");
	i = ft_adress(num);
	return (hexcount(num) + 2);
}
