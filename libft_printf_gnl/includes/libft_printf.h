/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msobral- <msobral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:10:14 by msobral-          #+#    #+#             */
/*   Updated: 2026/02/23 11:27:36 by msobral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_print
{
	va_list	ap;
	int		width;
	int		precision;
	int		prec_dot;
	int		dash;
	int		zero;
	int		sp;
	int		sign;
	int		is_zero;
	int		alt;
	char	type;
	int		printed;
	int		roll_back;
}				t_print;

int		ft_printf(const char *format, ...);

int		ft_flag_check(const char *format, t_print *values);
int		ft_specifier_check(const char *format, t_print *values);

int		ft_put_precision(t_print *values);
int		ft_right_align(t_print *values);
int		ft_left_align(t_print *values);
int		ft_roll_back(const char *format, t_print *values);
t_print	*ft_initialize_values(t_print *values);
t_print	*ft_update_values(t_print *values, int len);
size_t	ft_flag_width_count(const char *format, t_print *values);

// print functions
int		ft_print_c(t_print *values);
int		ft_print_s(t_print *values);
int		ft_print_p(t_print *values);
int		ft_print_i(t_print *values);
int		ft_print_u(t_print *values);
int		ft_print_lowerx(t_print *values);
int		ft_print_upperx(t_print *values);

// individual functions
int		ft_putchar_i(char c);
int		ft_putnchar_i(char c, int n);
int		ft_putstr_i(char *s);
int		ft_putnstr_i(char *s, int n);
int		ft_putnbr_i(int n);
int		ft_putui_i(unsigned int n);
int		ft_putui_base_i(unsigned int n, char *base);
int		ft_putul_base_i(unsigned long n, char *base);
size_t	ft_countnbr_base(int n, int base);
size_t	ft_countui_base(unsigned int n, unsigned int base);
size_t	ft_countul_base(unsigned long n, unsigned long base);

//		LIBC FUNCTIONS

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strnchr(const char *s, char c, int n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_atoi(const char *str);
int		ft_atoi_base(const char *str, int str_base);

void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

//		ADDITIONAL FUNCTIONS

char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s1, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

//		LIST FUNCTIONS

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//		ADDED FUNCTIONS

double	ft_floor(double x);
double	ft_sqrt(double x);
void	ft_freeall(char **temp);

//		GET NEXT LINE

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);

// utils
void	clear_buffer(char *buffer);
size_t	gnl_strlen(const char *s);
int		gnl_strchr(char *s, int c);
char	*gnl_strjoin(char *s1, char *s2);

#endif
