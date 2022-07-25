/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:59:32 by hed-diou          #+#    #+#             */
/*   Updated: 2022/02/12 15:57:47 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*              :::    ::: :::::::::: :::::::::                               */
/*             :+:    :+: :+:        :+:    :+:                               */
/*            +:+    +:+ +:+        +:+    +:+                                */
/*           +#++:++#++ +#++:++#   +#+    +:+                                 */
/*          +#+    +#+ +#+        +#+    +#+                                  */
/*         #+#    #+# #+#        #+#    #+#                                   */
/*        ###    ### ########## ######### - 01001000 01000101 01000100        */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* ====      INCLUDES     ==== */

# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <mlx.h>
# include <stdarg.h>
# include <fcntl.h>

/* ====  functions Part 1 ==== */

/* ******************************************************************** */
/*                                                                      */
/*        :::::::::     :::     ::::::::: :::::::::::            :::    */
/*       :+:    :+:  :+: :+:   :+:    :+:    :+:              :+:+:     */
/*      +:+    +:+ +:+   +:+  +:+    +:+    +:+                +:+      */
/*     +#++:++#+ +#++:++#++: +#++:++#:     +#+                +#+       */
/*    +#+       +#+     +#+ +#+    +#+    +#+                +#+        */
/*   #+#       #+#     #+# #+#    #+#    #+#                #+#         */
/*  ###       ###     ### ###    ###    ###              #######        */
/*                                                                      */
/* ******************************************************************** */

typedef struct s_data {
	void	*init;
	void	*win;
	int		bits_per_pixel;
	int		line_length;
	void	*wall_img;
	void	*wall1_img;
	void	*grasse_lfo9_img;
	void	*grasse_lte7t_img;
	void	*grasse_lymn_img;
	void	*grasse_left_img;
	void	*grasse_img;
	void	*hero_init_img;
	void	*hero_bas_img;
	void	*hero_haut_img;
	void	*hero_droite_img;
	void	*hero_gauche_img;
	void	*dor_open_img;
	void	*dor_close_img;
	void	*ennemie1_img;
	void	*coin_img;
	void	*coin1_img;
	void	*coin2_img;
	void	*coin3_img;
	void	*coin4_img;
	void	*coin5_img;
	void	*coin6_img;
	void	*coin7_img;
	void	*coin8_img;
	void	*lfo9_lymn_img;
	void	*lfo9_lysr_img;
	void	*lte7t_lymn_img;
	void	*lte7t_lysr_img;
	void	*img_start1_img;
	char	*img_start1_ptr;
	void	*img_start2_img;
	char	*img_start2_ptr;
	void	*img_start3_img;
	char	*img_start3_ptr;
	void	*img_start4_img;
	char	*img_start4_ptr;
	void	*img_start5_img;
	char	*img_start5_ptr;
	void	*img_start6_img;
	char	*img_start6_ptr;
	void	*hero_portal_img;
	char	*hero_portal_ptr;
	char	*lfo9_lymn_ptr;
	char	*lfo9_lysr_ptr;
	char	*lte7t_lymn_ptr;
	char	*lte7t_lysr_ptr;
	char	*wall_ptr;
	char	*wall1_ptr;
	char	*wall2_ptr;
	char	*grasse_ptr;
	char	*grasse_lfo9_ptr;
	char	*grasse_lte7t_ptr;
	char	*grasse_lymn_ptr;
	char	*grasse_left_ptr;
	char	*hero_init_ptr;
	char	*hero_bas_ptr;
	char	*hero_haut_ptr;
	char	*hero_gauche_ptr;
	char	*hero_droite_ptr;
	char	*dor_open_ptr;
	char	*dor_close_ptr;
	char	*coin_ptr;
	char	*coin1_ptr;
	char	*coin2_ptr;
	char	*coin3_ptr;
	char	*coin4_ptr;
	char	*coin5_ptr;
	char	*coin6_ptr;
	char	*coin7_ptr;
	char	*coin8_ptr;
	char	*ennemie1_ptr;
	char	**map;
	int		width;
	int		height;
	int		cmp;
	int		coinat;
	int		walls_printed;
}				t_data;

char			*ft_itoa(int n);
void			ft_mlx_file_to_image(t_data *game, int x);
int				ft_exit(void);
void			print_terminal_decoration(int x);
void			ft_constract(t_data *game);
void			the_game(t_data *game, int x, char **map, char *path);
void			print_map_terminal(t_data *game);
void			check_mine(int *a, int *b, char **map);
void			finde_player(int *x, int *y, t_data *game);
void			game_over(char *r, t_data *game, int status);
void			print_map_graf(t_data *game);
int				ft_keyboard(int key, t_data *game);
void			mouve_lymn(t_data *game, int x, int y);
void			mouve_lte7t(t_data *game, int x, int y);
void			mouve_lysr(t_data *game, int x, int y);
void			mouve_lfo9(t_data *game, int x, int y);
int				read_map(int fd, char **str);
void			ft_realloc(char **str, int size);
char			**ft_split(char *s, char c);
int				ft_strlen(char *str);
int				check_map(char **map, t_data *game, char *map_ext);
int				hexcount(unsigned long long num);
int				ft_len(long nb);
int				ft_putchar(char c);
int				ft_putstr(const char *c);
int				ft_putnbr(long long nb, int fd);
int				ft_hex(unsigned int num);
int				ft_hexx(unsigned int num);
int				ft_adress(unsigned long long num);
int				ft_memorryadress(unsigned long long num);
unsigned int	uconvert(long long num);
int				ft_printf(const char *string, ...);
int				check_exit(char **map);
int				check_coins(char **map, t_data *game);
int				check_player(char **map);
int				check_ext(char *str);
int				check_obj(char **map);
int				check_block(char **map, int x, int y);
int				ft_animate(t_data *game);
char			*ft_strjoin(char const *s1, char const *s2);
void			print_border_grasse(t_data *game, int x, int y);
void			mouve_e(t_data *game);
void			ft_mlx_file_to_image(t_data *game, int x);
void			ft_constract(t_data *game);
void			print_graf_1(t_data *game, int x, int y);
void			print_graf_2(t_data *game, int x, int y);

#endif