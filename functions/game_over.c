/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_over.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:25:43 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/12 17:35:19 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	game_over(char *r, t_data *game, int status)
{
	ft_printf("%d moove\n", game->cmp + 1);
	if (status == 0)
	{
		ft_printf("\033[0;31m~[ GAME OVER : %s ]~\n", r);
	}
	else if (status == 1)
	{
		ft_printf("\033[0;32m~[ GAME OVER : %s ]~\n", r);
	}
	print_terminal_decoration(0);
	free(game);
	exit(1);
}
/* system("killall afplay"); */
/*system("afplay map/lose.mp3");*/
/*system("afplay map/win.mp3");*/
/*system("killall afplay");*/
