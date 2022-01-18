NAME				=	libftprintf.a

SRCS_PATH			=	./sources/

OBJS_PATH			=	./objects/

LIBFT_PATH			=	./libft/

LIBFT				=	$(addprefix $(LIBFT_PATH),libft.a)

SRCS				=	ft_lstreset.c				\
						ft_printf_c.c				\
						ft_printf_parse.c			\
						ft_printf.c

OBJS			=	$(addprefix $(OBJS_PATH),$(SRCS:.c=.o))

CC				=	gcc

CFLAGS			=	-MMD -Wall -Wextra -Werror $(INC)

INC				=	-I ./includes				\
					-I ./libft

DEPS			=	$(OBJS:.o=.d)

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFT)
				ar -rcs $(NAME) $^

$(LIBFT):		
				$(MAKE) -C $(LIBFT_PATH) all

$(OBJS_PATH)%.o:			$(SRCS_PATH)%.c
				@mkdir -p $(OBJS_PATH)
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -f $(OBJS) $(DEPS)
				$(MAKE) -C $(LIBFT_PATH) clean

fclean:			clean
				rm -f $(NAME)
				$(MAKE) -C $(LIBFT_PATH) fclean
				
re:				fclean all

test:			re
				$(CC) main.c $(NAME) -I $(INC) && ./a.out

-include $(DEPS)

.PHONY:			all re clean fclean test
