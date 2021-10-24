/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apending <apending@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:49:09 by apending          #+#    #+#             */
/*   Updated: 2020/11/08 18:51:25 by apending         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <errno.h>

# define COLOR_RED      "\x1b[31m"
# define COLOR_RED_B    "\x1b[1;31m"
# define COLOR_GREEN    "\x1b[32m"
# define COLOR_YELLOW   "\x1b[33m"
# define COLOR_YELLOW_B "\x1b[1;33m"
# define COLOR_BLUE     "\x1b[34m"
# define COLOR_MAGENTA  "\x1b[35m"
# define COLOR_CYAN     "\x1b[36m"
# define COLOR_CYAN_B   "\x1b[1;36m"
# define COLOR_RESET    "\x1b[0m"

typedef struct s_dlst
{
	void			*content;
	struct s_dlst	*next;
	struct s_dlst	*prev;
}					t_dlst;

void	*ft_memset(void *buf, int ch, size_t count);
void	*ft_memcpy(void *dest, const void *source, size_t count);
void	*ft_memccpy(void *dest, const void *source, int ch, size_t count);
void	*ft_memmove(void *dest, const void *source, size_t count);
void	*ft_memchr(const void *arr, int c, size_t n);
void	*ft_calloc(size_t num, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strichr(char *str, int sumb);
char	*ft_strchr(char *str, int sumb);
char	*ft_strrchr(char *dst, int sumb);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *str, char const *set);
char	**ft_split(char const *s, char c);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_strlen(char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_atoi(const char *str);

void	kl_end(char *str, int exit_code);
void	*kl_malloc(size_t size);
void	*kl_calloc(size_t num, size_t size);
void	kl_free_arr(void *arr);
char	*kl_strdup_len(const char *str, size_t len);
char	*kl_strjoin_free(char *s1, char *s2);

void	arr_cpy(void **dst, void **src);
void	**arr_add_back(void **arr, void *new_el);

t_dlst	*dlst_new(void *content);
t_dlst	*dlst_last_node(t_dlst *lst);
void	dlst_add_front(t_dlst **s_dlst_src, t_dlst *s_dlst_new);
void	dlst_add_back(t_dlst **s_dlst_src, t_dlst *new);
void	dlst_map(t_dlst *s_dlst, void (*func)(void *));
void	dlst_loop(t_dlst *s_dlst);
void	dlst_remove_node(t_dlst	*node);
void	dlst_free(t_dlst *s_dlst);

#endif
