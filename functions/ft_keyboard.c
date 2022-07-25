/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyboard.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:19:51 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/11 18:57:05 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_dor(t_data *game)
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
			if (game->map[x][y] == 'E')
				game->map[x][y] = 'O';
			y++;
		}
		x++;
	}
}

int	find_8(t_data *game)
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

void	ft_keya(t_data *game, int x, int y, int key)
{
	if (key == 2 && game->map[x][y + 1] != '1')
	{
		if (game->map[x][y + 1] == 'E' && game->coinat != 0)
			ft_printf("more coins\n");
		else
			mouve_lymn(game, x, y);
	}
	else if (key == 1 && game->map[x + 1][y] != '1')
	{
		if (game->map[x + 1][y] == 'E' && game->coinat != 0)
			ft_printf("more coins\n");
		else
			mouve_lte7t(game, x, y);
	}
}

void	ft_keyb(t_data *game, int x, int y, int key)
{
	if (key == 0 && game->map[x][y - 1] != '1')
	{
		if (game->map[x][y - 1] == 'E' && game->coinat != 0)
			ft_printf("more coins\n");
		else
			mouve_lysr(game, x, y);
	}
	else if (key == 13 && game->map[x - 1][y] != '1')
	{
		if (game->map[x - 1][y] == 'E' && game->coinat != 0)
			ft_printf("more coins\n");
		else
			mouve_lfo9(game, x, y);
	}
}

int	ft_keyboard(int key, t_data *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	finde_player(&x, &y, game);
	if (!find_8(game))
	{
		if (key == 53)
		{
			ft_printf("\033[0;33m~[ GAME OVER : ESCAPE ]~\n");
			free(game);
			system("killall afplay zeldamusic.mp3");
			exit(1);
		}
		else
		{		
			ft_keya(game, x, y, key);
			ft_keyb(game, x, y, key);
		}
	}
	if (game->coinat == 0)
		open_dor(game);
	return (0);
}
