/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finde_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:18:34 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/11 12:26:36 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_player(char c)
{
	if (c == 'P' || c == 'L' || c == 'M' || c == 'N' || c == 'U')
		return (1);
	return (0);
}

void	finde_player(int *x, int *y, t_data *game)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (game->map[a])
	{
		b = 0;
		while (game->map[a][b])
		{
			if (is_player(game->map[a][b]))
			{
				*x = a;
				*y = b;
				break ;
			}
			b++;
		}
		a++;
	}
}
