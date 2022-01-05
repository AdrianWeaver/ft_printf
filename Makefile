NAME			=	libftprintf.a

SRCS			=	ft_printf.c				\
					ft_printf_putchar.c		\
					ft_strlen.c				\
					ft_printf_putstr.c		\
					ft_printf_putnbr.c		\
					ft_printf_hex.c			\
					ft_printf_uhex.c

OBJS			=	$(SRCS:.c=.o)

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $^

.o:				.c
				$(CC) $(CFLAGS) -c $^ -o $@ -I $(PATH)
				
clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)
				
re:				fclean all

test:			re
				$(CC) main.c $(NAME) && ./a.out

.PHONY:			all re clean fclean test
