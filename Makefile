NAME			=	libftprintf.a

SRCS_PATH		=	./sources/

LIBFT_PATH		=	./libft/

LIBFT			=	$(addprefix $(LIBFT_PATH),libft.a)

SRCS			=	$(addprefix $(SRCS_PATH),ft_printf.c				\
					ft_printf_putchar.c		\
					ft_strlen.c				\
					ft_printf_putstr.c		\
					ft_printf_putnbr.c		\
					ft_printf_putnbr_base.c	\
					ft_printf_uhex.c)

SRCS_BONUS		=	$(addprefix $(SRCS_PATH),ft_printf_bonus.c				\
					ft_printf_putchar_bonus.c		\
					ft_strlen_bonus.c				\
					ft_printf_putstr_bonus.c		\
					ft_printf_putnbr_bonus.c		\
					ft_printf_putnbr_base_bonus.c	\
					ft_printf_uhex_bonus.c)

OBJS			=	$(SRCS:.c=.o)

OBJS_BONUS		=	$(SRCS_BONUS:.c=.o)

DEPS			=	$(SRCS:.c=.d)					\
					$(SRCS_BONUS:.c=.d)

CC				=	gcc

CFLAGS			=	-MMD -Wall -Wextra -Werror

INC				=	-I ./includes
					-I ./libft

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFT)
				ar -rcs $(NAME) $^

$(LIBFT):		
				$(MAKE) -C $(LIBFT_PATH) all

%.o:			%.c
				$(CC) $(CFLAGS) -c $< -o $@ $(INC)

clean:
				rm -f $(OBJS) $(OBJS_BONUS) $(DEPS)
				$(MAKE) -C $(LIBFT_PATH) clean

fclean:			clean
				rm -f $(NAME)
				$(MAKE) -C $(LIBFT_PATH) fclean
				
re:				fclean all

re_bonus:		fclean bonus


bonus:			$(OBJS) $(OBJS_BONUS)
				ar -rcs $(NAME) $^

test:			re
				$(CC) main.c $(NAME) -I $(INC) && ./a.out

test_b:			re_bonus
				$(CC) main_bonus.c $(NAME_BONUS) -I $(INC) && ./a.out

-include $(DEPS)
.PHONY:			all re clean fclean test
