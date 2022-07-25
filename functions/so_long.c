/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:08:59 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/12 17:48:22 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit(void)
{
	print_terminal_decoration(1);
	ft_printf("\033[0;33m~[ GAME IS OVER ]~\n");
	exit(0);
	return (0);
}

void	print_terminal_decoration(int x)
{
	if (x == 1)
	{
		ft_printf("\033[0;33m~[ MAP GENERATED : STARTING TO PLAY ]~\n");
		ft_printf("     (                           ");
		ft_printf("                                     \n");
		ft_printf("     _)_           +++           ");
		ft_printf("_/7           ===           ___      \n");
		ft_printf("    (o o)         (o o)         ");
		ft_printf("(o o)         (o o)         (o o)     \n");
		ft_printf("ooO--(_)--Ooo-ooO--(_)--Ooo-ooO--");
		ft_printf("(_)--Ooo-ooO--(_)--Ooo-ooO--(_)--Ooo-\n");
	}
	else
	{
		ft_printf("     (                           ");
		ft_printf("                                     \n");
		ft_printf("     _)_           +++           ");
		ft_printf("_/7           ===           ___      \n");
		ft_printf("    (o o)         (o o)         ");
		ft_printf("(o o)         (o o)         (o o)     \n");
		ft_printf("ooO--(_)--Ooo-ooO--(_)--Ooo-ooO--");
		ft_printf("(_)--Ooo-ooO--(_)--Ooo-ooO--(_)--Ooo-\n");
	}
}

int	main(int argc, char **argv)
{
	t_data	*game;
	char	**map;
	char	*str;
	int		fd;
	int		x;

	fd = open(argv[1], 0);
	if (fd == -1)
	{
		perror("\033[0;31mERROR");
		return (0);
	}
	game = malloc(sizeof(t_data));
	argc = 1;
	x = 32;
	str = NULL;
	if (!read_map(fd, &str))
	{
		free(game);
		return (0);
	}
	map = ft_split(str, '\n');
	game->map = map;
	the_game(game, x, map, argv[1]);
}
