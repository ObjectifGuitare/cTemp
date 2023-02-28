CC = gcc -Wall -Wextra -Werror

SRCSDIR = srcs
INCDIR = includes

FUNC = $(SRCSDIR)/main.c $(SRCSDIR)/ft_atoi.c $(SRCSDIR)/ft_putnbr.c $(SRCSDIR)/operators.c

NAME = do-op

all: $(NAME)

$(NAME): $(FUNC) includes/doop.h
	$(CC) $(FUNC) -o $(NAME) -I $(INCDIR)

clean:
	rm -f $(NAME)

re: clean all