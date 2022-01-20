NAME				=	libftprintf.a

SRCS_PATH			=	./sources/

OBJS_PATH			=	./objects/

LIBFT_PATH			=	./libft/

LIBFT				=	$(addprefix $(LIBFT_PATH),libft.a)

SRCS				=	ft_lstreset.c				\
						ft_printf_c.c				\
						ft_printf_s.c				\
						ft_printf_p.c				\
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

test:			all
				$(CC) main.c libftprintf.a ./libft/libft.a $(INC) && ./a.out | cat -e

test_c:			all
				$(CC) main_c.c -o a.out_c libftprintf.a ./libft/libft.a $(INC)
				./a.out_c | cat -e

test_p:			all
				$(CC) main_p.c -o a.out_p libftprintf.a ./libft/libft.a $(INC)
				./a.out_p | cat -e

test_s:			all
				$(CC) main_s.c -o a.out_s libftprintf.a ./libft/libft.a $(INC)
				./a.out_s | cat -e

-include $(DEPS)

.PHONY:			all re clean fclean test test_c test_p test_s
