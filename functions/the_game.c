/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:59:00 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/11 17:21:28 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	the_game(t_data *game, int x, char **map, char *path)
{
	if (!check_map(map, game, path))
	{
		ft_printf("\033[0;31m MAP ERROR : Execution abort\n");
		exit(1);
	}
	check_mine(&(game->width), &(game->height), map);
	ft_constract(game);
	ft_mlx_file_to_image(game, x);
	print_terminal_decoration(1);
	mlx_hook(game->win, 2, 1, ft_keyboard, game);
	mlx_hook(game->win, 17, 0, ft_exit, game);
	mlx_loop_hook(game->init, ft_animate, game);
	mlx_loop(game->init);
	free(game->init);
}
