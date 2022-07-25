/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map_graf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:26:08 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/12 16:11:42 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_walls(t_data *game, int x, int y)
{
	int	a;
	int	b;

	check_mine(&a, &b, game->map);
	if (x == 0 || y == 0)
	{
		mlx_put_image_to_window(game->init, game->win,
			game->wall_img, y * 32, x * 32);
	}
	else if (y == a - 1 || x == b - 1)
	{
		mlx_put_image_to_window(game->init, game->win,
			game->wall_img, y * 32, x * 32);
	}
	else
	{
		mlx_put_image_to_window(game->init, game->win,
			game->wall1_img, y * 32, x * 32);
	}
}

void	print_border_grasse1(t_data *game, int x, int y, char c)
{
	if (c == 'L')
		mlx_put_image_to_window(game->init, game->win, \
			game->lfo9_lysr_img, y * 32, x * 32);
	if (c == 'm')
		mlx_put_image_to_window(game->init, game->win, \
			game->lfo9_lymn_img, y * 32, x * 32);
	if (c == 'y')
		mlx_put_image_to_window(game->init, game->win, \
			game->lte7t_lysr_img, y * 32, x * 32);
	if (c == 'E')
		mlx_put_image_to_window(game->init, game->win, \
			game->lte7t_lymn_img, y * 32, x * 32);
	if (c == 'H')
		mlx_put_image_to_window(game->init, game->win, \
			game->grasse_left_img, y * 32, x * 32);
	if (c == 'F')
		mlx_put_image_to_window(game->init, game->win, \
			game->grasse_lfo9_img, y * 32, x * 32);
}

void	print_border_grasse(t_data *game, int x, int y)
{
	int	a;
	int	b;

	check_mine(&a, &b, game->map);
	if (x == 1 && y == 1)
		print_border_grasse1(game, x, y, 'L');
	else if (x == 1 && y == a - 2)
		print_border_grasse1(game, x, y, 'm');
	else if (x == b - 2 && y == 1)
		print_border_grasse1(game, x, y, 'y');
	else if (x == b - 2 && y == a - 2)
		print_border_grasse1(game, x, y, 'E');
	else if (y == 1)
		print_border_grasse1(game, x, y, 'H');
	else if (x == 1)
		print_border_grasse1(game, x, y, 'F');
	else if (x == b - 2)
		mlx_put_image_to_window(game->init, game->win, \
			game->grasse_lte7t_img, y * 32, x * 32);
	else if (y == a - 2)
		mlx_put_image_to_window(game->init, game->win, \
			game->grasse_lymn_img, y * 32, x * 32);
	else
		mlx_put_image_to_window(game->init, game->win, \
			game->grasse_img, y * 32, x * 32);
}

void	print_ess(t_data *game, int x, int y)
{
	if (game->map[x][y] == '1')
		print_walls(game, x, y);
	game->walls_printed++;
}

void	print_map_graf(t_data *game)
{
	char	*res;
	char	*coin;
	int		x;
	int		y;

	x = -1;
	res = ft_itoa(game->cmp);
	res = ft_strjoin("Mouves : ", res);
	coin = ft_itoa(game->coinat);
	coin = ft_strjoin("Coins : ", coin);
	while (game->map[++x])
	{
		y = -1;
		while (game->map[x][++y])
		{
			print_ess(game, x, y);
			print_graf_1(game, x, y);
			print_graf_2(game, x, y);
			game->walls_printed = 0;
			mlx_string_put(game->init, game->win, 0, 0, 0xFFFF, res);
			mlx_string_put(game->init, game->win, 200, 0, 0x71E1D1, coin);
		}
	}
	free(res);
	free(coin);
}
