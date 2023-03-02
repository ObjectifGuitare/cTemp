CC = gcc -Wall -Wextra -Werror

SRCSDIR = srcs
INCDIR = includes

FUNC = $(SRCSDIR)/ft_putchar.c $(SRCSDIR)/ft_swap.c\
		$(SRCSDIR)/ft_putstr.c $(SRCSDIR)/ft_strlen.c\
		$(SRCSDIR)/ft_strcmp.c



NAME = libft.a

OBJECTS = $(FUNC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FUNC) includes/ft.h
	$(CC) -c $< -o $@ -I $(INCDIR)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
