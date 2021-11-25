#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int	ft_isalpha(int	i);
int	ft_isdigit(int	i);
int	ft_isalnum(int	i);
int	ft_isascii(int	i);
int	ft_isprint(int	i);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
void 	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char 	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
int	ft_strncmp(char *s1, char *s2, int n);
//void	*memchr(const void *s, int c, size_t n);
//int	memcmp(const void *s1, const void *s2, size_t n);
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_atoi(char *str);

#endif
