NAME = libftprintf.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnumber.c ft_putunsigned.c ft_putpointer.c ft_puthex.c
OBJS = $(SRCS:.c=.o)

INTRO_DONE = .intro_done

all: intro $(NAME)

intro: $(INTRO_DONE)

$(INTRO_DONE):
	@echo "\033[1;36m"
	@echo "███████╗████████╗        ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗"
	@echo "██╔════╝╚══██╔══╝        ██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝"
	@echo "█████╗     ██║           ██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗  "
	@echo "██╔══╝     ██║           ██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝  "
	@echo "██║        ██║   ███████╗██║     ██║  ██║██║██║ ╚████║   ██║   ██║     "
	@echo "╚═╝        ╚═╝   ╚══════╝╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝     "
	@echo "\033[0m"
	@echo "                                                 Created by: Allan Rabelo"
	@touch $(INTRO_DONE)

$(NAME): $(OBJS)
	@echo "\033[1;36mBuilding custom implementation of printf (ft_printf)...\033[0m"
	@ar rcs $(NAME) $(OBJS)
	@echo "\033[1;32mBuild complete!\033[0m"

%.o: %.c
	@$(CC) $(CCFLAGS) -c $< -o $@
	@echo "$(YELLOW)[*]$(RESET) Compiling $<"

clean:
	@echo "\033[1;33m[✗] Cleaning the objects...\033[0m"
	@rm -rf $(OBJS)
	@echo "\033[1;32mCleaning complete!\033[0m"

fclean: clean
	@echo "\033[1;33m[*] Checking remaining files...\033[0m"
	@rm -rf $(NAME) $(INTRO_DONE)
	@echo "\033[1;32mChecking complete!\033[0m"

re: fclean all

.PHONY: all clean fclean re intro
