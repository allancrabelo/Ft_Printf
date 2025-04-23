NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnumber.c ft_putunsigned.c ft_putpointer.c ft_puthex.c
OBJS = $(SRCS:.c=.o)

SRCS_DIR = .
LIBFT_DIR = libft

all: libft $(NAME)

libft:
	@echo "Building libft..."
	@$(MAKE) bonus -C $(LIBFT_DIR) > /dev/null
	@cp $(LIBFT_DIR)/libft.a $(NAME)

$(NAME): $(OBJS)
	@echo "Building printf library..."
	@ar rcs $(NAME) $(OBJS)
	@echo "Build complete!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean > /dev/null
	@rm -rf $(OBJS)
	@echo "Cleaned all objects!"

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean > /dev/null
	@rm -rf $(NAME)
	@echo "Cleaned .a file!"


re: fclean all

.PHONY: all clean fclean re libft
