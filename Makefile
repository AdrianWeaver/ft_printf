NAME			=	libftprintf.a

SRCS_PATH		=	./utils/

SRCS			=	$(addprefix $(SRCS_PATH),ft_printf.c				\
					ft_printf_putchar.c		\
					ft_strlen.c				\
					ft_printf_putstr.c		\
					ft_printf_putnbr.c		\
					ft_printf_putnbr_base.c	\
					ft_printf_uhex.c)

OBJS			=	$(SRCS:.c=.o)

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

INC				=	./includes

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $^

%.o:			%.c
				$(CC) $(CFLAGS) -c $^ -o $@ -I $(INC)
				
clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)
				
re:				fclean all

test:			re
				$(CC) main.c $(NAME) -I $(INC) && ./a.out

.PHONY:			all re clean fclean test
