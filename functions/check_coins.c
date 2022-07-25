/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_coins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:28:58 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/06 22:25:19 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initialize2(int *x, int *y, int *c)
{
	*x = 0;
	*y = 0;
	*c = 0;
}

int	coin_calc(char **map, int x, int y, int c)
{
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == 'C')
				c++;
			y++;
		}
		x++;
	}
	return (c);
}

int	check_coins(char **map, t_data *game)
{
	int	x;
	int	y;
	int	c;

	initialize2(&x, &y, &c);
	ft_printf("\x1B[37mCoins check :\n");
	c = coin_calc(map, x, y, c);
	if (c == 0)
	{
		ft_printf("\033[0;31m[✖]\nERROR : No Coins in MAP\n");
		return (0);
	}
	else
		game->coinat = c;
	ft_printf("%d Coins Generated\n\033[0;32m[✔]\n", c);
	return (1);
}
