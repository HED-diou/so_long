/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:38:41 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/12 16:10:42 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions/so_long.h"

int	find8(t_data *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == '8')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_animate2(t_data *game, int frame, int x)
{
	if (frame == 20)
	{
		mouve_e(game);
		game->coin1_img = mlx_xpm_file_to_image(game->init,
				game->coin4_ptr, &x, &x);
	}
	if (frame == 25)
	{
		mouve_e(game);
		game->coin1_img = mlx_xpm_file_to_image(game->init,
				game->coin5_ptr, &x, &x);
	}
	if (frame == 30)
	{
		mouve_e(game);
		game->coin1_img = mlx_xpm_file_to_image(game->init,
				game->coin6_ptr, &x, &x);
	}
	if (frame == 35)
	{
		mouve_e(game);
		game->coin1_img = mlx_xpm_file_to_image(game->init,
				game->coin7_ptr, &x, &x);
	}
}

void	ft_animate1(t_data *game, int frame, int x)
{
	if (frame == 5)
	{
		mouve_e(game);
		game->coin1_img = mlx_xpm_file_to_image(game->init,
				game->coin1_ptr, &x, &x);
	}
	if (frame == 10)
	{
		mouve_e(game);
		x--;
		game->coin1_img = mlx_xpm_file_to_image(game->init,
				game->coin2_ptr, &x, &x);
		x++;
	}
	if (frame == 15)
	{
		mouve_e(game);
		game->coin1_img = mlx_xpm_file_to_image(game->init,
				game->coin3_ptr, &x, &x);
	}
}

int	ft_norm(t_data *game)
{
	int				x;
	int				y;

	x = 0;
	while (game->map[x])
	{
		y = 0;
		while (game->map[x][y])
		{
			if (game->map[x][y] == 'C' || game->map[x][y] == 'U' \
			|| game->map[x][y] == 'M' ||
					game->map[x][y] == 'N' || game->map[x][y] == 'L')
				print_border_grasse(game, x, y);
			y++;
		}
		x++;
	}
	return (x);
}

int	ft_animate(t_data *game)
{
	int			x;
	static int	frame;

	x = ft_norm(game);
	ft_animate1(game, frame, x);
	ft_animate2(game, frame, x);
	if (frame == 40)
	{
		mouve_e(game);
		game->coin1_img = mlx_xpm_file_to_image(game->init,
				game->coin8_ptr, &x, &x);
		frame = 0;
		if (find8(game))
			game_over("You WIN to save zelda", game, 1);
	}
	frame++;
	print_map_graf(game);
	return (0);
}
