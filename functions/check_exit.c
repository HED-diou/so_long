/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:25:26 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/06 22:09:20 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initialize(int *x, int *y, int *c)
{
	*x = 0;
	*y = 0;
	*c = 0;
}

int	check_exit(char **map)
{
	int	x;
	int	y;
	int	c;

	initialize(&x, &y, &c);
	ft_printf("\x1B[37mExit check :\n");
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == 'E')
				c++;
			y++;
		}
		x++;
	}
	if (c == 0)
	{
		ft_printf("\033[0;31m[✖]\nEROOR : No Exit in MAP\n");
		return (0);
	}
	ft_printf("\033[0;32m[✔]\n");
	return (1);
}
