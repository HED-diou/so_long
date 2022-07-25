/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map_terminal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:29:32 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/10 16:45:55 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	print_map_terminal(t_data *game)
{
	int	x;

	x = 0;
	while (game->map[x])
	{
		ft_printf("%s\n", game->map[x]);
		x++;
	}
}
