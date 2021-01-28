# Libft
## Description

My implementation some functions from the libc.<br>

## Usage

``make`` will compile a ``libft.a`` binary.

## Functions

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
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
```
```c
int		ft_strncmp(const char *str1, const char *str2, size_t n);
```
```c
int		ft_strlen(char *str);
```
```c
int		ft_isalpha(int ch);
```
```c
int		ft_isdigit(int ch);
```
```c
int		ft_isalnum(int ch);
```
```c
int		ft_isascii(int ch);
```
```c
int		ft_isprint(int ch);
```
```c
int		ft_toupper(int ch);
```
```c
int		ft_tolower(int ch);
```
```c
int		ft_atoi(const char *str);
```
