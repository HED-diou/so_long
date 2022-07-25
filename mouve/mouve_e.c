/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve_e.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:34:26 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/11 14:52:24 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions/so_long.h"

void	mouve_e_lymn(t_data *game, int x, int y)
{
	if (game->map[x][y + 1] != '1' && game->map[x][y + 1] != 'X' &&
			game->map[x][y + 1] != 'C' &&
			game->map[x][y + 1] != 'E' && game->map[x][y + 1] != 'O' &&
			game->map[x][y + 1] != '8' && game->map[x][y + 1] == '0')
	{
		if (game->map[x][y + 1] == 'P' || game->map[x][y + 1] == 'U' ||
			game->map[x][y + 1] == 'L' || game->map[x][y + 1] == 'M' ||
			game->map[x][y + 1] == 'N')
		{
			game_over("You lose to save zelda", game, 0);
		}
		game->map[x][y] = '0';
		y++;
		game->map[x][y] = 'X';
	}
}

void	mouve_e_lte7t(t_data *game, int x, int y)
{
	if (game->map[x + 1][y] != '1' && game->map[x + 1][y] != 'X' &&
		game->map[x + 1][y] != 'C' && game->map[x + 1][y] != 'E' &&
		game->map[x + 1][y] != 'O' && game->map[x + 1][y] != '8' &&
		game->map[x + 1][y] == '0')
	{
		if (game->map[x + 1][y] == 'P' || game->map[x + 1][y] == 'U' ||
			game->map[x + 1][y] == 'L' || game->map[x + 1][y] == 'M' ||
			game->map[x + 1][y] == 'N')
		{
			game_over("You lose to save zelda", game, 0);
		}
		game->map[x][y] = '0';
		x++;
		game->map[x][y] = 'X';
	}
}

void	mouve_e_lysr(t_data *game, int x, int y)
{
	if (game->map[x][y - 1] != '1' && game->map[x][y - 1] != 'X' &&
		game->map[x][y - 1] != 'C' && game->map[x][y - 1] != 'E' &&
		game->map[x][y - 1] != 'O' && game->map[x][y - 1] != '8' &&
		game->map[x][y - 1] == '0')
	{
		if (game->map[x][y - 1] == 'P' || game->map[x][y - 1] == 'U' ||
			game->map[x][y - 1] == 'L' || game->map[x][y - 1] == 'M' ||
			game->map[x][y - 1] == 'N')
		{
			game_over("You lose to save zelda", game, 0);
		}
		game->map[x][y] = '0';
		y--;
		game->map[x][y] = 'X';
	}
}

void	mouve_e_lfo9(t_data *game, int x, int y)
{
	if (game->map[x - 1][y] != '1' && game->map[x - 1][y] != 'X' &&
		game->map[x - 1][y] != 'C' && game->map[x - 1][y] != 'E' &&
		game->map[x - 1][y] != 'O' && game->map[x - 1][y] != '8' &&
		game->map[x - 1][y] == '0')
	{
		if (game->map[x - 1][y] == 'P' || game->map[x - 1][y] == 'U' ||
			game->map[x - 1][y] == 'L' || game->map[x - 1][y] == 'M' ||
			game->map[x - 1][y] == 'N')
		{
			game_over("You lose to save zelda", game, 0);
		}
		game->map[x][y] = '0';
		x--;
		game->map[x][y] = 'X';
	}
}

void	mouve_e(t_data *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (game->map[x])
	{
		y = 0;
		while (game->map[x][y])
		{
			if (game->map[x][y] == 'X')
			{
				if (rand() % 4 == 0)
					mouve_e_lysr(game, x, y);
				else if (rand() % 4 == 1)
					mouve_e_lymn(game, x, y);
				else if (rand() % 4 == 2)
					mouve_e_lfo9(game, x, y);
				else
					mouve_e_lte7t(game, x, y);
			}
			y++;
		}
		x++;
	}
}
