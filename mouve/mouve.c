/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:02:29 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/11 21:00:19 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../functions/so_long.h"

void	mouve_lymn(t_data *game, int x, int y)
{
	if (game->map[x][y + 1] == 'X')
		game_over("You lose to save zelda", game, 0);
	if (game->map[x][y + 1] == 'C')
	{
		ft_printf("{coin collected , %d}\n", game->coinat);
		game->coinat = game->coinat - 1;
	}
	if (game->map[x][y + 1] == 'O')
	{
		game->map[x][y] = '0';
		y++;
		game->map[x][y] = '8';
	}
	else
	{
		ft_printf("%d moove\n", game->cmp);
		game->map[x][y] = '0';
		y++;
		game->map[x][y] = 'N';
		game->cmp = game->cmp + 1;
	}
}

void	mouve_lte7t(t_data *game, int x, int y)
{
	if (game->map[x + 1][y] == 'X')
		game_over("You lose to save zelda", game, 0);
	if (game->map[x + 1][y] == 'C')
	{
		ft_printf("{coin collected , %d}\n", game->coinat);
		game->coinat = game->coinat - 1;
	}
	if (game->map[x + 1][y] == 'O')
	{
		game->map[x][y] = '0';
		x++;
		game->map[x][y] = '8';
	}
	else
	{
		ft_printf("%d moove\n", game->cmp);
		game->map[x][y] = '0';
		x++;
		game->map[x][y] = 'U';
		game->cmp = game->cmp + 1;
	}
}

void	mouve_lysr(t_data *game, int x, int y)
{
	if (game->map[x][y - 1] == 'X')
		game_over("You lose to save zelda", game, 0);
	if (game->map[x][y - 1] == 'C')
	{
		ft_printf("{coin collected , %d}\n", game->coinat);
		game->coinat = game->coinat - 1;
	}
	if (game->map[x][y - 1] == 'O')
	{
		game->map[x][y] = '0';
		y--;
		game->map[x][y] = '8';
	}
	else
	{
		ft_printf("%d moove\n", game->cmp);
		game->map[x][y] = '0';
		y--;
		game->map[x][y] = 'M';
		game->cmp = game->cmp + 1;
	}
}

void	mouve_lfo9(t_data *game, int x, int y)
{
	if (game->map[x - 1][y] == 'X')
		game_over("You lose to save zelda", game, 0);
	if (game->map[x - 1][y] == 'C')
	{
		ft_printf("{coin collected , %d}\n", game->coinat);
		game->coinat = game->coinat - 1;
	}
	if (game->map[x - 1][y] == 'O')
	{
		game->map[x][y] = '0';
		x--;
		game->map[x][y] = '8';
	}
	else
	{
		ft_printf("%d moove\n", game->cmp);
		game->map[x][y] = '0';
		x--;
		game->map[x][y] = 'L';
		game->cmp = game->cmp + 1;
	}
}
