SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
NAME = libft.a
OBJS = ${SRCS:.c=.o}

all:	${NAME}

libft.a: ${OBJS}
	ar -rc libft.a ${OBJS}
.c.o: 
	gcc -Wall -Wextra -Werror -c -I includes/ $< -o ${<:.c=.o}
clean:
	rm -f ${OBJS}
fclean:	clean
	rm -f libft.a
re:	fclean all