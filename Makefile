
NAME = wolf3d

SRC = \
	$(addprefix src/, \
\
	add_initial_state.c \
	create_vector_array.c \
	create_wall_arr.c \
	redraw_map.c \
	turn_veiw_into_image.c \
	update_veiw.c \
	set_hooks.c \
	rotate_vectarr.c \
	is_pos_in_wall.c \
	key_press_hook.c \
	key_release_hook.c \
	loop_hook.c \
	shade_colour.c \
	move_forward.c \
	move_backward.c \
	move_left.c \
	move_right.c \
	main.c \
	) \
\
	$(addprefix libft/, \
\
	ft_memalloc.c \
	ft_bzero.c \
	ft_memset.c \
	ft_putnbr_fd.c \
	ft_putchar_fd.c \
	ft_strlen.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	) \
\

OBJ =  \
	$(addprefix obj/, \
\
	add_initial_state.o \
	create_vector_array.o \
	create_wall_arr.o \
	redraw_map.o \
	turn_veiw_into_image.o \
	update_veiw.o \
	set_hooks.o \
	rotate_vectarr.o \
	key_press_hook.o \
	key_release_hook.o \
	loop_hook.o \
	shade_colour.o \
	is_pos_in_wall.o \
	move_forward.o \
	move_backward.o \
	move_left.o \
	move_right.o \
	main.o \
	ft_memalloc.o \
	ft_bzero.o \
	ft_memset.o \
	ft_putstr.o \
	ft_strlen.o \
	ft_putstr_fd.o \
	ft_putnbr_fd.o \
	ft_putchar_fd.o \
	ft_putnbr.o \
	) \
\

FLAGS = #-Wall -Wextra -Werror

INC = -I ./minilibx -I ./includes -I ./libft/includes

PATH = minilibx -lmlx -framework OpenGL -framework AppKit

MLBX = minilibx/libmlx.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) $(INC)
	/bin/mv *.o obj
	gcc $(FLAGS) -L $(PATH) $(OBJ) $(MLBX) -o $(NAME)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
