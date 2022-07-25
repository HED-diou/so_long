
CC = cc -Wall -Werror -Wextra

MLX = -lmlx -framework OpenGL -framework AppKit

SRCS =	functions/the_game.c \
		functions/so_long.c \
		functions/ft_split.c \
		functions/read_map.c \
		functions/check_map.c \
		functions/print_map_terminal.c \
		functions/check_mine.c \
		functions/finde_player.c \
		functions/game_over.c \
		functions/ft_keyboard.c \
		functions/print_map_graf.c \
		functions/check_exit.c \
		functions/check_coins.c \
		functions/check_player.c \
		functions/check_block_obj_walls.c \
		printf/ft_adress.c \
		printf/ft_hex.c \
		printf/ft_hexx.c \
		printf/ft_len.c \
		printf/ft_memorryadress.c \
		printf/ft_putnbr.c \
		printf/hexcount.c \
		printf/ft_putchar.c \
		printf/ft_putstr.c \
		printf/uconvert.c \
		printf/ft_printf.c \
		mouve/mouve.c \
		mouve/mouve_e.c \
		ft_animate.c \
		functions/ft_itoa.c \
		functions/ft_strjoin.c \
		functions/mlx_file_to_image.c \
		functions/print_graf.c \


OBJS = ${SRCS:.c=.o}

ARV = ar -rcs

NAME = so_long

REM = rm -f

# .c.o :
# 	$(CC) $(CFLAGS) $< -o $@
# 	$(ARV) $(NAME) $@

all : $(NAME)
$(NAME) : ${OBJS}
	@echo "\033[1;32m[ Executable check ]\033[0m"
	@-$(CC) $(MLX) ${SRCS} -o so_long
	@-$(ARV) $(NAME) $@
	@echo "\033[1;32m[ Executable Updated ]\033[0m"

# run:
# 	./so_long map/map1.ber & afplay zeldamusic.mp3 
clean :
	@-${REM} ${OBJS}
	@echo "\033[1;31m[ Delete Objects files ]\033[0m"

fclean : clean
	@-${REM} ${NAME}
	@echo "\033[1;31m[ Delete Executable ]\033[0m"

re : fclean all

.PHONY : all clean fclean run re