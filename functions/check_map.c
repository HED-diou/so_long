/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:24:30 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/07 14:01:07 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_size(char **str)
{
	int	x;
	int	y;
	int	k;

	x = ft_strlen(str[0]);
	y = 0;
	k = 1;
	ft_printf("\x1B[37mSize check :  \n");
	while (str[k])
	{
		y = ft_strlen(str[k]);
		if (y != x)
		{
			ft_printf("\033[0;31m[✖]\nERROR : MAP INVALIDE\n");
			return (0);
		}
		k++;
	}
	ft_printf("\033[0;32m[✔]\n");
	return (1);
}

int	check_colm(char **str, int x)
{
	int	a;

	a = 0;
	ft_printf("\x1B[37mColumns check :  ");
	while (str[a])
	{
		if (str[a] && str[a][x] != '1')
		{
			ft_printf("\033[0;31m[✖]\nERROR : COLUMN\n");
			ft_printf(" x :%d Y : %d\n", a, x);
			return (0);
		}
		a++;
	}
	ft_printf("\033[0;32m[✔]\n");
	return (1);
}

int	check_line(char **str, int x)
{
	int	a;

	a = 0;
	ft_printf("\x1B[37mLines check   :  ");
	while (str[x][a])
	{
		if (str[x][a] != '1')
		{
			ft_printf("\033[0;31m[✖]\nERROR : LIGNE\n");
			ft_printf(" x :%d y : %d\n", a, x);
			return (0);
		}
		a++;
	}
	ft_printf("\033[0;32m[✔]\n");
	return (1);
}

int	check_walls(char **str)
{
	int	x;
	int	y;

	ft_printf("\033[0;33m[-----   Walls check  -----]\n");
	check_mine(&x, &y, str);
	y--;
	x--;
	if (x > y)
	{
		if (check_line(str, 0) && check_line(str, y) && check_colm(str, x))
		{
			if (check_colm(str, 0))
			{
				ft_printf("\033[0;33m[-----  Walls checked -----]\n");
				return (1);
			}
		}
	}
	else
	{
		ft_printf("\033[0;31m[✖]\nERROR : MAP DIMENTION\n");
		return (0);
	}
	return (0);
}

int	check_map(char **map, t_data *game, char *map_ext)
{
	if (check_ext(map_ext) && check_size(map) && check_walls(map))
	{
		if (check_player(map) && check_exit(map) && check_coins(map, game))
		{
			if (check_obj(map))
			{
				ft_printf("\033[0;32mMAP sucessfuly checked \n");
				return (1);
			}
		}
	}
	return (0);
}
