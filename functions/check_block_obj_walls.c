/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_block_obj_walls.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:04:57 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/06 22:21:29 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_block(char **map, int x, int y)
{
	if (map[x][y] == '1' || map[x][y] == '0' || map[x][y] == 'P'
		|| map[x][y] == 'E' || map[x][y] == 'X' || map[x][y] == 'C')
	{
		return (1);
	}
	return (0);
}

int	check_obj(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	ft_printf("\x1B[37mObjects check :\n");
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (!check_block(map, x, y))
			{
				ft_printf("\033[0;31m[✖]\nERROR : UNKNOW OBJECT\n");
				ft_printf(" x : %d y : %d\n", x, y);
				return (0);
			}
		y++;
		}
		x++;
	}
	ft_printf("\033[0;32m[✔]\n");
	return (1);
}

int	check_ext(char *str)
{
	int	j;

	ft_printf("\x1B[37mExtention check :\n");
	j = ft_strlen(str) - 1;
	if (str[j] == 'r' && str[j - 1] == 'e' && str[j - 2] == 'b')
	{
		if (str[j - 3] == '.')
		{
			ft_printf("\033[0;32m[✔]\n");
			return (1);
		}
	}
	ft_printf("\033[0;31m[✖]\nERROR : Exitention\n");
	return (0);
}
