/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:10:46 by aweaver           #+#    #+#             */
/*   Updated: 2022/01/18 09:49:17 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>

# ifndef T_LIST_
#  define T_LIST_

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

# endif

# ifndef FT_ISALPHA_H
#  define FT_ISALPHA_H

int		ft_isalpha(int c);

# endif

# ifndef FT_ISDIGIT_H
#  define FT_ISDIGIT_H

int		ft_isdigit(int c);

# endif

# ifndef FT_ISALNUM_H
#  define FT_ISALNUM_H

int		ft_isalnum(int c);

# endif

# ifndef FT_ISASCII_H
#  define FT_ISASCII_H

int		ft_isascii(int c);

# endif

# ifndef FT_ISPRINT_H
#  define FT_ISPRINT_H

int		ft_isprint(int c);

# endif

# ifndef FT_STRLEN_H
#  define FT_STRLEN_H

size_t	ft_strlen(const char *s);

# endif

# ifndef FT_MEMSET_H
#  define FT_MEMSET_H

void	*ft_memset(void *s, int c, size_t n);

# endif

# ifndef FT_BZERO_H
#  define FT_BZERO_H

void	ft_bzero(void *s, size_t n);

# endif

# ifndef FT_MEMCPY_H
#  define FT_MEMCPY_H

void	*ft_memcpy(void *dest, const void *src, size_t n);

# endif

# ifndef FT_MEMMOVE_H
#  define FT_MEMMOVE_H

void	*ft_memmove(void *dest, const void *src, size_t n);

# endif

# ifndef FT_STRLCPY_H
#  define FT_STRLCPY_H

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

# endif

# ifndef FT_STRLCAT_H
#  define FT_STRLCAT_H

size_t	ft_strlcat(char *dst, const char *src, size_t size);

# endif

# ifndef FT_TOUPPER_H
#  define FT_TOUPPER_H

int		ft_toupper(int c);

# endif

# ifndef FT_TOLOWER_H
#  define FT_TOLOWER_H

int		ft_tolower(int c);

# endif

# ifndef FT_STRCHR_H
#  define FT_STRCHR_H

char	*ft_strchr(const char *s, int c);

# endif

# ifndef FT_STRRCHR_H
#  define FT_STRRCHR_H

char	*ft_strrchr(const char *s, int c);

# endif

# ifndef FT_STRNCMP_H
#  define FT_STRNCMP_H

int		ft_strncmp(const char *s1, const char *s2, size_t n);

# endif

# ifndef FT_MEMCHR_H
#  define FT_MEMCHR_H

void	*ft_memchr(const void *s, int c, size_t n);

# endif

# ifndef FT_MEMCMP_H
#  define FT_MEMCMP_H

int		ft_memcmp(const void *s1, const void *s2, size_t n);

# endif

# ifndef FT_STRNSTR_H
#  define FT_STRNSTR_H

char	*ft_strnstr(const char *big, const char *little, size_t len);

# endif

# ifndef FT_ATOI_H
#  define FT_ATOI_H

int		ft_atoi(const char *nptr);

# endif

# ifndef FT_CALLOC_H
#  define FT_CALLOC_H

void	*ft_calloc(size_t nmemb, size_t size);

# endif

# ifndef FT_STRDUP_H
#  define FT_STRDUP_H

char	*ft_strdup(const char *s);

# endif

# ifndef FT_SUBSTR_H
#  define FT_SUBSTR_H

char	*ft_substr(char const *s, unsigned int start, size_t len);

# endif

# ifndef FT_STRJOIN_H
#  define FT_STRJOIN_H

char	*ft_strjoin(char const *s1, char const *s2);

# endif

# ifndef FT_STRTRIM_H
#  define FT_STRTRIM_H

char	*ft_strtrim(char const *s1, char const *set);

# endif

# ifndef FT_SPLIT_H
#  define FT_SPLIT_H

char	**ft_split(char const *s, char c);

# endif

# ifndef FT_ITOA_H
#  define FT_ITOA_H

char	*ft_itoa(int n);

# endif

# ifndef FT_STRMAPI_H
#  define FT_STRMAPI_H

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

# endif

# ifndef FT_STRITERI_H
#  define FT_STRITERI_H

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

# endif

# ifndef FT_PUTNBR
#  define FT_PUTNBR

int		ft_putnbr(int n);

# endif
# ifndef FT_PUTENDL
#  define FT_PUTENDL

int		ft_putendl(char *s);

# endif
# ifndef FT_PUTSTR
#  define FT_PUTSTR

int		ft_putstr(char *s);

# endif
# ifndef FT_PUTCHAR
#  define FT_PUTCHAR

int		ft_putchar(char c);

# endif

# ifndef FT_PUTCHAR_FD_H
#  define FT_PUTCHAR_FD_H

void	ft_putchar_fd(char c, int fd);

# endif

# ifndef FT_PUTSTR_FD_H
#  define FT_PUTSTR_FD_H

void	ft_putstr_fd(char *s, int fd);

# endif

# ifndef FT_PUTENDL_FD_H
#  define FT_PUTENDL_FD_H

void	ft_putendl_fd(char *s, int fd);

# endif

# ifndef FT_PUTNBR_FD_H
#  define FT_PUTNBR_FD_H

void	ft_putnbr_fd(int n, int fd);

# endif

# ifndef FT_LSTNEW_H
#  define FT_LSTNEW_H

t_list	*ft_lstnew(void *content);

# endif

# ifndef FT_LSTADD_FRONT_H
#  define FT_LSTADD_FRONT_H

void	ft_lstadd_front(t_list **alst, t_list *new);

# endif

# ifndef FT_LSTSIZE_H
#  define FT_LSTSIZE_H

int		ft_lstsize(t_list *lst);

# endif

# ifndef FT_LSTLAST_H
#  define FT_LSTLAST_H

t_list	*ft_lstlast(t_list *lst);

# endif

# ifndef FT_LSTADD_BACK_H
#  define FT_LSTADD_BACK_H

void	ft_lstadd_back(t_list **alst, t_list *new);

# endif

# ifndef FT_LSTDELONE_H
#  define FT_LSTDELONE_H

void	ft_lstdelone(t_list *lst, void (*del)(void*));

# endif

# ifndef FT_LSTCLEAT_H
#  define FT_LSTCLEAT_H

void	ft_lstclear(t_list **lst, void (*del)(void*));

# endif

# ifndef FT_LSTITER_H
#  define FT_LSTITER_H

void	ft_lstiter(t_list *lst, void (*f)(void *));

# endif

# ifndef FT_LSTMAP_H
#  define FT_LSTMAP_H

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

# endif

# ifndef FT_COUNT_DIGITS
#  define FT_COUNT_DIGITS

int		ft_count_digits(long int nb);
# endif
#endif
