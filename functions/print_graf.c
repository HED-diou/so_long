/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_graf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:39:04 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/12 16:11:52 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_graf_1(t_data *game, int x, int y)
{
	if (game->map[x][y] == '0')
		print_border_grasse(game, x, y);
	if (game->map[x][y] == 'P')
		mlx_put_image_to_window(game->init, game->win,
			game->hero_init_img, y * 32, x * 32);
	if (game->map[x][y] == 'U')
		mlx_put_image_to_window(game->init, game->win,
			game->hero_bas_img, y * 32, x * 32);
	if (game->map[x][y] == 'L')
		mlx_put_image_to_window(game->init, game->win,
			game->hero_haut_img, y * 32, x * 32);
	if (game->map[x][y] == 'M')
		mlx_put_image_to_window(game->init, game->win,
			game->hero_droite_img, y * 32, x * 32);
}

void	print_graf_2(t_data *game, int x, int y)
{
	if (game->map[x][y] == 'N')
		mlx_put_image_to_window(game->init, game->win,
			game->hero_gauche_img, y * 32, x * 32);
	if (game->map[x][y] == 'E')
		mlx_put_image_to_window(game->init, game->win,
			game->dor_close_img, y * 32, x * 32);
	if (game->map[x][y] == 'O')
		mlx_put_image_to_window(game->init, game->win,
			game->dor_open_img, y * 32, x * 32);
	if (game->map[x][y] == 'C')
		mlx_put_image_to_window(game->init, game->win,
			game->coin1_img, y * 32, x * 32);
	if (game->map[x][y] == 'X')
		mlx_put_image_to_window(game->init, game->win,
			game->ennemie1_img, y * 32, x * 32);
	if (game->map[x][y] == '8')
		mlx_put_image_to_window(game->init, game->win,
			game->hero_portal_img, y * 32, x * 32);
}
