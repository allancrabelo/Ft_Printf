NAME = libftprintf.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C libft
	@cp libft/libft.a .
	@mv libft.a ${NAME}
	@ar rcs $(NAME) $(OBJS)

clean:
	@make clean -C ./libft
	@rm -rf $(OBJS)

fclean: clean
	@make clean -C ./libft
	@rm -rf $(NAME)

re: fclean all

.SILENT: