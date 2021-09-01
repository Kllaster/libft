# Libft
## Description

This is my implementation of some functions from the libc and some classical data structures.

## Usage

``make`` will compile a ``libft.a`` binary.

### Single-line installation
> ```commandline 
> git clone https://github.com/Kllaster/libft.git && cd libft && make
>  ```

## Functions libc

```c
void	*ft_memset(void *buf, int ch, size_t count);
```
```c
void	*ft_memcpy(void *dest, const void *source, size_t count);
```
```c
void	*ft_memccpy(void *dest, const void *source, int ch, size_t count);
```
```c
void	*ft_memmove(void *dest, const void *source, size_t count);
```
```c
void	*ft_memchr(const void *arr, int c, size_t n);
```
```c
void	*ft_calloc(size_t num, size_t size);
```
```c
void	ft_bzero(void *s, size_t n);
```
```c
void	ft_putchar_fd(char c, int fd);
```
```c
void	ft_putstr_fd(char *s, int fd);
```
```c
void	ft_putendl_fd(char *s, int fd);
```
```c
void	ft_putnbr_fd(int n, int fd);
```
```c
size_t	ft_strlcat(char *dst, const char *src, size_t size);
```
```c
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
```
```c
char	*ft_strchr(char *str, int sumb);
```
```c
char	*ft_strrchr(char *dst, int sumb);
```
```c
char	*ft_strnstr(const char *big, const char *little, size_t len);
```
```c
char	*ft_strdup(const char *str);
```
```c
char	*ft_substr(char const *s, unsigned int start, size_t len);
```
```c
char	*ft_strjoin(char const *s1, char const *s2);
```
```c
char	*ft_itoa(int n);
```
```c
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
```c
char	*ft_strtrim(char const *str, char const *set);
```
```c
char	**ft_split(char const *s, char c);
```
```c
int	ft_memcmp(const void *buf1, const void *buf2, size_t count);
```
```c
int	ft_strncmp(const char *str1, const char *str2, size_t n);
```
```c
int	ft_strlen(char *str);
```
```c
int	ft_isalpha(int ch);
```
```c
int	ft_isdigit(int ch);
```
```c
int	ft_isalnum(int ch);
```
```c
int	ft_isascii(int ch);
```
```c
int	ft_isprint(int ch);
```
```c
int	ft_toupper(int ch);
```
```c
int	ft_tolower(int ch);
```
```c
int	ft_atoi(const char *str);
```

## Functions kl

### Description
Auxiliary functions, additions to standard functions.

```c
void	*kl_malloc(size_t size);
```
```c
void	kl_end(char *str, int exit_code);
```
```c
void	kl_free_arr(void *arr);
```
```c
char	*kl_strdup_len(const char *str, size_t len);
```

## Functions dlst

### Description
Functions for working with double linked list.
```c
typedef struct  s_dlst
{
    void            *content;
    struct s_dlst   *next;
    struct s_dlst   *prev;
}               t_dlst;
```
```c
t_dlst	*dlst_new(void *content);
```
```c
void	dlst_add_front(t_dlst **s_dlst_src, t_dlst *s_dlst_new);
```
```c
void	dlst_add_back(t_dlst **s_dlst_src, t_dlst *new);
```
```c
void	dlst_map(t_dlst *s_dlst, void (*func)(void *));
```
```c
void	dlst_loop(t_dlst **s_dlst);
```
