NAME = libft.a

MY_SOURCES = ./srcs/ft_putchar.c \
	     ./srcs/ft_putstr.c \
	     ./srcs/ft_strcmp.c \
	     ./srcs/ft_strlen.c \
	     ./srcs/ft_swap.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rc $(NAME) $(MY_OBJECTS)

.c.o:
	cc $(CFLAGS) -I includes -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

ft_putchar.c:
	cc $(CFLAGS) -I includes -c ./srcs/ft_putchar.c -o ft_putchar.o

ft_putstr.c:
	cc $(CFLAGS) -I includes -c ./srcs/ft_putstr.c -o ft_putstr.o

ft_strcmp.c:
	cc $(CFLAGS) -I includes -c ./srcs/ft_strcmp.c -o ft_strcmp.o

ft_strlen.c:
	cc $(CFLAGS) -I includes -c ./srcs/ft_strlen.c -o ft_strlen.o

ft_swap.c:
	cc $(CFLAGS) -I includes -c ./srcs/ft_swap.c -o ft_swap.o
