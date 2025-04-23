NAME = libftprintf.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnumber.c ft_putunsigned.c ft_putpointer.c ft_puthex.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft
SRCS_DIR = .

all: libft $(NAME)

libft:
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a .
	mv libft.a ${NAME}
	ar rcs $(NAME) $(OBJS)

clean:
	make clean -C ./libft
	rm -rf $(OBJS)

fclean: clean
	make clean -C ./libft
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT:
