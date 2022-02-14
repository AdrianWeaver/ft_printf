NAME				=	libftprintf.a

SRCS_PATH			=	./sources/

OBJS_PATH			=	./objects/

LIBFT_PATH			=	./libft/

LIBFT				=	$(addprefix $(LIBFT_PATH),libft.a)

SRCS				=	ft_lstreset.c				\
						ft_printf_c.c				\
						ft_printf_s.c				\
						ft_printf_p.c				\
						ft_printf_u.c				\
						ft_printf_x.c				\
						ft_printf_o.c				\
						ft_printf_id.c				\
						ft_flag_hyphen.c			\
						ft_printf_check_flags.c		\
						ft_printf_parse.c			\
						ft_printf.c

OBJS			=	$(addprefix $(OBJS_PATH),$(SRCS:.c=.o))

CC				=	gcc

CFLAGS			=	-MMD -Wall -Wextra -Werror $(INC)

INC				=	-I ./includes -I ./libft

DEPS			=	$(OBJS:.o=.d)

all:			$(NAME)

$(NAME):		$(OBJS) $(LIBFT)
				cp -p $(LIBFT) $(NAME)
				ar -rcs $(NAME) $(OBJS) 

bonus:			$(NAME)

$(LIBFT):		
				$(MAKE) -C $(LIBFT_PATH) all

$(OBJS_PATH)%.o:			$(SRCS_PATH)%.c
				@mkdir -p $(OBJS_PATH)
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -rf $(OBJS_PATH)
				$(MAKE) -C $(LIBFT_PATH) clean

fclean:			clean
				rm -f $(NAME)
				$(MAKE) -C $(LIBFT_PATH) fclean
				
re:				fclean all

-include $(DEPS)

.PHONY:			all re clean fclean
