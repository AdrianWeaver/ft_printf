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
						ft_flag_hyphen.c			\
						ft_printf_check_flags.c		\
						ft_printf_parse.c			\
						ft_printf.c

OBJS			=	$(addprefix $(OBJS_PATH),$(SRCS:.c=.o))

CC				=	gcc

CFLAGS			=	-g3 -MMD -Wall -Wextra -Werror $(INC)

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

test_u:			all
				$(CC) main_u.c -o a.out_u libftprintf.a ./libft/libft.a $(INC)
				./a.out_u | cat -e

test_U:			all
				$(CC) -fsanitize=address main_u.c -o a.out_u libftprintf.a ./libft/libft.a $(INC)
				./a.out_u | cat -e

test_x:			all
				$(CC) -g3 main_x.c -o a.out_x libftprintf.a ./libft/libft.a $(INC)
				./a.out_x | cat -e

test_X:			all
				$(CC) -g3 main_X.c -o a.out_X libftprintf.a ./libft/libft.a $(INC)
				./a.out_X | cat -e
-include $(DEPS)

.PHONY:			all re clean fclean test test_c test_p test_s
