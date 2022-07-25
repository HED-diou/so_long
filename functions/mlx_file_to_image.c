/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_file_to_image.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:22:49 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/12 16:11:16 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_mlx_file_to_image2(t_data *game, int x)
{
	game->coin5_img = mlx_xpm_file_to_image(game->init,
			game->coin5_ptr, &x, &x);
	game->coin6_img = mlx_xpm_file_to_image(game->init,
			game->coin6_ptr, &x, &x);
	game->coin7_img = mlx_xpm_file_to_image(game->init,
			game->coin7_ptr, &x, &x);
	game->coin8_img = mlx_xpm_file_to_image(game->init,
			game->coin8_ptr, &x, &x);
	game->ennemie1_img = mlx_xpm_file_to_image(game->init,
			game->ennemie1_ptr, &x, &x);
	game->lfo9_lymn_img = mlx_xpm_file_to_image(game->init,
			game->lfo9_lymn_ptr, &x, &x);
	game->lfo9_lysr_img = mlx_xpm_file_to_image(game->init,
			game->lfo9_lysr_ptr, &x, &x);
	game->lte7t_lymn_img = mlx_xpm_file_to_image(game->init,
			game->lte7t_lymn_ptr, &x, &x);
	game->lte7t_lysr_img = mlx_xpm_file_to_image(game->init,
			game->lte7t_lysr_ptr, &x, &x);
	game->hero_portal_img = mlx_xpm_file_to_image(game->init,
			game->hero_portal_ptr, &x, &x);
	game->img_start1_img = mlx_xpm_file_to_image(game->init,
			game->img_start1_ptr, &x, &x);
	game->img_start2_img = mlx_xpm_file_to_image(game->init,
			game->img_start2_ptr, &x, &x);
}

void	ft_mlx_file_to_image3(t_data *game, int x)
{
	game->hero_droite_img = mlx_xpm_file_to_image(game->init,
			game->hero_droite_ptr, &x, &x);
	game->hero_gauche_img = mlx_xpm_file_to_image(game->init,
			game->hero_gauche_ptr, &x, &x);
	game->dor_close_img = mlx_xpm_file_to_image(game->init,
			game->dor_close_ptr, &x, &x);
	game->dor_open_img = mlx_xpm_file_to_image(game->init,
			game->dor_open_ptr, &x, &x);
	game->coin1_img = mlx_xpm_file_to_image(game->init,
			game->coin1_ptr, &x, &x);
	game->coin2_img = mlx_xpm_file_to_image(game->init,
			game->coin2_ptr, &x, &x);
	game->coin3_img = mlx_xpm_file_to_image(game->init,
			game->coin3_ptr, &x, &x);
	game->coin4_img = mlx_xpm_file_to_image(game->init,
			game->coin4_ptr, &x, &x);
	game->img_start5_img = mlx_xpm_file_to_image(game->init,
			game->img_start5_ptr, &x, &x);
	game->img_start6_img = mlx_xpm_file_to_image(game->init,
			game->img_start6_ptr, &x, &x);
	game->img_start3_img = mlx_xpm_file_to_image(game->init,
			game->img_start4_ptr, &x, &x);
	game->img_start4_img = mlx_xpm_file_to_image(game->init,
			game->img_start4_ptr, &x, &x);
}

void	ft_constract2(t_data *game)
{
	game->img_start1_ptr = "assets/img_start1.xpm";
	game->img_start2_ptr = "assets/img_start2.xpm";
	game->img_start3_ptr = "assets/img_start3.xpm";
	game->img_start4_ptr = "assets/img_start4.xpm";
	game->img_start5_ptr = "assets/img_start5.xpm";
	game->img_start6_ptr = "assets/img_start6.xpm";
	game->coin1_ptr = "assets/coin1.xpm";
	game->coin2_ptr = "assets/coin2.xpm";
	game->coin3_ptr = "assets/coin3.xpm";
	game->coin4_ptr = "assets/coin4.xpm";
	game->coin5_ptr = "assets/coin5.xpm";
	game->coin6_ptr = "assets/coin6.xpm";
	game->coin7_ptr = "assets/coin7.xpm";
	game->coin8_ptr = "assets/coin8.xpm";
	game->ennemie1_ptr = "assets/ennemie1.xpm";
	game->hero_portal_ptr = "assets/hero_portal.xpm";
}

void	ft_mlx_file_to_image(t_data *game, int x)
{
	game->win = mlx_new_window(game->init,
			(game->width) * 32, (game->height) * 32, "Z E L D A");
	game->wall_img = mlx_xpm_file_to_image(game->init,
			game->wall_ptr, &x, &x);
	game->wall1_img = mlx_xpm_file_to_image(game->init,
			game->wall1_ptr, &x, &x);
	game->grasse_img = mlx_xpm_file_to_image(game->init,
			game->grasse_ptr, &x, &x);
	game->grasse_lfo9_img = mlx_xpm_file_to_image(game->init,
			game->grasse_lfo9_ptr, &x, &x);
	game->grasse_left_img = mlx_xpm_file_to_image(game->init,
			game->grasse_left_ptr, &x, &x);
	game->grasse_lte7t_img = mlx_xpm_file_to_image(game->init,
			game->grasse_lte7t_ptr, &x, &x);
	game->grasse_lymn_img = mlx_xpm_file_to_image(game->init,
			game->grasse_lymn_ptr, &x, &x);
	game->hero_init_img = mlx_xpm_file_to_image(game->init,
			game->hero_init_ptr, &x, &x);
	game->hero_bas_img = mlx_xpm_file_to_image(game->init,
			game->hero_bas_ptr, &x, &x);
	game->hero_haut_img = mlx_xpm_file_to_image(game->init,
			game->hero_haut_ptr, &x, &x);
	ft_mlx_file_to_image2(game, x);
	ft_mlx_file_to_image3(game, x);
}

void	ft_constract(t_data *game)
{
	game->init = mlx_init();
	game->walls_printed = 0;
	game->lfo9_lymn_ptr = "assets/lfo9_lymn.xpm";
	game->lfo9_lysr_ptr = "assets/lfo9_lysr.xpm";
	game->lte7t_lymn_ptr = "assets/lte7t_lymn.xpm";
	game->lte7t_lysr_ptr = "assets/lte7t_lysr.xpm";
	game->wall_ptr = "assets/wall.xpm";
	game->wall1_ptr = "assets/wall2.xpm";
	game->grasse_lfo9_ptr = "assets/grasse_border_lfo9.xpm";
	game->grasse_lte7t_ptr = "assets/grasse_border_lte7t.xpm";
	game->grasse_lymn_ptr = "assets/grasse_border_lymn.xpm";
	game->grasse_left_ptr = "assets/grasse_border_left.xpm";
	game->grasse_ptr = "assets/grasse.xpm";
	game->hero_init_ptr = "assets/hero_init.xpm";
	game->hero_bas_ptr = "assets/hero_bas.xpm";
	game->hero_droite_ptr = "assets/hero_droite.xpm";
	game->hero_haut_ptr = "assets/hero_haut.xpm";
	game->hero_gauche_ptr = "assets/hero_gauche.xpm";
	game->dor_close_ptr = "assets/dor_close.xpm";
	game->dor_open_ptr = "assets/dor_open.xpm";
	ft_constract2(game);
}
