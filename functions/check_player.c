/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:34:40 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/06 22:24:49 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initialize1(int *x, int *y, int *c)
{
	*x = 0;
	*y = 0;
	*c = 0;
}

int	find_player(char **map, int x, int y, int c)
{
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == 'P')
			{
				c++;
				if (c == 2)
				{
					ft_printf("\033[0;31m[✖]\nERROR : are you serious ?\n");
					return (0);
				}
			}
			y++;
		}
		x++;
	}
	if (c == 0)
	{
		ft_printf("\033[0;31m[✖]\nERROR : Where is Link ?????\n");
		return (0);
	}
	ft_printf("\033[0;32m[✔]\n");
	return (1);
}

int	check_player(char **map)
{
	int	x;
	int	y;
	int	c;

	initialize1(&x, &y, &c);
	ft_printf("\x1B[37mPlayer check :\n");
	return (find_player(map, x, y, c));
}
