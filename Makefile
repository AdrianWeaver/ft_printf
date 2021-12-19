NAME			=	libftprintf.a

SRCS			=	ft_printf.c				\
					ft_printf_putchar.c		

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

.PHONY:			all re clean fclean
