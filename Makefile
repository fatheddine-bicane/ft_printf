CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_nb_count.c ft_putunint.c ft_putadrr.c
OFILES = $(SRCS:.c=.o)

$(NAME) : $(OFILES)

all : $(NAME)

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@
	ar rcs $(NAME) $@

clean:
	rm -rf  $(OFILES) $(BOFILES)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

bonus: $(BOFILES)

.PHONY:	all bonus clean